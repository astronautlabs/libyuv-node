#include <napi.h>

Napi::Value ARGBScale(const Napi::CallbackInfo& info);

/**
 * Clipped scale takes destination rectangle coordinates for clip values.
 */
Napi::Value ARGBScaleClip(const Napi::CallbackInfo& info);

/**
 * Scale with YUV conversion to ARGB and clipping.
 */
Napi::Value YUVToARGBScaleClip(const Napi::CallbackInfo& info);
