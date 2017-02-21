/*!
 * \copy
 *     Copyright (c)  2009-2013, Cisco Systems
 *     All rights reserved.
 *
 *     Redistribution and use in source and binary forms, with or without
 *     modification, are permitted provided that the following conditions
 *     are met:
 *
 *        * Redistributions of source code must retain the above copyright
 *          notice, this list of conditions and the following disclaimer.
 *
 *        * Redistributions in binary form must reproduce the above copyright
 *          notice, this list of conditions and the following disclaimer in
 *          the documentation and/or other materials provided with the
 *          distribution.
 *
 *     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *     "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *     LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *     FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *     COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *     INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *     BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *     CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *     LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *     ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *     POSSIBILITY OF SUCH DAMAGE.
 *
 *
 * \file    encode_mb.h
 *
 * \brief   interface for mb encoding
 *
 * \date    5/21/2009 Created
 *
 *************************************************************************************
 */
#if !defined(ENCODE_MB_H)
#define ENCODE_MB_H


#include BLIK_OPENH264_U_typedefs_h //original-code:"typedefs.h"
#include BLIK_OPENH264_U_wels_common_basis_h //original-code:"wels_common_basis.h"
#include BLIK_OPENH264_U_slice_h //original-code:"slice.h"
#include BLIK_OPENH264_U_encoder_context_h //original-code:"encoder_context.h"
#include BLIK_OPENH264_U_wels_func_ptr_def_h //original-code:"wels_func_ptr_def.h"

namespace WelsEnc {
void WelsDctMb (int16_t* pRs, uint8_t* pEncMb, int32_t iEncStride, uint8_t* pBestPred, PDctFunc pfDctFourT4);

void WelsEncRecI16x16Y (sWelsEncCtx* pEncCtx, SMB* pCurMb, SMbCache* pMbCache);
void WelsEncRecI4x4Y (sWelsEncCtx* pEncCtx, SMB* pCurMb, SMbCache* pMbCache, uint8_t uiI4x4Idx);
void WelsEncInterY (SWelsFuncPtrList* func, SMB* pCurMb, SMbCache* pMbCache);
void WelsEncRecUV (SWelsFuncPtrList* func, SMB* pCurMb, SMbCache* pMbCache, int16_t* pRs, int32_t iUV);
void WelsRecPskip (SDqLayer* pCurDq, SWelsFuncPtrList* pFunc, SMB* pCurMb, SMbCache* pMbCache);

bool WelsTryPYskip (sWelsEncCtx* pEncCtx, SMB* pCurMb, SMbCache* pMbCache);
bool WelsTryPUVskip (sWelsEncCtx* pEncCtx, SMB* pCurMb, SMbCache* pMbCache, int32_t iUV);
}
#endif

