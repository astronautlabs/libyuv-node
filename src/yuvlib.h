#include <napi.h>

void Init(Napi::Env, Napi::Object);
Napi::Value I420ToRgba(const Napi::CallbackInfo&);
Napi::Value RgbaToI420(const Napi::CallbackInfo&);
