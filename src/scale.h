#include <napi.h>

/**
 * Scale a YUV plane.
 */
Napi::Value ScalePlane(const Napi::CallbackInfo& info);

Napi::Value ScalePlane_16(const Napi::CallbackInfo& info);

/**
 * Scales a YUV 4:2:0 image from the src width and height to the
 * dst width and height.
 * If filtering is kFilterNone, a simple nearest-neighbor algorithm is
 * used. This produces basic (blocky) quality at the fastest speed.
 * If filtering is kFilterBilinear, interpolation is used to produce a better
 * quality image, at the expense of speed.
 * If filtering is kFilterBox, averaging is used to produce ever better
 * quality image, at further expense of speed.
 * Returns 0 if successful.
 */
Napi::Value I420Scale(const Napi::CallbackInfo& info);

Napi::Value I420Scale_16(const Napi::CallbackInfo& info);

/**
 * Scales a YUV 4:4:4 image from the src width and height to the
 * dst width and height.
 * If filtering is kFilterNone, a simple nearest-neighbor algorithm is
 * used. This produces basic (blocky) quality at the fastest speed.
 * If filtering is kFilterBilinear, interpolation is used to produce a better
 * quality image, at the expense of speed.
 * If filtering is kFilterBox, averaging is used to produce ever better
 * quality image, at further expense of speed.
 * Returns 0 if successful.
 */

Napi::Value I444Scale(const Napi::CallbackInfo& info);

Napi::Value I444Scale_16(const Napi::CallbackInfo& info);

/**
 * Legacy API.  Deprecated.
 */
Napi::Value Scale(const Napi::CallbackInfo& info);
