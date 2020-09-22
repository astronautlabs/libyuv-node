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
#include "rotate.h"

Napi::Value I420Rotate(const Napi::CallbackInfo& info) {
    auto src_y          = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y   = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u          = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u   = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v          = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_y          = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_y   = info[7]   .As<Napi::Number>()     .Int32Value();
    auto dst_u          = info[8]   .As<Napi::Uint8Array>() ;
    auto dst_stride_u   = info[9]   .As<Napi::Number>()     .Int32Value();
    auto dst_v          = info[10]  .As<Napi::Uint8Array>() ;
    auto dst_stride_v   = info[11]  .As<Napi::Number>()     .Int32Value();
    auto width          = info[12]  .As<Napi::Number>()     .Int32Value();
    auto height         = info[13]  .As<Napi::Number>()     .Int32Value();
    auto mode           = info[14]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420Rotate(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height,
        (libyuv::RotationMode)mode
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I444Rotate(const Napi::CallbackInfo& info) {
    auto src_y          = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y   = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u          = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u   = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v          = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_y          = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_y   = info[7]   .As<Napi::Number>()     .Int32Value();
    auto dst_u          = info[8]   .As<Napi::Uint8Array>() ;
    auto dst_stride_u   = info[9]   .As<Napi::Number>()     .Int32Value();
    auto dst_v          = info[10]  .As<Napi::Uint8Array>() ;
    auto dst_stride_v   = info[11]  .As<Napi::Number>()     .Int32Value();
    auto width          = info[12]  .As<Napi::Number>()     .Int32Value();
    auto height         = info[13]  .As<Napi::Number>()     .Int32Value();
    auto mode           = info[14]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I444Rotate(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height,
        (libyuv::RotationMode)mode
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value NV12ToI420Rotate(const Napi::CallbackInfo& info) {
    auto src_y          = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y   = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_uv         = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_uv  = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_y          = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_y   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_u          = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_u   = info[7]   .As<Napi::Number>()     .Int32Value();
    auto dst_v          = info[8]   .As<Napi::Uint8Array>() ;
    auto dst_stride_v   = info[9]   .As<Napi::Number>()     .Int32Value();
    auto width          = info[10]  .As<Napi::Number>()     .Int32Value();
    auto height         = info[11]  .As<Napi::Number>()     .Int32Value();
    auto mode           = info[12]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::NV12ToI420Rotate(
        src_y.Data(),
        src_stride_y,
        src_uv.Data(),
        src_stride_uv,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height,
        (libyuv::RotationMode)mode
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RotatePlane(const Napi::CallbackInfo& info) {
    auto src            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst            = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width          = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height         = info[5]   .As<Napi::Number>()     .Int32Value();
    auto mode           = info[6]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::RotatePlane(
        src.Data(),
        src_stride,
        dst.Data(),
        dst_stride,
        width,
        height,
        (libyuv::RotationMode)mode
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RotatePlane90(const Napi::CallbackInfo& info) {
    auto src            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst            = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width          = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height         = info[5]   .As<Napi::Number>()     .Int32Value();
    auto mode           = info[6]   .As<Napi::Number>()     .Int32Value();

    libyuv::RotatePlane(
        src.Data(),
        src_stride,
        dst.Data(),
        dst_stride,
        width,
        height,
        (libyuv::RotationMode)mode
    );

    return info.Env().Undefined();
}

Napi::Value RotatePlane180(const Napi::CallbackInfo& info) {
    auto src            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst            = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width          = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height         = info[5]   .As<Napi::Number>()     .Int32Value();

    libyuv::RotatePlane180(
        src.Data(),
        src_stride,
        dst.Data(),
        dst_stride,
        width,
        height
    );

    return info.Env().Undefined();
}

Napi::Value RotatePlane270(const Napi::CallbackInfo& info) {
    auto src            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst            = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width          = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height         = info[5]   .As<Napi::Number>()     .Int32Value();

    libyuv::RotatePlane270(
        src.Data(),
        src_stride,
        dst.Data(),
        dst_stride,
        width,
        height
    );

    return info.Env().Undefined();
}

Napi::Value RotateUV90(const Napi::CallbackInfo& info) {
    auto src            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_a          = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_a   = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_b          = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_b   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width          = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height         = info[7]   .As<Napi::Number>()     .Int32Value();

    libyuv::RotateUV90(
        src.Data(),
        src_stride,
        dst_a.Data(),
        dst_stride_a,
        dst_b.Data(),
        dst_stride_b,
        width,
        height
    );

    return info.Env().Undefined();
}

Napi::Value RotateUV180(const Napi::CallbackInfo& info) {
    auto src            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_a          = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_a   = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_b          = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_b   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width          = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height         = info[7]   .As<Napi::Number>()     .Int32Value();

    libyuv::RotateUV180(
        src.Data(),
        src_stride,
        dst_a.Data(),
        dst_stride_a,
        dst_b.Data(),
        dst_stride_b,
        width,
        height
    );

    return info.Env().Undefined();
}

Napi::Value RotateUV270(const Napi::CallbackInfo& info) {
    auto src            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_a          = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_a   = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_b          = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_b   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width          = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height         = info[7]   .As<Napi::Number>()     .Int32Value();

    libyuv::RotateUV270(
        src.Data(),
        src_stride,
        dst_a.Data(),
        dst_stride_a,
        dst_b.Data(),
        dst_stride_b,
        width,
        height
    );

    return info.Env().Undefined();
}

Napi::Value TransposePlane(const Napi::CallbackInfo& info) {
    auto src            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst            = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width          = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height         = info[5]   .As<Napi::Number>()     .Int32Value();

    libyuv::TransposePlane(
        src.Data(),
        src_stride,
        dst.Data(),
        dst_stride,
        width,
        height
    );

    return info.Env().Undefined();
}

Napi::Value TransposeUV(const Napi::CallbackInfo& info) {
    auto src            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_a          = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_a   = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_b          = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_b   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width          = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height         = info[7]   .As<Napi::Number>()     .Int32Value();

    libyuv::TransposeUV(
        src.Data(),
        src_stride,
        dst_a.Data(),
        dst_stride_a,
        dst_b.Data(),
        dst_stride_b,
        width,
        height
    );

    return info.Env().Undefined();
}
