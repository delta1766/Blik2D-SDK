/*M///////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//
//                          License Agreement
//                For Open Source Computer Vision Library
//
// Copyright (C) 2000-2008, Intel Corporation, all rights reserved.
// Copyright (C) 2009, Willow Garage Inc., all rights reserved.
// Copyright (C) 2013, OpenCV Foundation, all rights reserved.
// Third party copyrights are property of their respective owners.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistribution's in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//   * The name of the copyright holders may not be used to endorse or promote products
//     derived from this software without specific prior written permission.
//
// This software is provided by the copyright holders and contributors "as is" and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// In no event shall the Intel Corporation or contributors be liable for any direct,
// indirect, incidental, special, exemplary, or consequential damages
// (including, but not limited to, procurement of substitute goods or services;
// loss of use, data, or profits; or business interruption) however caused
// and on any theory of liability, whether in contract, strict liability,
// or tort (including negligence or otherwise) arising in any way out of
// the use of this software, even if advised of the possibility of such damage.
//
//M*/

#ifndef __OPENCV_CORE_CUDALEGACY_PRIVATE_HPP__
#define __OPENCV_CORE_CUDALEGACY_PRIVATE_HPP__

#ifndef __OPENCV_BUILD
#  error this is a private header which should not be used from outside of the OpenCV library
#endif

#include BLIK_OPENCV_U_opencv2__core__private_D_cuda_hpp //original-code:"opencv2/core/private.cuda.hpp"

#ifndef HAVE_CUDA
#  error cudalegacy module requires CUDA
#endif

#include "opencv2/cudalegacy.hpp"

//! @cond IGNORED

namespace cv { namespace cuda
{
    class NppStStreamHandler
    {
    public:
        inline explicit NppStStreamHandler(cudaStream_t newStream = 0)
        {
            oldStream = nppStSetActiveCUDAstream(newStream);
        }

        inline ~NppStStreamHandler()
        {
            nppStSetActiveCUDAstream(oldStream);
        }

    private:
        cudaStream_t oldStream;
    };

    CV_EXPORTS cv::String getNcvErrorMessage(int code);

    static inline void checkNcvError(int err, const char* file, const int line, const char* func)
    {
        if (NCV_SUCCESS != err)
        {
            cv::String msg = getNcvErrorMessage(err);
            cv::error(cv::Error::GpuApiCallError, msg, func, file, line);
        }
    }
}}

#define ncvSafeCall(expr)  cv::cuda::checkNcvError(expr, __FILE__, __LINE__, CV_Func)

//! @endcond

#endif // __OPENCV_CORE_CUDALEGACY_PRIVATE_HPP__
