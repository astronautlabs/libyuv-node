#include <libyuv.h>
#include "yuvlib.h"
#include "i420_util.h"
#include "rgba_util.h"

// RgbaToI420(width : number, height : number, rgbaFrame : UInt8Array, i420Frame : UInt8Array)
Napi::Value RgbaToI420(const Napi::CallbackInfo& info) {
    auto width = info[0].As<Napi::Number>().Int32Value();
    auto height = info[1].As<Napi::Number>().Int32Value();
    auto rgbaFrame = info[2].As<Napi::Uint8Array>();
    auto i420Frame = info[3].As<Napi::Uint8Array>();

    if (rgbaFrame.ElementLength() != width*height*4)
        Napi::TypeError::New(info.Env(), "RGBA buffer size does not match passed width/height").ThrowAsJavaScriptException();

    if ((float)i420Frame.ElementLength() != width*height*1.5f)
        Napi::TypeError::New(info.Env(), "I420 buffer size does not match passed width/height").ThrowAsJavaScriptException();
    
    libyuv::ABGRToI420(
        rgbaFrame.Data(),
        rgba_stride(width),
        i420_y_data(width, height, i420Frame.Data()),
        i420_y_stride(width),   
        i420_u_data(width, height, i420Frame.Data()), 
        i420_u_stride(width),
        i420_v_data(width, height, i420Frame.Data()), 
        i420_v_stride(width),
        width,
        height
    );

    return info.Env().Undefined();
}

// RgbaToI420(width : number, height : number, i420Frame : UInt8Array, rgbaFrame : UInt8Array)
Napi::Value I420ToRgba(const Napi::CallbackInfo& info) {
    auto width = info[0].As<Napi::Number>().Int64Value();
    auto height = info[1].As<Napi::Number>().Int64Value();
    auto i420Frame = info[2].As<Napi::Uint8Array>();
    auto rgbaFrame = info[3].As<Napi::Uint8Array>();

    if ((float)i420Frame.ElementLength() != width*height*1.5f)
        Napi::TypeError::New(info.Env(), "I420 buffer size does not match passed width/height").ThrowAsJavaScriptException();
    
    if (rgbaFrame.ElementLength() != width*height*4)
        Napi::TypeError::New(info.Env(), "RGBA buffer size does not match passed width/height").ThrowAsJavaScriptException();

    libyuv::I420ToABGR(
        i420_y_data(width, height, i420Frame.Data()),
        i420_y_stride(width),
        i420_u_data(width, height, i420Frame.Data()), 
        i420_u_stride(width),
        i420_v_data(width, height, i420Frame.Data()), 
        i420_v_stride(width),
        rgbaFrame.Data(),
        rgba_stride(width),
        width, 
        height
    );

    return info.Env().Undefined();
}

void Init(Napi::Env env, Napi::Object exports) {
  exports.Set("rgbaToI420", Napi::Function::New(env, RgbaToI420));
  exports.Set("i420ToRgba", Napi::Function::New(env, I420ToRgba));
}
