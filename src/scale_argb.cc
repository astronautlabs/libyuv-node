#include <napi.h>
#include <libyuv.h>
#include "scale_argb.h"

Napi::Value ARGBScale(const Napi::CallbackInfo& info) {
    auto src_argb        = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_argb = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_width       = info[2]   .As<Napi::Number>()     .Int32Value();
    auto src_height      = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb        = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_width       = info[6]   .As<Napi::Number>()     .Int32Value();
    auto dst_height      = info[7]   .As<Napi::Number>()     .Int32Value();
    auto filtering       = info[8]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::ARGBScale(
        src_argb.Data(),
        src_stride_argb,
        src_width,
        src_height,
        dst_argb.Data(),
        dst_stride_argb,
        dst_width,
        dst_height,
        (libyuv::FilterMode) filtering
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value ARGBScaleClip(const Napi::CallbackInfo& info) {
    auto src_argb        = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_argb = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_width       = info[2]   .As<Napi::Number>()     .Int32Value();
    auto src_height      = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb        = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_width       = info[6]   .As<Napi::Number>()     .Int32Value();
    auto dst_height      = info[7]   .As<Napi::Number>()     .Int32Value();
    auto clip_x          = info[8]   .As<Napi::Number>()     .Int32Value();
    auto clip_y          = info[9]   .As<Napi::Number>()     .Int32Value();
    auto clip_width      = info[10]  .As<Napi::Number>()     .Int32Value();
    auto clip_height     = info[11]  .As<Napi::Number>()     .Int32Value();
    auto filtering       = info[12]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::ARGBScaleClip(
        src_argb.Data(),
        src_stride_argb,
        src_width,
        src_height,
        dst_argb.Data(),
        dst_stride_argb,
        dst_width,
        dst_height,
        clip_x,
        clip_y,
        clip_width,
        clip_height,
        (libyuv::FilterMode)filtering
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value YUVToARGBScaleClip(const Napi::CallbackInfo& info) {
    auto src_y           = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y    = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u           = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u    = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v           = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v    = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_fourcc      = info[6]   .As<Napi::Number>()     .Uint32Value();
    auto src_width       = info[7]   .As<Napi::Number>()     .Int32Value();
    auto src_height      = info[8]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb        = info[9]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb = info[10]  .As<Napi::Number>()     .Int32Value();
    auto dst_fourcc      = info[11]  .As<Napi::Number>()     .Uint32Value();
    auto dst_width       = info[12]  .As<Napi::Number>()     .Int32Value();
    auto dst_height      = info[13]  .As<Napi::Number>()     .Int32Value();
    auto clip_x          = info[14]  .As<Napi::Number>()     .Int32Value();
    auto clip_y          = info[15]  .As<Napi::Number>()     .Int32Value();
    auto clip_width      = info[16]  .As<Napi::Number>()     .Int32Value();
    auto clip_height     = info[17]  .As<Napi::Number>()     .Int32Value();
    auto filtering       = info[18]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::YUVToARGBScaleClip(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        src_fourcc,
        src_width,
        src_height,
        dst_argb.Data(),
        dst_stride_argb,
        dst_fourcc,
        dst_width,
        dst_height,
        clip_x,
        clip_y,
        clip_width,
        clip_height,
        (libyuv::FilterMode)filtering
    );

    return Napi::Number::New(info.Env(), retval);
}

