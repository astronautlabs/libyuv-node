#include <libyuv.h>
#include "convert.h"

Napi::Value I444ToI420(const Napi::CallbackInfo& info) {
    auto src_y          = info[0].As<Napi::Uint8Array>();
    auto src_stride_y   = info[1].As<Napi::Number>().Int32Value();
    auto src_u          = info[2].As<Napi::Uint8Array>();
    auto src_stride_u   = info[3].As<Napi::Number>().Int32Value();
    auto src_v          = info[4].As<Napi::Uint8Array>();
    auto src_stride_v   = info[5].As<Napi::Number>().Int32Value();
    auto dst_y          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[7].As<Napi::Number>().Int32Value();
    auto dst_u          = info[8].As<Napi::Uint8Array>();
    auto dst_stride_u   = info[9].As<Napi::Number>().Int32Value();
    auto dst_v          = info[10].As<Napi::Uint8Array>();
    auto dst_stride_v   = info[11].As<Napi::Number>().Int32Value();
    auto width          = info[12].As<Napi::Number>().Int32Value();
    auto height         = info[13].As<Napi::Number>().Int32Value();

    auto retval = libyuv::I444ToI420(
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
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I444ToNV12(const Napi::CallbackInfo& info) {
    auto src_y          = info[0].As<Napi::Uint8Array>();
    auto src_stride_y   = info[1].As<Napi::Number>().Int32Value();
    auto src_u          = info[2].As<Napi::Uint8Array>();
    auto src_stride_u   = info[3].As<Napi::Number>().Int32Value();
    auto src_v          = info[4].As<Napi::Uint8Array>();
    auto src_stride_v   = info[5].As<Napi::Number>().Int32Value();
    auto dst_y          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[7].As<Napi::Number>().Int32Value();
    auto dst_uv         = info[8].As<Napi::Uint8Array>();
    auto dst_stride_uv  = info[9].As<Napi::Number>().Int32Value();
    auto width          = info[10].As<Napi::Number>().Int32Value();
    auto height         = info[11].As<Napi::Number>().Int32Value();
    auto retval = libyuv::I444ToNV12(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_y.Data(),
        dst_stride_y,
        dst_uv.Data(),
        dst_stride_uv,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I444ToNV21(const Napi::CallbackInfo& info) {
    auto src_y          = info[0].As<Napi::Uint8Array>();
    auto src_stride_y   = info[1].As<Napi::Number>().Int32Value();
    auto src_u          = info[2].As<Napi::Uint8Array>();
    auto src_stride_u   = info[3].As<Napi::Number>().Int32Value();
    auto src_v          = info[4].As<Napi::Uint8Array>();
    auto src_stride_v   = info[5].As<Napi::Number>().Int32Value();
    auto dst_y          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[7].As<Napi::Number>().Int32Value();
    auto dst_vu         = info[8].As<Napi::Uint8Array>();
    auto dst_stride_vu  = info[9].As<Napi::Number>().Int32Value();
    auto width          = info[10].As<Napi::Number>().Int32Value();
    auto height         = info[11].As<Napi::Number>().Int32Value();
    auto retval = libyuv::I444ToNV21(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_y.Data(),
        dst_stride_y,
        dst_vu.Data(),
        dst_stride_vu,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I422ToI420(const Napi::CallbackInfo& info) {
    auto src_y          = info[0].As<Napi::Uint8Array>();
    auto src_stride_y   = info[1].As<Napi::Number>().Int32Value();
    auto src_u          = info[2].As<Napi::Uint8Array>();
    auto src_stride_u   = info[3].As<Napi::Number>().Int32Value();
    auto src_v          = info[4].As<Napi::Uint8Array>();
    auto src_stride_v   = info[5].As<Napi::Number>().Int32Value();
    auto dst_y          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[7].As<Napi::Number>().Int32Value();
    auto dst_u          = info[8].As<Napi::Uint8Array>();
    auto dst_stride_u   = info[9].As<Napi::Number>().Int32Value();
    auto dst_v          = info[10].As<Napi::Uint8Array>();
    auto dst_stride_v   = info[11].As<Napi::Number>().Int32Value();
    auto width          = info[12].As<Napi::Number>().Int32Value();
    auto height         = info[13].As<Napi::Number>().Int32Value();
    auto retval = libyuv::I422ToI420(
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
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I422ToNV21(const Napi::CallbackInfo& info) {
    auto src_y          = info[0].As<Napi::Uint8Array>();
    auto src_stride_y   = info[1].As<Napi::Number>().Int32Value();
    auto src_u          = info[2].As<Napi::Uint8Array>();
    auto src_stride_u   = info[3].As<Napi::Number>().Int32Value();
    auto src_v          = info[4].As<Napi::Uint8Array>();
    auto src_stride_v   = info[5].As<Napi::Number>().Int32Value();
    auto dst_y          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[7].As<Napi::Number>().Int32Value();
    auto dst_vu         = info[8].As<Napi::Uint8Array>();
    auto dst_stride_vu  = info[9].As<Napi::Number>().Int32Value();
    auto width          = info[10].As<Napi::Number>().Int32Value();
    auto height         = info[11].As<Napi::Number>().Int32Value();
    auto retval = libyuv::I422ToNV21(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_y.Data(),
        dst_stride_y,
        dst_vu.Data(),
        dst_stride_vu,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420Copy(const Napi::CallbackInfo& info) {
    auto src_y          = info[0].As<Napi::Uint8Array>();
    auto src_stride_y   = info[1].As<Napi::Number>().Int32Value();
    auto src_u          = info[2].As<Napi::Uint8Array>();
    auto src_stride_u   = info[3].As<Napi::Number>().Int32Value();
    auto src_v          = info[4].As<Napi::Uint8Array>();
    auto src_stride_v   = info[5].As<Napi::Number>().Int32Value();
    auto dst_y          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[7].As<Napi::Number>().Int32Value();
    auto dst_u          = info[8].As<Napi::Uint8Array>();
    auto dst_stride_u   = info[9].As<Napi::Number>().Int32Value();
    auto dst_v          = info[10].As<Napi::Uint8Array>();
    auto dst_stride_v   = info[11].As<Napi::Number>().Int32Value();
    auto width          = info[12].As<Napi::Number>().Int32Value();
    auto height         = info[13].As<Napi::Number>().Int32Value();
    auto retval = libyuv::I420Copy(
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
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I010Copy(const Napi::CallbackInfo& info) {
    auto src_y          = info[0].As<Napi::Uint16Array>();
    auto src_stride_y   = info[1].As<Napi::Number>().Int32Value();
    auto src_u          = info[2].As<Napi::Uint16Array>();
    auto src_stride_u   = info[3].As<Napi::Number>().Int32Value();
    auto src_v          = info[4].As<Napi::Uint16Array>();
    auto src_stride_v   = info[5].As<Napi::Number>().Int32Value();
    auto dst_y          = info[6].As<Napi::Uint16Array>();
    auto dst_stride_y   = info[7].As<Napi::Number>().Int32Value();
    auto dst_u          = info[8].As<Napi::Uint16Array>();
    auto dst_stride_u   = info[9].As<Napi::Number>().Int32Value();
    auto dst_v          = info[10].As<Napi::Uint16Array>();
    auto dst_stride_v   = info[11].As<Napi::Number>().Int32Value();
    auto width          = info[12].As<Napi::Number>().Int32Value();
    auto height         = info[13].As<Napi::Number>().Int32Value();
    auto retval = libyuv::I010Copy(
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
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I010ToI420(const Napi::CallbackInfo& info) {
    auto src_y          = info[0].As<Napi::Uint16Array>();
    auto src_stride_y   = info[1].As<Napi::Number>().Int32Value();
    auto src_u          = info[2].As<Napi::Uint16Array>();
    auto src_stride_u   = info[3].As<Napi::Number>().Int32Value();
    auto src_v          = info[4].As<Napi::Uint16Array>();
    auto src_stride_v   = info[5].As<Napi::Number>().Int32Value();
    auto dst_y          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[7].As<Napi::Number>().Int32Value();
    auto dst_u          = info[8].As<Napi::Uint8Array>();
    auto dst_stride_u   = info[9].As<Napi::Number>().Int32Value();
    auto dst_v          = info[10].As<Napi::Uint8Array>();
    auto dst_stride_v   = info[11].As<Napi::Number>().Int32Value();
    auto width          = info[12].As<Napi::Number>().Int32Value();
    auto height         = info[13].As<Napi::Number>().Int32Value();
    auto retval = libyuv::I010ToI420(
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
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I400ToI420(const Napi::CallbackInfo& info) {
    auto src_y          = info[0].As<Napi::Uint8Array>();
    auto src_stride_y   = info[1].As<Napi::Number>().Int32Value();
    auto dst_y          = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[3].As<Napi::Number>().Int32Value();
    auto dst_u          = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u   = info[5].As<Napi::Number>().Int32Value();
    auto dst_v          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v   = info[7].As<Napi::Number>().Int32Value();
    auto width          = info[8].As<Napi::Number>().Int32Value();
    auto height         = info[9].As<Napi::Number>().Int32Value();
    auto retval = libyuv::I400ToI420(
        src_y.Data(),
        src_stride_y,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I400ToNV21(const Napi::CallbackInfo& info) {
    auto src_y          = info[0].As<Napi::Uint8Array>();
    auto src_stride_y   = info[1].As<Napi::Number>().Int32Value();
    auto dst_y          = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[3].As<Napi::Number>().Int32Value();
    auto dst_vu         = info[4].As<Napi::Uint8Array>();
    auto dst_stride_vu  = info[5].As<Napi::Number>().Int32Value();
    auto width          = info[6].As<Napi::Number>().Int32Value();
    auto height         = info[7].As<Napi::Number>().Int32Value();
    auto retval = libyuv::I400ToNV21(
        src_y.Data(),
        src_stride_y,
        dst_y.Data(),
        dst_stride_y,
        dst_vu.Data(),
        dst_stride_vu,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value NV12ToI420(const Napi::CallbackInfo& info) {
    auto src_y          = info[0].As<Napi::Uint8Array>();
    auto src_stride_y   = info[1].As<Napi::Number>().Int32Value();
    auto src_uv         = info[2].As<Napi::Uint8Array>();
    auto src_stride_uv  = info[3].As<Napi::Number>().Int32Value();
    auto dst_y          = info[4].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[5].As<Napi::Number>().Int32Value();
    auto dst_u          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_u   = info[7].As<Napi::Number>().Int32Value();
    auto dst_v          = info[8].As<Napi::Uint8Array>();
    auto dst_stride_v   = info[9].As<Napi::Number>().Int32Value();
    auto width          = info[10].As<Napi::Number>().Int32Value();
    auto height         = info[11].As<Napi::Number>().Int32Value();

    auto retval = libyuv::NV12ToI420(
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
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value NV21ToI420(const Napi::CallbackInfo& info) {
    auto src_y          = info[0].As<Napi::Uint8Array>();
    auto src_stride_y   = info[1].As<Napi::Number>().Int32Value();
    auto src_vu         = info[2].As<Napi::Uint8Array>();
    auto src_stride_vu  = info[3].As<Napi::Number>().Int32Value();
    auto dst_y          = info[4].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[5].As<Napi::Number>().Int32Value();
    auto dst_u          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_u   = info[7].As<Napi::Number>().Int32Value();
    auto dst_v          = info[8].As<Napi::Uint8Array>();
    auto dst_stride_v   = info[9].As<Napi::Number>().Int32Value();
    auto width          = info[10].As<Napi::Number>().Int32Value();
    auto height         = info[11].As<Napi::Number>().Int32Value();

    auto retval = libyuv::NV21ToI420(
        src_y.Data(),
        src_stride_y,
        src_vu.Data(),
        src_stride_vu,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value YUY2ToI420(const Napi::CallbackInfo& info) {
    auto src_yuy2        = info[0].As<Napi::Uint8Array>();
    auto src_stride_yuy2 = info[1].As<Napi::Number>().Int32Value();
    auto dst_y           = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y    = info[3].As<Napi::Number>().Int32Value();
    auto dst_u           = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u    = info[5].As<Napi::Number>().Int32Value();
    auto dst_v           = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v    = info[7].As<Napi::Number>().Int32Value();
    auto width           = info[8].As<Napi::Number>().Int32Value();
    auto height          = info[9].As<Napi::Number>().Int32Value();

    auto retval = libyuv::YUY2ToI420(
        src_yuy2.Data(),
        src_stride_yuy2,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value UYVYToI420(const Napi::CallbackInfo& info) {
    auto src_uyvy        = info[0].As<Napi::Uint8Array>();
    auto src_stride_uyvy = info[1].As<Napi::Number>().Int32Value();
    auto dst_y           = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y    = info[3].As<Napi::Number>().Int32Value();
    auto dst_u           = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u    = info[5].As<Napi::Number>().Int32Value();
    auto dst_v           = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v    = info[7].As<Napi::Number>().Int32Value();
    auto width           = info[8].As<Napi::Number>().Int32Value();
    auto height          = info[9].As<Napi::Number>().Int32Value();

    auto retval = libyuv::UYVYToI420(
        src_uyvy.Data(),
        src_stride_uyvy,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value AYUVToNV12(const Napi::CallbackInfo& info) {
    auto src_ayuv        = info[0].As<Napi::Uint8Array>();
    auto src_stride_ayuv = info[1].As<Napi::Number>().Int32Value();
    auto dst_y           = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y    = info[3].As<Napi::Number>().Int32Value();
    auto dst_uv          = info[4].As<Napi::Uint8Array>();
    auto dst_stride_uv   = info[5].As<Napi::Number>().Int32Value();
    auto width           = info[6].As<Napi::Number>().Int32Value();
    auto height          = info[7].As<Napi::Number>().Int32Value();

    auto retval = libyuv::AYUVToNV12(
        src_ayuv.Data(),
        src_stride_ayuv,
        dst_y.Data(),
        dst_stride_y,
        dst_uv.Data(),
        dst_stride_uv,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value AYUVToNV21(const Napi::CallbackInfo& info) {
    auto src_ayuv        = info[0].As<Napi::Uint8Array>();
    auto src_stride_ayuv = info[1].As<Napi::Number>().Int32Value();
    auto dst_y           = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y    = info[3].As<Napi::Number>().Int32Value();
    auto dst_vu          = info[4].As<Napi::Uint8Array>();
    auto dst_stride_vu   = info[5].As<Napi::Number>().Int32Value();
    auto width           = info[6].As<Napi::Number>().Int32Value();
    auto height          = info[7].As<Napi::Number>().Int32Value();

    auto retval = libyuv::AYUVToNV21(
        src_ayuv.Data(),
        src_stride_ayuv,
        dst_y.Data(),
        dst_stride_y,
        dst_vu.Data(),
        dst_stride_vu,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value Android420ToI420(const Napi::CallbackInfo& info) {
    auto src_y                  = info[0].As<Napi::Uint8Array>();
    auto src_stride_y           = info[1].As<Napi::Number>().Int32Value();
    auto src_u                  = info[2].As<Napi::Uint8Array>();
    auto src_stride_u           = info[3].As<Napi::Number>().Int32Value();
    auto src_v                  = info[4].As<Napi::Uint8Array>();
    auto src_stride_v           = info[5].As<Napi::Number>().Int32Value();
    auto src_pixel_stride_uv    = info[6].As<Napi::Number>().Int32Value();
    auto dst_y                  = info[7].As<Napi::Uint8Array>();
    auto dst_stride_y           = info[8].As<Napi::Number>().Int32Value();
    auto dst_u                  = info[9].As<Napi::Uint8Array>();
    auto dst_stride_u           = info[10].As<Napi::Number>().Int32Value();
    auto dst_v                  = info[11].As<Napi::Uint8Array>();
    auto dst_stride_v           = info[12].As<Napi::Number>().Int32Value();
    auto width                  = info[13].As<Napi::Number>().Int32Value();
    auto height                 = info[14].As<Napi::Number>().Int32Value();

    auto retval = libyuv::Android420ToI420(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        src_pixel_stride_uv,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value ARGBToI420(const Napi::CallbackInfo& info) {
    auto src_argb        = info[0].As<Napi::Uint8Array>();
    auto src_stride_argb = info[1].As<Napi::Number>().Int32Value();
    auto dst_y           = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y    = info[3].As<Napi::Number>().Int32Value();
    auto dst_u           = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u    = info[5].As<Napi::Number>().Int32Value();
    auto dst_v           = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v    = info[7].As<Napi::Number>().Int32Value();
    auto width           = info[8].As<Napi::Number>().Int32Value();
    auto height          = info[9].As<Napi::Number>().Int32Value();
    
    auto retval = libyuv::ARGBToI420(
        src_argb.Data(),
        src_stride_argb,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value BGRAToI420(const Napi::CallbackInfo& info) {
    auto src_bgra           = info[0].As<Napi::Uint8Array>();
    auto src_stride_bgra    = info[1].As<Napi::Number>().Int32Value();
    auto dst_y              = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y       = info[3].As<Napi::Number>().Int32Value();
    auto dst_u              = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u       = info[5].As<Napi::Number>().Int32Value();
    auto dst_v              = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v       = info[7].As<Napi::Number>().Int32Value();
    auto width              = info[8].As<Napi::Number>().Int32Value();
    auto height             = info[9].As<Napi::Number>().Int32Value();

    auto retval = libyuv::BGRAToI420(
        src_bgra.Data(),
        src_stride_bgra,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value ABGRToI420(const Napi::CallbackInfo& info) {
    auto src_abgr        = info[0].As<Napi::Uint8Array>();
    auto src_stride_abgr = info[1].As<Napi::Number>().Int32Value();
    auto dst_y           = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y    = info[3].As<Napi::Number>().Int32Value();
    auto dst_u           = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u    = info[5].As<Napi::Number>().Int32Value();
    auto dst_v           = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v    = info[7].As<Napi::Number>().Int32Value();
    auto width           = info[8].As<Napi::Number>().Int32Value();
    auto height          = info[9].As<Napi::Number>().Int32Value();

    auto retval = libyuv::ABGRToI420(
        src_abgr.Data(),
        src_stride_abgr,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RGBAToI420(const Napi::CallbackInfo& info) {
    auto src_rgba        = info[0].As<Napi::Uint8Array>();
    auto src_stride_rgba = info[1].As<Napi::Number>().Int32Value();
    auto dst_y           = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y    = info[3].As<Napi::Number>().Int32Value();
    auto dst_u           = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u    = info[5].As<Napi::Number>().Int32Value();
    auto dst_v           = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v    = info[7].As<Napi::Number>().Int32Value();
    auto width           = info[8].As<Napi::Number>().Int32Value();
    auto height          = info[9].As<Napi::Number>().Int32Value();

    auto retval = libyuv::RGBAToI420(
        src_rgba.Data(),
        src_stride_rgba,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RGB24ToI420(const Napi::CallbackInfo& info) {
    auto src_rgb24        = info[0].As<Napi::Uint8Array>();
    auto src_stride_rgb24 = info[1].As<Napi::Number>().Int32Value();
    auto dst_y            = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y     = info[3].As<Napi::Number>().Int32Value();
    auto dst_u            = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u     = info[5].As<Napi::Number>().Int32Value();
    auto dst_v            = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v     = info[7].As<Napi::Number>().Int32Value();
    auto width            = info[8].As<Napi::Number>().Int32Value();
    auto height           = info[9].As<Napi::Number>().Int32Value();

    auto retval = libyuv::RGB24ToI420(
        src_rgb24.Data(),
        src_stride_rgb24,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RGB24ToJ420(const Napi::CallbackInfo& info) {
    auto src_rgb24        = info[0].As<Napi::Uint8Array>();
    auto src_stride_rgb24 = info[1].As<Napi::Number>().Int32Value();
    auto dst_y            = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y     = info[3].As<Napi::Number>().Int32Value();
    auto dst_u            = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u     = info[5].As<Napi::Number>().Int32Value();
    auto dst_v            = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v     = info[7].As<Napi::Number>().Int32Value();
    auto width            = info[8].As<Napi::Number>().Int32Value();
    auto height           = info[9].As<Napi::Number>().Int32Value();

    auto retval = libyuv::RGB24ToJ420(
        src_rgb24.Data(),
        src_stride_rgb24,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RAWToI420(const Napi::CallbackInfo& info) {
    auto src_raw        = info[0].As<Napi::Uint8Array>();
    auto src_stride_raw = info[1].As<Napi::Number>().Int32Value();
    auto dst_y          = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[3].As<Napi::Number>().Int32Value();
    auto dst_u          = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u   = info[5].As<Napi::Number>().Int32Value();
    auto dst_v          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v   = info[7].As<Napi::Number>().Int32Value();
    auto width          = info[8].As<Napi::Number>().Int32Value();
    auto height         = info[9].As<Napi::Number>().Int32Value();

    auto retval = libyuv::RAWToI420(
        src_raw.Data(),
        src_stride_raw,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RGB565ToI420(const Napi::CallbackInfo& info) {
    auto src_rgb565        = info[0].As<Napi::Uint8Array>();
    auto src_stride_rgb565 = info[1].As<Napi::Number>().Int32Value();
    auto dst_y             = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y      = info[3].As<Napi::Number>().Int32Value();
    auto dst_u             = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u      = info[5].As<Napi::Number>().Int32Value();
    auto dst_v             = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v      = info[7].As<Napi::Number>().Int32Value();
    auto width             = info[8].As<Napi::Number>().Int32Value();
    auto height            = info[9].As<Napi::Number>().Int32Value();
    
    auto retval = libyuv::RGB565ToI420(
        src_rgb565.Data(),
        src_stride_rgb565,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value ARGB1555ToI420(const Napi::CallbackInfo& info) {
    auto src_argb1555          = info[0].As<Napi::Uint8Array>();
    auto src_stride_argb1555   = info[1].As<Napi::Number>().Int32Value();
    auto dst_y                 = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y          = info[3].As<Napi::Number>().Int32Value();
    auto dst_u                 = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u          = info[5].As<Napi::Number>().Int32Value();
    auto dst_v                 = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v          = info[7].As<Napi::Number>().Int32Value();
    auto width                 = info[8].As<Napi::Number>().Int32Value();
    auto height                = info[9].As<Napi::Number>().Int32Value();

    auto retval = libyuv::ARGB1555ToI420(
        src_argb1555.Data(),
        src_stride_argb1555,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value ARGB4444ToI420(const Napi::CallbackInfo& info) {
    auto src_argb4444          = info[0].As<Napi::Uint8Array>();
    auto src_stride_argb4444   = info[1].As<Napi::Number>().Int32Value();
    auto dst_y                 = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y          = info[3].As<Napi::Number>().Int32Value();
    auto dst_u                 = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u          = info[5].As<Napi::Number>().Int32Value();
    auto dst_v                 = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v          = info[7].As<Napi::Number>().Int32Value();
    auto width                 = info[8].As<Napi::Number>().Int32Value();
    auto height                = info[9].As<Napi::Number>().Int32Value();
    
    auto retval = libyuv::ARGB4444ToI420(
        src_argb4444.Data(),
        src_stride_argb4444,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RGB24ToJ400(const Napi::CallbackInfo& info) {
    auto src_rgb24          = info[0].As<Napi::Uint8Array>();
    auto src_stride_rgb24   = info[1].As<Napi::Number>().Int32Value();
    auto dst_yj             = info[2].As<Napi::Uint8Array>();
    auto dst_stride_yj      = info[3].As<Napi::Number>().Int32Value();
    auto width              = info[4].As<Napi::Number>().Int32Value();
    auto height             = info[5].As<Napi::Number>().Int32Value();
    
    auto retval = libyuv::RGB24ToJ400(
        src_rgb24.Data(),
        src_stride_rgb24,
        dst_yj.Data(),
        dst_stride_yj,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RAWToJ400(const Napi::CallbackInfo& info) {
    auto src_raw        = info[0].As<Napi::Uint8Array>();
    auto src_stride_raw = info[1].As<Napi::Number>().Int32Value();
    auto dst_yj         = info[2].As<Napi::Uint8Array>();
    auto dst_stride_yj  = info[3].As<Napi::Number>().Int32Value();
    auto width          = info[4].As<Napi::Number>().Int32Value();
    auto height         = info[5].As<Napi::Number>().Int32Value();

    auto retval = libyuv::RAWToJ400(
        src_raw.Data(),
        src_stride_raw,
        dst_yj.Data(),
        dst_stride_yj,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value MJPGToI420(const Napi::CallbackInfo& info) {
    auto sample         = info[0].As<Napi::Uint8Array>();
    auto sample_size    = info[1].As<Napi::Number>().Int32Value();
    auto dst_y          = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[3].As<Napi::Number>().Int32Value();
    auto dst_u          = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u   = info[5].As<Napi::Number>().Int32Value();
    auto dst_v          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v   = info[7].As<Napi::Number>().Int32Value();
    auto src_width      = info[8].As<Napi::Number>().Int32Value();
    auto src_height     = info[9].As<Napi::Number>().Int32Value();
    auto dst_width      = info[10].As<Napi::Number>().Int32Value();
    auto dst_height     = info[11].As<Napi::Number>().Int32Value();

    auto retval = libyuv::MJPGToI420(
        sample.Data(),
        sample_size,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        src_width,
        src_height,
        dst_width,
        dst_height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value MJPGToNV21(const Napi::CallbackInfo& info) {
    auto sample         = info[0].As<Napi::Uint8Array>();
    auto sample_size    = info[1].As<Napi::Number>().Int32Value();
    auto dst_y          = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[3].As<Napi::Number>().Int32Value();
    auto dst_vu         = info[4].As<Napi::Uint8Array>();
    auto dst_stride_vu  = info[5].As<Napi::Number>().Int32Value();
    auto src_width      = info[6].As<Napi::Number>().Int32Value();
    auto src_height     = info[7].As<Napi::Number>().Int32Value();
    auto dst_width      = info[8].As<Napi::Number>().Int32Value();
    auto dst_height     = info[9].As<Napi::Number>().Int32Value();

    auto retval = libyuv::MJPGToNV21(
        sample.Data(),
        sample_size,
        dst_y.Data(),
        dst_stride_y,
        dst_vu.Data(),
        dst_stride_vu,
        src_width,
        src_height,
        dst_width,
        dst_height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value MJPGSize(const Napi::CallbackInfo& info) {
    auto sample         = info[0].As<Napi::Uint8Array>();
    auto sample_size    = info[1].As<Napi::Number>().Int32Value();

    int width;
    int height;

    libyuv::MJPGSize(
        sample.Data(),
        sample_size,
        &width,
        &height
    );

    auto obj = Napi::Object::New(info.Env());
    obj["width"] = width;
    obj["height"] = height;

    return obj;
}

Napi::Value ConvertToI420(const Napi::CallbackInfo& info) {
    auto sample         = info[0].As<Napi::Uint8Array>();
    auto sample_size    = info[1].As<Napi::Number>().Int32Value();
    auto dst_y          = info[2].As<Napi::Uint8Array>();
    auto dst_stride_y   = info[3].As<Napi::Number>().Int32Value();
    auto dst_u          = info[4].As<Napi::Uint8Array>();
    auto dst_stride_u   = info[5].As<Napi::Number>().Int32Value();
    auto dst_v          = info[6].As<Napi::Uint8Array>();
    auto dst_stride_v   = info[7].As<Napi::Number>().Int32Value();
    auto crop_x         = info[8].As<Napi::Number>().Int32Value();
    auto crop_y         = info[9].As<Napi::Number>().Int32Value();
    auto src_width      = info[10].As<Napi::Number>().Int32Value();
    auto src_height     = info[11].As<Napi::Number>().Int32Value();
    auto crop_width     = info[12].As<Napi::Number>().Int32Value();
    auto crop_height    = info[13].As<Napi::Number>().Int32Value();
    auto rotation       = info[14].As<Napi::Number>().Int32Value();
    auto fourcc         = info[15].As<Napi::Number>().Uint32Value();

    auto retval = libyuv::ConvertToI420(
        sample.Data(),
        sample_size,
        dst_y.Data(),
        dst_stride_y,
        dst_u.Data(),
        dst_stride_u,
        dst_v.Data(),
        dst_stride_v,
        crop_x,
        crop_y,
        src_width,
        src_height,
        crop_width,
        crop_height,
        (libyuv::RotationMode)rotation,
        fourcc
    );

    return Napi::Number::New(info.Env(), retval);
}
