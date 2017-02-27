﻿#include <blik.hpp>
#include "blik_addon.hpp"

// 링크옵션 /OPT:NOREF가 안되서 임시코드
bool __LINK_ADDON_AAC__();
bool __LINK_ADDON_ALPR__();
bool __LINK_ADDON_CURL__();
bool __LINK_ADDON_GIT__();
bool __LINK_ADDON_H264__();
bool __LINK_ADDON_JPG__();
bool __LINK_ADDON_TESSERACT__();
static bool _ =
    __LINK_ADDON_AAC__() |
    __LINK_ADDON_ALPR__() |
    __LINK_ADDON_CURL__() |
    __LINK_ADDON_GIT__() |
    __LINK_ADDON_H264__() |
    __LINK_ADDON_JPG__() |
    __LINK_ADDON_TESSERACT__();

namespace BLIK
{
    ////////////////////////////////////////////////////////////////////////////////
    static void Aac_Error() {BLIK_ASSERT("Aac애드온이 준비되지 않았습니다", false);}
    BLIK_DEFINE_ADDON_FUNCTION(Aac, Create, id_acc, return nullptr, sint32, sint32, sint32)
    BLIK_DEFINE_ADDON_FUNCTION(Aac, Release, void, return, id_acc)
    BLIK_DEFINE_ADDON_FUNCTION(Aac, Encode, id_share, return nullptr, id_acc, bytes, sint32)

    id_acc AddOn::Aac::Create(sint32 bitrate, sint32 channel, sint32 samplerate)
    {return Core_AddOn_Aac_Create()(bitrate, channel, samplerate);}

    void AddOn::Aac::Release(id_acc acc)
    {Core_AddOn_Aac_Release()(acc);}

    id_share AddOn::Aac::Encode(id_acc acc, bytes pcm, sint32 length)
    {return Core_AddOn_Aac_Encode()(acc, pcm, length);}

    ////////////////////////////////////////////////////////////////////////////////
    static void Alpr_Error() {BLIK_ASSERT("Alpr애드온이 준비되지 않았습니다", false);}
    BLIK_DEFINE_ADDON_FUNCTION(Alpr, Create, id_alpr, return nullptr, chars, h_view)
    BLIK_DEFINE_ADDON_FUNCTION(Alpr, Release, void, return, id_alpr)
    BLIK_DEFINE_ADDON_FUNCTION(Alpr, Recognize, chars, return "", id_alpr, id_bitmap_read)
    BLIK_DEFINE_ADDON_FUNCTION(Alpr, Summary, chars, return "", chars)

    id_alpr AddOn::Alpr::Create(chars country, h_view listener)
    {return Core_AddOn_Alpr_Create()(country, listener);}

    void AddOn::Alpr::Release(id_alpr alpr)
    {Core_AddOn_Alpr_Release()(alpr);}

    chars AddOn::Alpr::Recognize(id_alpr alpr, id_bitmap_read bitmap)
    {return Core_AddOn_Alpr_Recognize()(alpr, bitmap);}

    chars AddOn::Alpr::Summary(chars recognizedtext)
    {return Core_AddOn_Alpr_Summary()(recognizedtext);}

    ////////////////////////////////////////////////////////////////////////////////
    static void Curl_Error() {BLIK_ASSERT("Curl애드온이 준비되지 않았습니다", false);}
    BLIK_DEFINE_ADDON_FUNCTION(Curl, Create, id_curl, return nullptr, void)
    BLIK_DEFINE_ADDON_FUNCTION(Curl, Release, void, return, id_curl)
    BLIK_DEFINE_ADDON_FUNCTION(Curl, ServiceRequest, chars, return "", id_curl, chars, chars)
    BLIK_DEFINE_ADDON_FUNCTION(Curl, SendStream, void, return, id_curl, chars, chars, CurlReadCB, payload)

    id_curl AddOn::Curl::Create(void)
    {return Core_AddOn_Curl_Create()();}

    void AddOn::Curl::Release(id_curl curl)
    {Core_AddOn_Curl_Release()(curl);}

    chars AddOn::Curl::ServiceRequest(id_curl curl, chars service, chars arg)
    {return Core_AddOn_Curl_ServiceRequest()(curl, service, arg);}

    void AddOn::Curl::SendStream(id_curl curl, chars service, chars key, CurlReadCB cb, payload data)
    {return Core_AddOn_Curl_SendStream()(curl, service, key, cb, data);}

