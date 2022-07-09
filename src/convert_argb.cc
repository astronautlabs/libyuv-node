#include <libyuv.h>
#include "convert_argb.h"
#include "config.h"

template<typename T, size_t N>
void copy_to_array(T (&dest)[N], T *src) {
    for (unsigned int i = 0; i < N; ++i)
        dest[i] = src[i];
}

libyuv::YuvConstants serializeConstants(const Napi::Object &obj) {
    libyuv::YuvConstants constants;
    copy_to_array(constants.kUVToB, obj.Get("kUVToB").As<Napi::Uint8Array>().Data());
    copy_to_array(constants.kUVToG, obj.Get("kUVToG").As<Napi::Uint8Array>().Data());
    copy_to_array(constants.kUVToR, obj.Get("kUVToR").As<Napi::Uint8Array>().Data());
    copy_to_array(constants.kYToRgb, obj.Get("kYToRgb").As<Napi::Int16Array>().Data());
    copy_to_array(constants.kYBiasToRgb, obj.Get("kYBiasToRgb").As<Napi::Int16Array>().Data());

    return constants;
}

Napi::Value ARGBCopy(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[5]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::ARGBCopy(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();
    
    auto retval = libyuv::I420ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value J420ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();
    auto retval = libyuv::J420ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value J420ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::J420ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H420ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H420ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H420ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H420ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U420ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U420ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U420ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U420ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I422ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I422ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value J422ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::J422ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value J422ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::J422ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H422ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H422ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H422ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H422ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U422ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U422ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U422ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U422ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I444ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I444ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I444ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I444ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value J444ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::J444ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value J444ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::J444ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H444ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H444ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H444ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H444ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U444ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U444ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U444ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U444ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I010ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I010ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I010ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I010ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H010ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H010ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H010ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H010ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U010ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U010ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U010ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U010ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I210ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I210ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I210ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I210ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H210ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H210ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H210ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H210ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U210ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U210ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U210ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U210ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420AlphaToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_a            = info[6]   .As<Napi::Uint8Array>() ;
    auto src_stride_a     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[8]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[9]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[10]  .As<Napi::Number>()     .Int32Value();
    auto height           = info[11]  .As<Napi::Number>()     .Int32Value();
    auto attenuate        = info[12]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420AlphaToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        src_a.Data(),
        src_stride_a,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height,
        attenuate
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420AlphaToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_a            = info[6]   .As<Napi::Uint8Array>() ;
    auto src_stride_a     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[8]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[9]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[10]  .As<Napi::Number>()     .Int32Value();
    auto height           = info[11]  .As<Napi::Number>()     .Int32Value();
    auto attenuate        = info[12]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420AlphaToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        src_a.Data(),
        src_stride_a,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height,
        attenuate
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I400ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[5]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I400ToARGB(
        src_y.Data(),
        src_stride_y,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value J400ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[5]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::J400ToARGB(
        src_y.Data(),
        src_stride_y,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value NV12ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_uv           = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_uv    = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[7]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::NV12ToARGB(
        src_y.Data(),
        src_stride_y,
        src_uv.Data(),
        src_stride_uv,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value NV21ToARGB(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_vu           = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_vu    = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[7]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::NV21ToARGB(
        src_y.Data(),
        src_stride_y,
        src_vu.Data(),
        src_stride_vu,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value NV12ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_uv           = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_uv    = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[7]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::NV12ToABGR(
        src_y.Data(),
        src_stride_y,
        src_uv.Data(),
        src_stride_uv,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value NV21ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_vu           = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_vu    = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[7]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::NV21ToABGR(
        src_y.Data(),
        src_stride_y,
        src_vu.Data(),
        src_stride_vu,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value NV12ToRGB24(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_uv           = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_uv    = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[7]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::NV12ToRGB24(
        src_y.Data(),
        src_stride_y,
        src_uv.Data(),
        src_stride_uv,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value NV21ToRGB24(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_vu           = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_vu    = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[7]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::NV21ToRGB24(
        src_y.Data(),
        src_stride_y,
        src_vu.Data(),
        src_stride_vu,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value NV21ToYUV24(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_vu           = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_vu    = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[7]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::NV21ToYUV24(
        src_y.Data(),
        src_stride_y,
        src_vu.Data(),
        src_stride_vu,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value NV12ToRAW(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_uv           = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_uv    = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[7]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::NV12ToRAW(
        src_y.Data(),
        src_stride_y,
        src_uv.Data(),
        src_stride_uv,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value NV21ToRAW(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_vu           = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_vu    = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[7]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::NV21ToRAW(
        src_y.Data(),
        src_stride_y,
        src_vu.Data(),
        src_stride_vu,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value YUY2ToARGB(const Napi::CallbackInfo& info) {
    auto src_yuy2         = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_yuy2  = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[5]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::YUY2ToARGB(
        src_yuy2.Data(),
        src_stride_yuy2,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value UYVYToARGB(const Napi::CallbackInfo& info) {
    auto src_uyvu         = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_uyvu  = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[5]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::UYVYToARGB(
        src_uyvu.Data(),
        src_stride_uyvu,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I010ToAR30(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_ar30         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_ar30  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I010ToAR30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_ar30.Data(),
        dst_stride_ar30,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I010ToAB30(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_ab30         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_ab30  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I010ToAB30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_ab30.Data(),
        dst_stride_ab30,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H010ToAR30(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H010ToAR30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H010ToAB30(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H010ToAB30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U010ToAR30(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U010ToAR30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U010ToAB30(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U010ToAB30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I210ToAR30(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I210ToAR30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I210ToAB30(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I210ToAB30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H210ToAR30(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H210ToAR30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H210ToAB30(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H210ToAB30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U210ToAR30(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U210ToAR30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value U210ToAB30(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::U210ToAB30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value BGRAToARGB(const Napi::CallbackInfo& info) {
    auto src_bgra         = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_bgra  = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[5]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::BGRAToARGB(
        src_bgra.Data(),
        src_stride_bgra,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value ABGRToARGB(const Napi::CallbackInfo& info) {
    auto src_abgr         = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_abgr  = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[5]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::ABGRToARGB(
        src_abgr.Data(),
        src_stride_abgr,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RGBAToARGB(const Napi::CallbackInfo& info) {
    auto src_rgba         = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_rgba  = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[5]   .As<Napi::Number>()     .Int32Value();
    
    auto retval = libyuv::RGBAToARGB(
        src_rgba.Data(),
        src_stride_rgba,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RGB24ToARGB(const Napi::CallbackInfo& info) {
    auto src_rgba         = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_rgba  = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[5]   .As<Napi::Number>()     .Int32Value();
    
    auto retval = libyuv::RGB24ToARGB(
        src_rgba.Data(),
        src_stride_rgba,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RAWToARGB(const Napi::CallbackInfo& info) {
    auto src_raw          = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_raw   = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb         = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[5]   .As<Napi::Number>()     .Int32Value();
    
    auto retval = libyuv::RAWToARGB(
        src_raw.Data(),
        src_stride_raw,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RAWToRGBA(const Napi::CallbackInfo& info) {
    auto src_raw          = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_raw   = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgba         = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgba  = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[5]   .As<Napi::Number>()     .Int32Value();
    
    auto retval = libyuv::RAWToRGBA(
        src_raw.Data(),
        src_stride_raw,
        dst_rgba.Data(),
        dst_stride_rgba,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value RGB565ToARGB(const Napi::CallbackInfo& info) {
    auto src_rgb565        = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_rgb565 = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb          = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb   = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width             = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height            = info[5]   .As<Napi::Number>()     .Int32Value();
    
    auto retval = libyuv::RGB565ToARGB(
        src_rgb565.Data(),
        src_stride_rgb565,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value ARGB1555ToARGB(const Napi::CallbackInfo& info) {
    auto src_argb1555        = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_argb1555 = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width               = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[5]   .As<Napi::Number>()     .Int32Value();
    
    auto retval = libyuv::ARGB1555ToARGB(
        src_argb1555.Data(),
        src_stride_argb1555,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value ARGB4444ToARGB(const Napi::CallbackInfo& info) {
    auto src_argb4444        = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_argb4444 = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width               = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[5]   .As<Napi::Number>()     .Int32Value();
    
    auto retval = libyuv::ARGB4444ToARGB(
        src_argb4444.Data(),
        src_stride_argb4444,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value AR30ToARGB(const Napi::CallbackInfo& info) {
    auto src_ar30            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_ar30     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width               = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[5]   .As<Napi::Number>()     .Int32Value();
    
    auto retval = libyuv::AR30ToARGB(
        src_ar30.Data(),
        src_stride_ar30,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value AR30ToABGR(const Napi::CallbackInfo& info) {
    auto src_ar30            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_ar30     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_abgr            = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_abgr     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width               = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[5]   .As<Napi::Number>()     .Int32Value();
    
    auto retval = libyuv::AR30ToABGR(
        src_ar30.Data(),
        src_stride_ar30,
        dst_abgr.Data(),
        dst_stride_abgr,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value AR30ToAB30(const Napi::CallbackInfo& info) {
    auto src_ar30            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_ar30     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_ab30            = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_ab30     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto width               = info[4]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[5]   .As<Napi::Number>()     .Int32Value();
    
    auto retval = libyuv::AR30ToAB30(
        src_ar30.Data(),
        src_stride_ar30,
        dst_ab30.Data(),
        dst_stride_ab30,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

#ifdef HAVE_JPEG

Napi::Value MJPGToARGB(const Napi::CallbackInfo& info) {
    auto sample              = info[0]   .As<Napi::Uint8Array>() ;
    auto sample_size         = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_width           = info[4]   .As<Napi::Number>()     .Int32Value();
    auto src_height          = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_width           = info[6]   .As<Napi::Number>()     .Int32Value();
    auto dst_height          = info[7]   .As<Napi::Number>()     .Int32Value();
    
    auto retval = libyuv::MJPGToARGB(
        sample.Data(),
        sample_size,
        dst_argb.Data(),
        dst_stride_argb,
        src_width,
        src_height,
        dst_width,
        dst_height
    );

    return Napi::Number::New(info.Env(), retval);
}

#endif 

// TODO BELOW

Napi::Value Android420ToARGB(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_pixel_stride_uv = info[6]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[7]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[8]   .As<Napi::Number>()     .Int32Value();
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::Android420ToARGB(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        src_pixel_stride_uv,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value Android420ToABGR(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_pixel_stride_uv = info[6]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[7]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[8]   .As<Napi::Number>()     .Int32Value();
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::Android420ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        src_pixel_stride_uv,
        dst_argb.Data(),
        dst_stride_argb,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}


/**
 * Convert NV12 to RGB565.
 */
Napi::Value NV12ToRGB565(const Napi::CallbackInfo& info) {
    auto src_y             = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y      = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_uv            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_uv     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb565        = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb565 = info[5]   .As<Napi::Number>()     .Int32Value();
    auto width             = info[6]   .As<Napi::Number>()     .Int32Value();
    auto height            = info[7]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::NV12ToRGB565(
        src_y.Data(),
        src_stride_y,
        src_uv.Data(),
        src_stride_uv,
        dst_rgb565.Data(),
        dst_stride_rgb565,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I422 to BGRA.
 */
Napi::Value I422ToBGRA(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_bgra         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_bgra  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I422ToBGRA(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_bgra.Data(),
        dst_stride_bgra,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I422ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_abgr         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_abgr  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I422ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_abgr.Data(),
        dst_stride_abgr,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I422 to RGBA.
 */
Napi::Value I422ToRGBA(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgba         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgba  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I422ToRGBA(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgba.Data(),
        dst_stride_rgba,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420ToBGRA(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_bgra         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_bgra  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420ToBGRA(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_bgra.Data(),
        dst_stride_bgra,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420ToABGR(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_abgr         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_abgr  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420ToABGR(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_abgr.Data(),
        dst_stride_abgr,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420ToRGBA(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgba         = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgba  = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420ToRGBA(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgba.Data(),
        dst_stride_rgba,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420ToRGB24(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb24        = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb24 = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420ToRGB24(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgb24.Data(),
        dst_stride_rgb24,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420ToRAW(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_raw          = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_raw   = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420ToRAW(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_raw.Data(),
        dst_stride_raw,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H420ToRGB24(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb24        = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb24 = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H420ToRGB24(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgb24.Data(),
        dst_stride_rgb24,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H420ToRAW(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_raw          = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_raw   = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H420ToRAW(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_raw.Data(),
        dst_stride_raw,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value J420ToRGB24(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb24        = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb24 = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::J420ToRGB24(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgb24.Data(),
        dst_stride_rgb24,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value J420ToRAW(const Napi::CallbackInfo& info) {
    auto src_y            = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y     = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u            = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v            = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_raw          = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_raw   = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width            = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height           = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::J420ToRAW(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_raw.Data(),
        dst_stride_raw,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420ToRGB565(const Napi::CallbackInfo& info) {
    auto src_y             = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y      = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u             = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u      = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v             = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v      = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb565        = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb565 = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width             = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height            = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420ToRGB565(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgb565.Data(),
        dst_stride_rgb565,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value J420ToRGB565(const Napi::CallbackInfo& info) {
    auto src_y             = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y      = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u             = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u      = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v             = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v      = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb565        = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb565 = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width             = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height            = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::J420ToRGB565(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgb565.Data(),
        dst_stride_rgb565,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value H420ToRGB565(const Napi::CallbackInfo& info) {
    auto src_y             = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y      = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u             = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u      = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v             = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v      = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb565        = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb565 = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width             = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height            = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H420ToRGB565(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgb565.Data(),
        dst_stride_rgb565,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I422ToRGB565(const Napi::CallbackInfo& info) {
    auto src_y             = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y      = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u             = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u      = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v             = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v      = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb565        = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb565 = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width             = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height            = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I422ToRGB565(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgb565.Data(),
        dst_stride_rgb565,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I420 To RGB565 with 4x4 dither matrix (16 bytes).
 * Values in dither matrix from 0 to 7 recommended.
 * The order of the dither matrix is first byte is upper left.
 */
Napi::Value I420ToRGB565Dither(const Napi::CallbackInfo& info) {
    auto src_y             = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y      = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u             = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u      = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v             = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v      = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb565        = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb565 = info[7]   .As<Napi::Number>()     .Int32Value();
    auto dither4x4         = info[8]   .As<Napi::Uint8Array>() ;
    auto width             = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height            = info[10]  .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420ToRGB565Dither(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgb565.Data(),
        dst_stride_rgb565,
        dither4x4.Data(),
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420ToARGB1555(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb1555        = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb1555 = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width               = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420ToARGB1555(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb1555.Data(),
        dst_stride_argb1555,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value I420ToARGB4444(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb4444        = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb4444 = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width               = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420ToARGB4444(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb4444.Data(),
        dst_stride_argb4444,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I420 to AR30.
 */
Napi::Value I420ToAR30(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb4444        = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb4444 = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width               = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::I420ToAR30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb4444.Data(),
        dst_stride_argb4444,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert H420 to AR30.
 */
Napi::Value H420ToAR30(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_ar30            = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_ar30     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto width               = info[8]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[9]   .As<Napi::Number>()     .Int32Value();

    auto retval = libyuv::H420ToAR30(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_ar30.Data(),
        dst_stride_ar30,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I420 to ARGB with matrix.
 */
Napi::Value I420ToARGBMatrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[8]   .As<Napi::Object>()     ;
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I420ToARGBMatrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I422 to ARGB with matrix.
 */
Napi::Value I422ToARGBMatrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[8]   .As<Napi::Object>()     ;
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I422ToARGBMatrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I444 to ARGB with matrix.
 */
Napi::Value I444ToARGBMatrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[8]   .As<Napi::Object>()     ;
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I444ToARGBMatrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * multiply 10 bit yuv into high bits to allow any number of bits.
 */
Napi::Value I010ToAR30Matrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_ar30            = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_ar30     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[8]   .As<Napi::Object>()     ;
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I010ToAR30Matrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_ar30.Data(),
        dst_stride_ar30,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * multiply 10 bit yuv into high bits to allow any number of bits.
 */
Napi::Value I210ToAR30Matrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_ar30            = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_ar30     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[8]   .As<Napi::Object>()     ;
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I210ToAR30Matrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_ar30.Data(),
        dst_stride_ar30,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert 10 bit YUV to ARGB with matrix.
 */
Napi::Value I010ToARGBMatrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[8]   .As<Napi::Object>()     ;
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I010ToARGBMatrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert 10 bit 422 YUV to ARGB with matrix.
 */
Napi::Value I210ToARGBMatrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint16Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint16Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint16Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[8]   .As<Napi::Object>()     ;
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I210ToARGBMatrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_argb.Data(),
        dst_stride_argb,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I420 with Alpha to preattenuated ARGB with matrix.
 */
Napi::Value I420AlphaToARGBMatrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_a               = info[6]   .As<Napi::Uint8Array>() ;
    auto src_stride_a        = info[7]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[8]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[9]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[10]  .As<Napi::Object>()     ;
    auto width               = info[11]  .As<Napi::Number>()     .Int32Value();
    auto height              = info[12]  .As<Napi::Number>()     .Int32Value();
    auto attenuate           = info[13]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I420AlphaToARGBMatrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        src_a.Data(),
        src_stride_a,
        dst_argb.Data(),
        dst_stride_argb,
        &constants,
        width,
        height,
        attenuate
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert NV12 to ARGB with matrix.
 */
Napi::Value NV12ToARGBMatrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_uv              = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_uv       = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[6]   .As<Napi::Object>()     ;
    auto width               = info[7]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[8]   .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::NV12ToARGBMatrix(
        src_y.Data(),
        src_stride_y,
        src_uv.Data(),
        src_stride_uv,
        dst_argb.Data(),
        dst_stride_argb,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert NV21 to ARGB with matrix.
 */
Napi::Value NV21ToARGBMatrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_vu              = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_vu       = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[5]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[6]   .As<Napi::Object>()     ;
    auto width               = info[7]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[8]   .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::NV21ToARGBMatrix(
        src_y.Data(),
        src_stride_y,
        src_vu.Data(),
        src_stride_vu,
        dst_argb.Data(),
        dst_stride_argb,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert NV12 to RGB565 with matrix.
 */
Napi::Value NV12ToRGB565Matrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_uv              = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_uv       = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb565          = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb565   = info[5]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[6]   .As<Napi::Object>()     ;
    auto width               = info[7]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[8]   .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::NV12ToRGB565Matrix(
        src_y.Data(),
        src_stride_y,
        src_uv.Data(),
        src_stride_uv,
        dst_rgb565.Data(),
        dst_stride_rgb565,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert NV12 to RGB24 with matrix.
 */
Napi::Value NV12ToRGB24Matrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_uv              = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_uv       = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb24           = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb24    = info[5]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[6]   .As<Napi::Object>()     ;
    auto width               = info[7]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[8]   .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::NV12ToRGB24Matrix(
        src_y.Data(),
        src_stride_y,
        src_uv.Data(),
        src_stride_uv,
        dst_rgb24.Data(),
        dst_stride_rgb24,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert NV21 to RGB24 with matrix.
 */
Napi::Value NV21ToRGB24Matrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_vu              = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_vu       = info[3]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb24           = info[4]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb24    = info[5]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[6]   .As<Napi::Object>()     ;
    auto width               = info[7]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[8]   .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::NV21ToRGB24Matrix(
        src_y.Data(),
        src_stride_y,
        src_vu.Data(),
        src_stride_vu,
        dst_rgb24.Data(),
        dst_stride_rgb24,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert Android420 to ARGB with matrix.
 */
Napi::Value Android420ToARGBMatrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_pixel_stride_uv = info[6]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[7]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[8]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[9]   .As<Napi::Object>()     ;
    auto width               = info[10]  .As<Napi::Number>()     .Int32Value();
    auto height              = info[11]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::Android420ToARGBMatrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        src_pixel_stride_uv,
        dst_argb.Data(),
        dst_stride_argb,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I422 to RGBA with matrix.
 */
Napi::Value I422ToRGBAMatrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgba            = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgba     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[8]   .As<Napi::Object>()     ;
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I422ToRGBAMatrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgba.Data(),
        dst_stride_rgba,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I422 to RGBA with matrix.
 */
Napi::Value I420ToRGBAMatrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgba            = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgba     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[8]   .As<Napi::Object>()     ;
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I420ToRGBAMatrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgba.Data(),
        dst_stride_rgba,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I420 to RGB24 with matrix.
 */
Napi::Value I420ToRGB24Matrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgba            = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgba     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[8]   .As<Napi::Object>()     ;
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I420ToRGB24Matrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgba.Data(),
        dst_stride_rgba,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I420 to RGB565 with specified color matrix.
 */
Napi::Value I420ToRGB565Matrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_rgb565          = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_rgb565   = info[7]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[8]   .As<Napi::Object>()     ;
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I420ToRGB565Matrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_rgb565.Data(),
        dst_stride_rgb565,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I420 to AR30 with matrix.
 */
Napi::Value I420ToAR30Matrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto src_u               = info[2]   .As<Napi::Uint8Array>() ;
    auto src_stride_u        = info[3]   .As<Napi::Number>()     .Int32Value();
    auto src_v               = info[4]   .As<Napi::Uint8Array>() ;
    auto src_stride_v        = info[5]   .As<Napi::Number>()     .Int32Value();
    auto dst_ar30            = info[6]   .As<Napi::Uint8Array>() ;
    auto dst_stride_ar30     = info[7]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[8]   .As<Napi::Object>()     ;
    auto width               = info[9]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[10]  .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I420ToAR30Matrix(
        src_y.Data(),
        src_stride_y,
        src_u.Data(),
        src_stride_u,
        src_v.Data(),
        src_stride_v,
        dst_ar30.Data(),
        dst_stride_ar30,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

/**
 * Convert I400 (grey) to ARGB.  Reverse of ARGBToI400.
 */
Napi::Value I400ToARGBMatrix(const Napi::CallbackInfo& info) {
    auto src_y               = info[0]   .As<Napi::Uint8Array>() ;
    auto src_stride_y        = info[1]   .As<Napi::Number>()     .Int32Value();
    auto dst_argb            = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb     = info[3]   .As<Napi::Number>()     .Int32Value();
    auto yuvconstants        = info[4]   .As<Napi::Object>()     ;
    auto width               = info[5]   .As<Napi::Number>()     .Int32Value();
    auto height              = info[6]   .As<Napi::Number>()     .Int32Value();
    auto constants = serializeConstants(yuvconstants);

    auto retval = libyuv::I400ToARGBMatrix(
        src_y.Data(),
        src_stride_y,
        dst_argb.Data(),
        dst_stride_argb,
        &constants,
        width,
        height
    );

    return Napi::Number::New(info.Env(), retval);
}

Napi::Value ConvertToARGB(const Napi::CallbackInfo& info) {
    auto sample           = info[0]   .As<Napi::Uint8Array>() ;
    auto sample_size      = info[1]   .As<Napi::Number>()     .Uint32Value();
    auto dst_argb         = info[2]   .As<Napi::Uint8Array>() ;
    auto dst_stride_argb  = info[3]   .As<Napi::Number>()     .Int32Value();
    auto crop_x           = info[4]   .As<Napi::Number>()     .Int32Value();
    auto crop_y           = info[5]   .As<Napi::Number>()     .Int32Value();
    auto src_width        = info[6]   .As<Napi::Number>()     .Int32Value();
    auto src_height       = info[7]   .As<Napi::Number>()     .Int32Value();
    auto crop_width       = info[8]   .As<Napi::Number>()     .Int32Value();
    auto crop_height      = info[9]   .As<Napi::Number>()     .Int32Value();
    auto rotation         = info[10]  .As<Napi::Number>()     .Int32Value();
    auto fourcc           = info[11]  .As<Napi::Number>()     .Uint32Value();

    auto retval = libyuv::ConvertToARGB(
        sample.Data(),
        sample_size,
        dst_argb.Data(),
        dst_stride_argb,
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
