#include <libyuv.h>
#include "version.h"

Napi::Value Version(const Napi::CallbackInfo& info) {
    return Napi::Number::New(info.Env(), LIBYUV_VERSION);
}