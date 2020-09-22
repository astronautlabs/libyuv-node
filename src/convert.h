/*
 *  Copyright 2012 The LibYuv Project Authors. All rights reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS. All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include <napi.h>

/** 
 * Convert I444 to I420.
 * Usage: 
 */
Napi::Value I444ToI420(const Napi::CallbackInfo&);

/** 
 * Convert I444 to NV12.
 * Usage: 
 */
Napi::Value I444ToNV12(const Napi::CallbackInfo&);

/** 
 * Convert I444 to NV21.
 * Usage: 
 */
Napi::Value I444ToNV21(const Napi::CallbackInfo&);

/** 
 * Convert I422 to I420.
 * Usage: 
 */
Napi::Value I422ToI420(const Napi::CallbackInfo&);

/** 
 * Convert I422 to NV21.
 * Usage: 
 */
Napi::Value I422ToNV21(const Napi::CallbackInfo&);

/**
 * Copy I420 to I420.
 * Usage:
 */
#define I420ToI420 I420Copy

/** 
 * Copy I420 to I420.
 * Usage: 
 */
Napi::Value I420Copy(const Napi::CallbackInfo&);

/**
 * Copy I010 to I010
 * Usage:
 */
#define I010ToI010 I010Copy

/**
 * Copy I010 to I010
 * Usage:
 */
#define H010ToH010 I010Copy

/** 
 * Copy I010 to I010
 * Usage: 
 */
Napi::Value I010Copy(const Napi::CallbackInfo&);

/**
 * Convert 10 bit YUV to 8 bit
 * Usage: 
 */
#define H010ToH420 I010ToI420

/** 
 * Convert 10 bit YUV to 8 bit
 * Usage: 
 */
Napi::Value I010ToI420(const Napi::CallbackInfo&);

/** 
 * Convert I400 (grey) to I420.
 * Usage: 
 */
Napi::Value I400ToI420(const Napi::CallbackInfo&);

/** 
 * Convert I400 (grey) to NV21.
 * Usage: 
 */
Napi::Value I400ToNV21(const Napi::CallbackInfo&);

/**
 * Convert I400 (grey) to NV21.
 * Usage: 
 */
#define J400ToJ420 I400ToI420

/** 
 * Convert NV12 to I420.
 * Usage: 
 */
Napi::Value NV12ToI420(const Napi::CallbackInfo&);

/** 
 * Convert NV21 to I420.
 * Usage: 
 */
Napi::Value NV21ToI420(const Napi::CallbackInfo&);

/** 
 * Convert YUY2 to I420.
 * Usage: 
 */
Napi::Value YUY2ToI420(const Napi::CallbackInfo&);

/** 
 * Convert UYVY to I420.
 * Usage: 
 */
Napi::Value UYVYToI420(const Napi::CallbackInfo&);

/** 
 * Convert AYUV to NV12.
 * Usage: 
 */
Napi::Value AYUVToNV12(const Napi::CallbackInfo&);

/** 
 * Convert AYUV to NV21.
 * Usage: 
 */
Napi::Value AYUVToNV21(const Napi::CallbackInfo&);

/** 
 * Convert Android420 to I420.
 * Usage: 
 */
Napi::Value Android420ToI420(const Napi::CallbackInfo&);

/** 
 * ARGB little endian (bgra in memory) to I420.
 * Usage: 
 */
Napi::Value ARGBToI420(const Napi::CallbackInfo&);

/** 
 * BGRA little endian (argb in memory) to I420.
 * Usage: 
 */
Napi::Value BGRAToI420(const Napi::CallbackInfo&);

/** 
 * ABGR little endian (rgba in memory) to I420.
 * Usage: 
 */
Napi::Value ABGRToI420(const Napi::CallbackInfo&);

/** 
 * RGBA little endian (abgr in memory) to I420.
 * Usage: 
 */
Napi::Value RGBAToI420(const Napi::CallbackInfo&);

/** 
 * RGB little endian (bgr in memory) to I420.
 * Usage: 
 */
Napi::Value RGB24ToI420(const Napi::CallbackInfo&);

/** 
 * RGB little endian (bgr in memory) to J420.
 * Usage: 
 */
Napi::Value RGB24ToJ420(const Napi::CallbackInfo&);

/** 
 * RGB big endian (rgb in memory) to I420.
 * Usage: 
 */
Napi::Value RAWToI420(const Napi::CallbackInfo&);

/** 
 * RGB16 (RGBP fourcc) little endian to I420.
 * Usage: 
 */
Napi::Value RGB565ToI420(const Napi::CallbackInfo&);

/** 
 * RGB15 (RGBO fourcc) little endian to I420.
 * Usage: 
 */
Napi::Value ARGB1555ToI420(const Napi::CallbackInfo&);

/** 
 * RGB12 (R444 fourcc) little endian to I420.
 * Usage: 
 */
Napi::Value ARGB4444ToI420(const Napi::CallbackInfo&);

/** 
 * RGB little endian (bgr in memory) to J400.
 * Usage: 
 */
Napi::Value RGB24ToJ400(const Napi::CallbackInfo&);

/** 
 * RGB big endian (rgb in memory) to J400.
 * Usage: 
 */
Napi::Value RAWToJ400(const Napi::CallbackInfo&);

/** 
 * src_width/height provided by capture.
 * dst_width/height for clipping determine final size.
 * Usage: 
 */
Napi::Value MJPGToI420(const Napi::CallbackInfo&);

/** 
 * JPEG to NV21
 * Usage: 
 */
Napi::Value MJPGToNV21(const Napi::CallbackInfo&);

/** 
 * Query size of MJPG in pixels.
 * Usage: 
 */
Napi::Value MJPGSize(const Napi::CallbackInfo&);

/**
 * Convert camera sample to I420 with cropping, rotation and vertical flip.
 * "src_size" is needed to parse MJPG.
 * "dst_stride_y" number of bytes in a row of the dst_y plane.
 *   Normally this would be the same as dst_width, with recommended alignment
 *   to 16 bytes for better efficiency.
 *   If rotation of 90 or 270 is used, stride is affected. The caller should
 *   allocate the I420 buffer according to rotation.
 * "dst_stride_u" number of bytes in a row of the dst_u plane.
 *   Normally this would be the same as (dst_width + 1) / 2, with
 *   recommended alignment to 16 bytes for better efficiency.
 *   If rotation of 90 or 270 is used, stride is affected.
 * "crop_x" and "crop_y" are starting position for cropping.
 *   To center, crop_x = (src_width - dst_width) / 2
 *              crop_y = (src_height - dst_height) / 2
 * "src_width" / "src_height" is size of src_frame in pixels.
 *   "src_height" can be negative indicating a vertically flipped image source.
 * "crop_width" / "crop_height" is the size to crop the src to.
 *    Must be less than or equal to src_width/src_height
 *    Cropping parameters are pre-rotation.
 * "rotation" can be 0, 90, 180 or 270.
 * "fourcc" is a fourcc. ie 'I420', 'YUY2'
 * Returns 0 for successful; -1 for invalid parameter. Non-zero for failure.
 * 
 * Usage: 
 */
Napi::Value ConvertToI420(const Napi::CallbackInfo&);