/*
 *  Copyright 2011 The LibYuv Project Authors. All rights reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS. All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

/**
 * Rotate I420 frame.
 */
Napi::Value I420Rotate(const Napi::CallbackInfo& info);

/**
 * Rotate I444 frame.
 */
Napi::Value I444Rotate(const Napi::CallbackInfo& info);

/**
 * Rotate NV12 input and store in I420.
 */
Napi::Value NV12ToI420Rotate(const Napi::CallbackInfo& info);

/**
 * Rotate a plane by 0, 90, 180, or 270.
 */
Napi::Value RotatePlane(const Napi::CallbackInfo& info);

/**
 * Rotate planes by 90, 180, 270. Deprecated.
 */
Napi::Value RotatePlane90(const Napi::CallbackInfo& info);

Napi::Value RotatePlane180(const Napi::CallbackInfo& info);

Napi::Value RotatePlane270(const Napi::CallbackInfo& info);

/**
 * Rotations for when U and V are interleaved.
 * These functions take one input pointer and
 * split the data into two buffers while
 * rotating them. Deprecated.
 */
Napi::Value RotateUV90(const Napi::CallbackInfo& info);

Napi::Value RotateUV180(const Napi::CallbackInfo& info);

Napi::Value RotateUV270(const Napi::CallbackInfo& info);

/**
 * The 90 and 270 functions are based on transposes.
 * Doing a transpose with reversing the read/write
 * order will result in a rotation by +- 90 degrees.
 * Deprecated.
 */
Napi::Value TransposePlane(const Napi::CallbackInfo& info);

Napi::Value TransposeUV(const Napi::CallbackInfo& info);