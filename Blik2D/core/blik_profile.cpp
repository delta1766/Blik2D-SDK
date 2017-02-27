﻿#include <blik.hpp>
#include "blik_profile.hpp"

#include <platform/blik_platform.hpp>

class ProfileClass
{
public:
    Property Laps;

public:
    static ProfileClass& ST() {return *BLIK_STORAGE(ProfileClass);}

private:
    class Stack
    {
    public:
        Property* GroupLap;
        Property* LastLap;
        id_clock FirstLapClock;
        id_clock LastLapClock;
        sint32 DisableLevel;
    public:
        Stack()
        {
            GroupLap = nullptr;
            LastLap = nullptr;
            FirstLapClock = nullptr;
            LastLapClock = nullptr;
            DisableLevel = 0;
        }
        ~Stack()
        {
            Platform::Utility::ReleaseClock(FirstLapClock);
            Platform::Utility::ReleaseClock(LastLapClock);
            BLIK_ASSERT("비활성화된 구간의 Push/Pop이 매칭되지 않습니다", !DisableLevel);
        }
    };
    Array<Stack> Stacks;

public:
    sint32 GetGroupLevel()
    {
        return Stacks.Count();
    }

    void PushGroup(chars name, bool enable)
    {
        if(enable || Stacks.Count() == 0)
        {
            Property* Parent = &Laps;
            if(0 < Stacks.Count())
            {
                if(Stacks[-1].LastLap)
                    Parent = Stacks.At(-1).LastLap;
                else Parent = Stacks.At(-1).GroupLap;
            }
            Stacks.AtAdding().GroupLap = &Parent->At(name);
        }
        else Stacks.At(-1).DisableLevel++;
    }

    void PopGroup()
    {
        BLIK_ASSERT("스택이 존재하지 않습니다", 0 < Stacks.Count());
        Stack& CurStack = Stacks.At(-1);
        if(CurStack.DisableLevel == 0)
        {
            id_clock ThisClock = Platform::Utility::CreateCurrentClock();
            if(CurStack.LastLap)
            {
                const sint64 LapTimeNs = Platform::Utility::GetClockPeriodNsec(CurStack.FirstLapClock, ThisClock);
                const sint64 SectorTimeNs = Platform::Utility::GetClockPeriodNsec(CurStack.LastLapClock, ThisClock);
                CurStack.LastLap->At("_lap_").Set(String::FromFloat(LapTimeNs * 0.000001f) + " ms");
                CurStack.LastLap->At("_sector_").Set(String::FromFloat(SectorTimeNs * 0.000001f) + " ms");
                if(1 < Stacks.Count())
                    Platform::Utility::AddClockNsec(Stacks.At(-2).LastLapClock, LapTimeNs);
            }
            Stacks.SubtractionOne();
            Platform::Utility::ReleaseClock(ThisClock);
        }
        else CurStack.DisableLevel--;
    }

    void AddLap(chars name)
    {
        BLIK_ASSERT("스택이 존재하지 않습니다", 0 < Stacks.Count());
        Stack& CurStack = Stacks.At(-1);
        if(CurStack.DisableLevel == 0)
        {
            id_clock ThisClock = Platform::Utility::CreateCurrentClock();
            if(CurStack.LastLap)
            {
                const sint64 LapTimeNs = Platform::Utility::GetClockPeriodNsec(CurStack.FirstLapClock, ThisClock);
                const sint64 SectorTimeNs = Platform::Utility::GetClockPeriodNsec(CurStack.LastLapClock, ThisClock);
                CurStack.LastLap->At("_lap_").Set(String::FromFloat(LapTimeNs * 0.000001f) + " ms");
                CurStack.LastLap->At("_sector_").Set(String::FromFloat(SectorTimeNs * 0.000001f) + " ms");
            }
            else CurStack.FirstLapClock = Platform::Utility::CreateClonedClock(ThisClock);
            CurStack.LastLapClock = Platform::Utility::CreateClonedClock(ThisClock);
            CurStack.LastLap = &CurStack.GroupLap->At(name);
            Platform::Utility::ReleaseClock(ThisClock);
        }
    }

private:
    ProfileClass() {}
    ~ProfileClass() {}
};

namespace BLIK
{
    void Profile::Start(chars groupname, chars lapname, bool enable)
    {
        #if BLIK_NEED_PROFILE
            BLIK_ASSERT("그룹명이 존재해야 합니다", groupname);
            ProfileClass::ST().PushGroup(groupname, enable);
            if(lapname)
                ProfileClass::ST().AddLap(lapname);
        #endif
    }

    void Profile::Stop()
    {
        #if BLIK_NEED_PROFILE
            BLIK_ASSERT("스택을 초과한 Pop입니다", 0 < ProfileClass::ST().GetGroupLevel());
            ProfileClass::ST().PopGroup();
        #endif
    }

    void Profile::Lap(chars name)
    {
        #if BLIK_NEED_PROFILE
            BLIK_ASSERT("랩명이 존재해야 합니다", name);
            ProfileClass::ST().AddLap(name);
        #endif
    }

    void Profile::Clear()
    {
        #if BLIK_NEED_PROFILE
            ProfileClass::ST().Laps.Clear();
        #endif
    }

    void Profile::DebugPrint()
    {
        #if BLIK_NEED_PROFILE
            ProfileClass::ST().Laps.DebugPrint();
        #endif
    }
}