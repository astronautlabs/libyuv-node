#include <napi.h>
#include <libyuv.h>
#include "cpu_id.h"

Napi::Value InitCpuFlags(const Napi::CallbackInfo& callback) {
    return Napi::Number::New(callback.Env(), libyuv::InitCpuFlags());
}

Napi::Value TestCpuFlag(const Napi::CallbackInfo& callback) {
    auto test_flag = callback[0].As<Napi::Number>().Int32Value();
    return Napi::Number::New(callback.Env(), libyuv::TestCpuFlag(test_flag));
}

Napi::Value ArmCpuCaps(const Napi::CallbackInfo& callback) {
    auto cpuinfo_name = callback[0].As<Napi::String>().Utf8Value();
    return Napi::Number::New(callback.Env(), libyuv::ArmCpuCaps(cpuinfo_name.c_str()));
}

Napi::Value MipsCpuCaps(const Napi::CallbackInfo& callback) {
    auto cpuinfo_name = callback[0].As<Napi::String>().Utf8Value();
    return Napi::Number::New(callback.Env(), libyuv::MipsCpuCaps(cpuinfo_name.c_str()));
}

Napi::Value MaskCpuFlags(const Napi::CallbackInfo& callback) {
    auto enable_flags = callback[0].As<Napi::Number>().Int32Value();
    return Napi::Number::New(callback.Env(), libyuv::MaskCpuFlags(enable_flags));
}

Napi::Value SetCpuFlags(const Napi::CallbackInfo& callback) {
    auto cpu_flags = callback[0].As<Napi::Number>().Int32Value();
    libyuv::SetCpuFlags(cpu_flags);
    return callback.Env().Undefined();
}

Napi::Value CpuId(const Napi::CallbackInfo& callback) {
    auto info_eax = callback[0].As<Napi::Number>().Int32Value();
    auto info_ecx = callback[1].As<Napi::Number>().Int32Value();
    auto cpu_info = callback[2].As<Napi::Int32Array>();

    libyuv::CpuId(info_eax, info_ecx, cpu_info.Data());
    return callback.Env().Undefined();
}
