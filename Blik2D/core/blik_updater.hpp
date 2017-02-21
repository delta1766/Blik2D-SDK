﻿#pragma once
#define BLIK_NOT_INCLUDE_FOR_INTELLIGENCE
#include <blik.hpp>

namespace BLIK
{
    class FrameUpdater;
    class OrderUpdater;

    //! \brief 업데이터지원
    class Updater
    {
        friend class FrameUpdater;
        friend class OrderUpdater;

    public:
        Updater(Updater* neighbor = nullptr, bool atprev = true);
        Updater(const Updater& rhs);
        virtual ~Updater();

        Updater& operator=(const Updater& rhs);

    public:
        void BindUpdater(Updater* neighbor, bool atprev = true);
        Updater* GoPrev(Updater* forefront = nullptr);
        Updater* GoNext(Updater* rearmost = nullptr);

    private:
        Updater* GetNext() const;
        virtual bool UpdateForRender() = 0; // return 랜더링후 화면갱신 필요성여부
        virtual bool UpdateForTick() = 0; // return 틱에 의한 화면갱신 필요성여부

    private:
        void Init();
        void BindAtPrev(Updater* neighbor);
        void BindAtNext(Updater* neighbor);
        void Unbind();

    private:
        Updater* m_prev;
        Updater* m_next;
    };

    ////////////////////////////////////////////////////////////////////////////////
    class FrameUpdater : public Updater
    {
    public:
        FrameUpdater();
        FrameUpdater(const FrameUpdater& rhs);
        virtual ~FrameUpdater() override;

        FrameUpdater& operator=(const FrameUpdater& rhs);

    public:
        bool Flush();
        bool NeedWakeUp();

    protected:
        virtual bool UpdateForRender() override
        {return false;}
        virtual bool UpdateForTick() override
        {return false;}
    };

    ////////////////////////////////////////////////////////////////////////////////
    class OrderUpdater : public Updater
    {
    private:
        typedef bool (*SortCB)(Updater*, Updater*);

    public:
        OrderUpdater();
        OrderUpdater(const OrderUpdater& rhs);
        virtual ~OrderUpdater() override;

        OrderUpdater& operator=(const OrderUpdater& rhs);

    public:
        OrderUpdater* Next() const;
        void Sort(Updater* mover, SortCB cb) const;

    protected:
        virtual bool UpdateForRender() override
        {return false;}
        virtual bool UpdateForTick() override
        {return false;}
    };
}
