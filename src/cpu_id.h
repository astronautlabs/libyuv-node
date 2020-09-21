#include <napi.h>

Napi::Value InitCpuFlags(const Napi::CallbackInfo&);
Napi::Value TestCpuFlag(const Napi::CallbackInfo&);
Napi::Value ArmCpuCaps(const Napi::CallbackInfo&);
Napi::Value MipsCpuCaps(const Napi::CallbackInfo&);
Napi::Value MaskCpuFlags(const Napi::CallbackInfo&);
Napi::Value SetCpuFlags(const Napi::CallbackInfo&);
Napi::Value CpuId(const Napi::CallbackInfo&);