    ////////////////////////////////////////////////////////////////////////////////
    static void H264_Error() {BLIK_ASSERT("H264애드온이 준비되지 않았습니다", false);}
    BLIK_DEFINE_ADDON_FUNCTION(H264, Create, id_h264, return nullptr, sint32, sint32)
    BLIK_DEFINE_ADDON_FUNCTION(H264, Release, void, return, id_h264)
    BLIK_DEFINE_ADDON_FUNCTION(H264, Encode, id_share, return nullptr, id_h264, const uint32*, bool, uint64, id_share)

    id_h264 AddOn::H264::Create(sint32 width, sint32 height)
    {return Core_AddOn_H264_Create()(width, height);}

    void AddOn::H264::Release(id_h264 h264)
    {Core_AddOn_H264_Release()(h264);}

    id_share AddOn::H264::Encode(id_h264 h264, const uint32* rgba, bool chunking, uint64 ms, id_share aac)
    {return Core_AddOn_H264_Encode()(h264, rgba, chunking, ms, aac);}

    ////////////////////////////////////////////////////////////////////////////////
    static void Git_Error() {BLIK_ASSERT("Git애드온이 준비되지 않았습니다", false);}
    BLIK_DEFINE_ADDON_FUNCTION(Git, Create, id_git, return nullptr, chars, chars, chars, chars)
    BLIK_DEFINE_ADDON_FUNCTION(Git, Release, void, return, id_git)
    BLIK_DEFINE_ADDON_FUNCTION(Git, Update, void, return, id_git, AddOn::Git::ProgressCB, payload)

    id_git AddOn::Git::Create(chars rootpath, chars sshname, chars id, chars password)
    {return Core_AddOn_Git_Create()(rootpath, sshname, id, password);}

    void AddOn::Git::Release(id_git git)
    {Core_AddOn_Git_Release()(git);}

    void AddOn::Git::Update(id_git git, ProgressCB cb, payload data)
    {Core_AddOn_Git_Update()(git, cb, data);}

    ////////////////////////////////////////////////////////////////////////////////
    static void Tesseract_Error() {BLIK_ASSERT("Tesseract애드온이 준비되지 않았습니다", false);}
    BLIK_DEFINE_ADDON_FUNCTION(Tesseract, Create, id_tesseract, return nullptr, chars, chars)
    BLIK_DEFINE_ADDON_FUNCTION(Tesseract, Release, void, return, id_tesseract)
    BLIK_DEFINE_ADDON_FUNCTION(Tesseract, Training, void, return, id_tesseract, chars)

    id_tesseract AddOn::Tesseract::Create(chars tifpath, chars otherpath)
    {return Core_AddOn_Tesseract_Create()(tifpath, otherpath);}

    void AddOn::Tesseract::Release(id_tesseract tesseract)
    {Core_AddOn_Tesseract_Release()(tesseract);}

    void AddOn::Tesseract::Training(id_tesseract tesseract, chars workname)
    {Core_AddOn_Tesseract_Training()(tesseract, workname);}

    ////////////////////////////////////////////////////////////////////////////////
    static void Jpg_Error() {BLIK_ASSERT("Jpg애드온이 준비되지 않았습니다", false);}
    BLIK_DEFINE_ADDON_FUNCTION(Jpg, Create, id_jpg, return nullptr, id_bitmap_read, sint32)
    BLIK_DEFINE_ADDON_FUNCTION(Jpg, Release, void, return, id_jpg)
    BLIK_DEFINE_ADDON_FUNCTION(Jpg, GetLength, sint32, return 0, id_jpg)
    BLIK_DEFINE_ADDON_FUNCTION(Jpg, GetBits, bytes, return nullptr, id_jpg)
    BLIK_DEFINE_ADDON_FUNCTION(Jpg, ToBmp, id_bitmap, return nullptr, bytes, sint32)

    id_jpg AddOn::Jpg::Create(id_bitmap_read bmp, sint32 quality)
    {return Core_AddOn_Jpg_Create()(bmp, quality);}

    void AddOn::Jpg::Release(id_jpg jpg)
    {return Core_AddOn_Jpg_Release()(jpg);}

    sint32 AddOn::Jpg::GetLength(id_jpg jpg)
    {return Core_AddOn_Jpg_GetLength()(jpg);}

    bytes AddOn::Jpg::GetBits(id_jpg jpg)
    {return Core_AddOn_Jpg_GetBits()(jpg);}

    id_bitmap AddOn::Jpg::ToBmp(bytes jpg, sint32 length)
    {return Core_AddOn_Jpg_ToBmp()(jpg, length);}
}