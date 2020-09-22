/*
 *  Copyright 2011 The LibYuv Project Authors. All rights reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS. All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include <napi.h>
#include <libyuv.h>
#include "rotate_argb.h"

Napi::Value ARGBRotate(const Napi::CallbackInfo& info) {
    auto src_argb        = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_argb = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb        = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_width       = info[4]   .As<Napi::Number>()     .Int32Value();
    auto src_height      = info[5]   .As<Napi::Number>()     .Int32Value();
    auto mode            = info[6]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::ARGBRotate(
        src_argb.Data(),
        src_stride_argb,
        dst_argb.Data(),
        dst_stride_argb,
        src_width,
        src_height,
        (libyuv::RotationMode)mode
    );

    return Napi::Number::New(info.Env(), retval);
}
