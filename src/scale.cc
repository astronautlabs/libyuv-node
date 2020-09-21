#include <napi.h>
#include <libyuv.h>
#include "scale.h"

Napi::Value ScalePlane(const Napi::CallbackInfo& info) {
    auto src            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_width      = info[2]   .As<Napi::Number>()     .Int32Value();
    auto src_height     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst            = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_width      = info[6]   .As<Napi::Number>()     .Int32Value();
    auto dst_height     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto filtering      = info[8]   .As<Napi::Number>()     .Int32Value();

    libyuv::ScalePlane(
        src.Data(),
        src_stride,
        src_width,
        src_height,
        dst.Data(),
        dst_stride,
        dst_width,
        dst_height,
        (libyuv::FilterMode)filtering
    );

    return info.Env().Undefined();
}

Napi::Value ScalePlane_16(const Napi::CallbackInfo& info) {
    auto src            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_width      = info[2]   .As<Napi::Number>()     .Int32Value();
    auto src_height     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst            = info[4]   .As<Napi::Uint16Array>() ;
    auto dst_stride     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_width      = info[6]   .As<Napi::Number>()     .Int32Value();
    auto dst_height     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto filtering      = info[8]   .As<Napi::Number>()     .Int32Value();

    libyuv::ScalePlane_16(
        src.Data(),
        src_stride,
        src_width,
        src_height,
        dst.Data(),
        dst_stride,
        dst_width,
        dst_height,
        (libyuv::FilterMode)filtering
    );

    return info.Env().Undefined();
}

Napi::Value I420Scale(const Napi::CallbackInfo& info) {
    auto src_y          = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y   = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u          = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u   = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v          = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_width      = info[6]   .As<Napi::Number>()     .Int32Value();
    auto src_height     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto dst_y          = info[8]   .As<Napi::Uint8Array>() ;
    auto dst_stride_y   = info[9]   .As<Napi::Number>()     .Int32Value();
    auto dst_u          = info[10]  .As<Napi::Uint8Array>() ;
    auto dst_stride_u   = info[11]  .As<Napi::Number>()     .Int32Value();
    auto dst_v          = info[12]  .As<Napi::Uint8Array>() ;
    auto dst_stride_v   = info[13]  .As<Napi::Number>()     .Int32Value();
    auto dst_width      = info[14]  .As<Napi::Number>()     .Int32Value();
    auto dst_height     = info[15]  .As<Napi::Number>()     .Int32Value();
    auto filtering      = info[16]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420Scale(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        src_width,
        src_height,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        dst_width,
        dst_height,
        (libyuv::FilterMode)filtering
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420Scale_16(const Napi::CallbackInfo& info) {
    auto src_y          = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y   = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u          = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u   = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v          = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_width      = info[6]   .As<Napi::Number>()     .Int32Value();
    auto src_height     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto dst_y          = info[8]   .As<Napi::Uint16Array>() ;
    auto dst_stride_y   = info[9]   .As<Napi::Number>()     .Int32Value();
    auto dst_u          = info[10]  .As<Napi::Uint16Array>() ;
    auto dst_stride_u   = info[11]  .As<Napi::Number>()     .Int32Value();
    auto dst_v          = info[12]  .As<Napi::Uint16Array>() ;
    auto dst_stride_v   = info[13]  .As<Napi::Number>()     .Int32Value();
    auto dst_width      = info[14]  .As<Napi::Number>()     .Int32Value();
    auto dst_height     = info[15]  .As<Napi::Number>()     .Int32Value();
    auto filtering      = info[16]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420Scale_16(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        src_width,
        src_height,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        dst_width,
        dst_height,
        (libyuv::FilterMode)filtering
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I444Scale(const Napi::CallbackInfo& info) {
    auto src_y          = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y   = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u          = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u   = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v          = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_width      = info[6]   .As<Napi::Number>()     .Int32Value();
    auto src_height     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto dst_y          = info[8]   .As<Napi::Uint8Array>() ;
    auto dst_stride_y   = info[9]   .As<Napi::Number>()     .Int32Value();
    auto dst_u          = info[10]  .As<Napi::Uint8Array>() ;
    auto dst_stride_u   = info[11]  .As<Napi::Number>()     .Int32Value();
    auto dst_v          = info[12]  .As<Napi::Uint8Array>() ;
    auto dst_stride_v   = info[13]  .As<Napi::Number>()     .Int32Value();
    auto dst_width      = info[14]  .As<Napi::Number>()     .Int32Value();
    auto dst_height     = info[15]  .As<Napi::Number>()     .Int32Value();
    auto filtering      = info[16]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I444Scale(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        src_width,
        src_height,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        dst_width,
        dst_height,
        (libyuv::FilterMode)filtering
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I444Scale_16(const Napi::CallbackInfo& info) {
    auto src_y          = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y   = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u          = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u   = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v          = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_width      = info[6]   .As<Napi::Number>()     .Int32Value();
    auto src_height     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto dst_y          = info[8]   .As<Napi::Uint16Array>() ;
    auto dst_stride_y   = info[9]   .As<Napi::Number>()     .Int32Value();
    auto dst_u          = info[10]  .As<Napi::Uint16Array>() ;
    auto dst_stride_u   = info[11]  .As<Napi::Number>()     .Int32Value();
    auto dst_v          = info[12]  .As<Napi::Uint16Array>() ;
    auto dst_stride_v   = info[13]  .As<Napi::Number>()     .Int32Value();
    auto dst_width      = info[14]  .As<Napi::Number>()     .Int32Value();
    auto dst_height     = info[15]  .As<Napi::Number>()     .Int32Value();
    auto filtering      = info[16]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I444Scale_16(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        src_width,
        src_height,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        dst_width,
        dst_height,
        (libyuv::FilterMode)filtering
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value Scale(const Napi::CallbackInfo& info) {
    auto src_y          = info[0]   .As<Napi::Uint8Array>() ;
    auto src_u          = info[1]   .As<Napi::Uint8Array>() ;
    auto src_v          = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_y   = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_stride_u   = info[4]   .As<Napi::Number>()     .Int32Value();
    auto src_stride_v   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_width      = info[6]   .As<Napi::Number>()     .Int32Value();
    auto src_height     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto dst_y          = info[8]   .As<Napi::Uint8Array>() ;
    auto dst_u          = info[9]   .As<Napi::Uint8Array>() ;
    auto dst_v          = info[10]  .As<Napi::Uint8Array>() ;
    auto dst_stride_y   = info[11]  .As<Napi::Number>()     .Int32Value();
    auto dst_stride_u   = info[12]  .As<Napi::Number>()     .Int32Value();
    auto dst_stride_v   = info[13]  .As<Napi::Number>()     .Int32Value();
    auto dst_width      = info[14]  .As<Napi::Number>()     .Int32Value();
    auto dst_height     = info[15]  .As<Napi::Number>()     .Int32Value();
    auto interpolate    = info[16]  .As<Napi::Number>()     .ToBoolean();

    auto retval = libyuv::Scale(
        src_y.Data(),
        src_u.Data(),
        src_v.Data(),
        src_stride_y,
        src_stride_u,
        src_stride_v,
        src_width,
        src_height,
        dst_y.Data(),
        dst_u.Data(),
        dst_v.Data(),
        dst_stride_y,
        dst_stride_u,
        dst_stride_v,
        dst_width,
        dst_height,
        interpolate ? LIBYUV_TRUE : LIBYUV_FALSE
    );

    return Napi::Number::New(info.Env(), retval);
}

