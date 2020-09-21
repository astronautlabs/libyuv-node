
Napi::Value InitCpuFlags(const Napi::CallbackInfo& callback) {
    return Napi::Number::New(libyuv::InitCpuFlags());
}

Napi::Value TestCpuFlag(const Napi::CallbackInfo& callback) {
    return Napi::Number::New(libyuv::TestCpuFlag());
}

Napi::Value ArmCpuCaps(const Napi::CallbackInfo& callback) {
    return Napi::Number::New(libyuv::ArmCpuCaps());
}

Napi::Value MipsCpuCaps(const Napi::CallbackInfo& callback) {
    return Napi::Number::New(libyuv::MipsCpuCaps());
}

Napi::Value MaskCpuFlags(const Napi::CallbackInfo& callback) {
    auto enable_flags = callback[0].As<Napi::Number>().Int32Value();
    return Napi::Number::New(libyuv::MaskCpuFlags(enable_flags));
}

Napi::Value SetCpuFlags(const Napi::CallbackInfo& callback) {
    auto cpu_flags = callback[0].As<Napi::Number>().Int32Value();
    libyuv::SetCpuFlags(cpu_flags);
    return info.Env().Undefined();
}

Napi::Value CpuId(const Napi::CallbackInfo& callback) {
    auto info_eax = callback[0].As<Napi::Number>().Int32Value();
    auto info_ecx = callback[1].As<Napi::Number>().Int32Value();
    auto cpu_info = callback[2].As<Napi::Uint8Array>();

    libyuv::CpuId(info_eax, info_ecx, todo);
    return info.Env().Undefined();
}
