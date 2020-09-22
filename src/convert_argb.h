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
#include <libyuv/basic_types.h>
#include <libyuv/rotate.h>  // For enum RotationMode.
#include "config.h"

// Alias.
#define ARGBToARGB ARGBCopy

/**
 * Copy ARGB to ARGB.
 */
Napi::Value ARGBCopy(const Napi::CallbackInfo& info);

/**
 * Convert I420 to ARGB.
 */
Napi::Value I420ToARGB(const Napi::CallbackInfo& info);


/**
 * Convert I420 to ABGR.
 */
Napi::Value I420ToABGR(const Napi::CallbackInfo& info);


/**
 * Convert J420 to ARGB.
 */
Napi::Value J420ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert J420 to ABGR.
 */
Napi::Value J420ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert H420 to ARGB.
 */
Napi::Value H420ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert H420 to ABGR.
 */
Napi::Value H420ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert U420 to ARGB.
 */
Napi::Value U420ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert U420 to ABGR.
 */
Napi::Value U420ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert I422 to ARGB.
 */
Napi::Value I422ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert I422 to ABGR.
 */
Napi::Value I422ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert J422 to ARGB.
 */
Napi::Value J422ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert J422 to ABGR.
 */
Napi::Value J422ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert H422 to ARGB.
 */
Napi::Value H422ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert H422 to ABGR.
 */
Napi::Value H422ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert U422 to ARGB.
 */
Napi::Value U422ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert U422 to ABGR.
 */
Napi::Value U422ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert I444 to ARGB.
 */
Napi::Value I444ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert I444 to ABGR.
 */
Napi::Value I444ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert J444 to ARGB.
 */
Napi::Value J444ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert J444 to ABGR.
 */
Napi::Value J444ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert H444 to ARGB.
 */
Napi::Value H444ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert H444 to ABGR.
 */
Napi::Value H444ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert U444 to ARGB.
 */
Napi::Value U444ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert U444 to ABGR.
 */
Napi::Value U444ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert I010 to ARGB.
 */
Napi::Value I010ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert I010 to ABGR.
 */
Napi::Value I010ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert H010 to ARGB.
 */
Napi::Value H010ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert H010 to ABGR.
 */
Napi::Value H010ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert U010 to ARGB.
 */
Napi::Value U010ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert U010 to ABGR.
 */
Napi::Value U010ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert I210 to ARGB.
 */
Napi::Value I210ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert I210 to ABGR.
 */
Napi::Value I210ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert H210 to ARGB.
 */
Napi::Value H210ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert H210 to ABGR.
 */
Napi::Value H210ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert U210 to ARGB.
 */
Napi::Value U210ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert U210 to ABGR.
 */
Napi::Value U210ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert I420 with Alpha to preattenuated ARGB.
 */
Napi::Value I420AlphaToARGB(const Napi::CallbackInfo& info);

/**
 * Convert I420 with Alpha to preattenuated ABGR.
 */
Napi::Value I420AlphaToABGR(const Napi::CallbackInfo& info);

/**
 * Convert I400 (grey) to ARGB.  Reverse of ARGBToI400.
 */
Napi::Value I400ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert J400 (jpeg grey) to ARGB.
 */
Napi::Value J400ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert I400 (grey) to ARGB.  Reverse of ARGBToI400.
 */
#define YToARGB I400ToARGB

/**
 * Convert NV12 to ARGB.
 */
Napi::Value NV12ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert NV21 to ARGB.
 */
Napi::Value NV21ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert NV12 to ABGR.
 */
Napi::Value NV12ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert NV21 to ABGR.
 */
Napi::Value NV21ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert NV12 to RGB24.
 */
Napi::Value NV12ToRGB24(const Napi::CallbackInfo& info);

/**
 * Convert NV21 to RGB24.
 */
Napi::Value NV21ToRGB24(const Napi::CallbackInfo& info);

/**
 * Convert NV21 to YUV24.
 */
Napi::Value NV21ToYUV24(const Napi::CallbackInfo& info);

/**
 * Convert NV12 to RAW.
 */
Napi::Value NV12ToRAW(const Napi::CallbackInfo& info);

/**
 * Convert NV21 to RAW.
 */
Napi::Value NV21ToRAW(const Napi::CallbackInfo& info);

/**
 * Convert YUY2 to ARGB.
 */
Napi::Value YUY2ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert UYVY to ARGB.
 */
Napi::Value UYVYToARGB(const Napi::CallbackInfo& info);

/**
 * Convert I010 to AR30.
 */
Napi::Value I010ToAR30(const Napi::CallbackInfo& info);

/**
 * Convert I010 to AB30.
 */
Napi::Value I010ToAB30(const Napi::CallbackInfo& info);

/**
 * Convert H010 to AR30.
 */
Napi::Value H010ToAR30(const Napi::CallbackInfo& info);

/**
 * Convert H010 to AB30.
 */
Napi::Value H010ToAB30(const Napi::CallbackInfo& info);

/**
 * Convert U010 to AR30.
 */
Napi::Value U010ToAR30(const Napi::CallbackInfo& info);

/**
 * Convert U010 to AB30.
 */
Napi::Value U010ToAB30(const Napi::CallbackInfo& info);

/**
 * Convert I210 to AR30.
 */
Napi::Value I210ToAR30(const Napi::CallbackInfo& info);

/**
 * Convert I210 to AB30.
 */
Napi::Value I210ToAB30(const Napi::CallbackInfo& info);

/**
 * Convert H210 to AR30.
 */
Napi::Value H210ToAR30(const Napi::CallbackInfo& info);

/**
 * Convert H210 to AB30.
 */
Napi::Value H210ToAB30(const Napi::CallbackInfo& info);

/**
 * Convert U210 to AR30.
 */
Napi::Value U210ToAR30(const Napi::CallbackInfo& info);

/**
 * Convert U210 to AB30.
 */
Napi::Value U210ToAB30(const Napi::CallbackInfo& info);

/**
 * BGRA little endian (argb in memory) to ARGB.
 */
Napi::Value BGRAToARGB(const Napi::CallbackInfo& info);

/**
 * ABGR little endian (rgba in memory) to ARGB.
 */
Napi::Value ABGRToARGB(const Napi::CallbackInfo& info);

/**
 * RGBA little endian (abgr in memory) to ARGB.
 */
Napi::Value RGBAToARGB(const Napi::CallbackInfo& info);

/**
 * RGB little endian (bgr in memory) to ARGB. @deprecated Deprecated function name.
 */
#define BG24ToARGB RGB24ToARGB

/**
 * RGB little endian (bgr in memory) to ARGB.
 */
Napi::Value RGB24ToARGB(const Napi::CallbackInfo& info);

/**
 * RGB big endian (rgb in memory) to ARGB.
 */
Napi::Value RAWToARGB(const Napi::CallbackInfo& info);

/**
 * RGB big endian (rgb in memory) to RGBA.
 */
Napi::Value RAWToRGBA(const Napi::CallbackInfo& info);

/**
 * RGB16 (RGBP fourcc) little endian to ARGB.
 */
Napi::Value RGB565ToARGB(const Napi::CallbackInfo& info);

/**
 * RGB15 (RGBO fourcc) little endian to ARGB.
 */
Napi::Value ARGB1555ToARGB(const Napi::CallbackInfo& info);

/**
 * RGB12 (R444 fourcc) little endian to ARGB.
 */
Napi::Value ARGB4444ToARGB(const Napi::CallbackInfo& info);

// Convert AR30 To ABGR.
#define AB30ToARGB AR30ToABGR

// Convert AR30 To ARGB.
#define AB30ToABGR AR30ToARGB

// Convert AR30 To AB30.
#define AB30ToAR30 AR30ToAB30

/**
 * Convert AR30 To ARGB.
 */
Napi::Value AR30ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert AR30 To ABGR.
 */
Napi::Value AR30ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert AR30 To AB30.
 */
Napi::Value AR30ToAB30(const Napi::CallbackInfo& info);

#ifdef HAVE_JPEG
/** 
 * src_width/height provided by capture
 * dst_width/height for clipping determine final size.
 */
Napi::Value MJPGToARGB(const Napi::CallbackInfo& info);
#endif

/**
 * Convert Android420 to ARGB.
 */
Napi::Value Android420ToARGB(const Napi::CallbackInfo& info);

/**
 * Convert Android420 to ABGR.
 */
Napi::Value Android420ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert NV12 to RGB565.
 */
Napi::Value NV12ToRGB565(const Napi::CallbackInfo& info);

/**
 * Convert I422 to BGRA.
 */
Napi::Value I422ToBGRA(const Napi::CallbackInfo& info);

/**
 * Convert I422 to ABGR.
 */
Napi::Value I422ToABGR(const Napi::CallbackInfo& info);

/**
 * Convert I422 to RGBA.
 */
Napi::Value I422ToRGBA(const Napi::CallbackInfo& info);

Napi::Value I420ToARGB(const Napi::CallbackInfo& info);

Napi::Value I420ToBGRA(const Napi::CallbackInfo& info);

Napi::Value I420ToABGR(const Napi::CallbackInfo& info);

Napi::Value I420ToRGBA(const Napi::CallbackInfo& info);

Napi::Value I420ToRGB24(const Napi::CallbackInfo& info);

Napi::Value I420ToRAW(const Napi::CallbackInfo& info);

Napi::Value H420ToRGB24(const Napi::CallbackInfo& info);

Napi::Value H420ToRAW(const Napi::CallbackInfo& info);

Napi::Value J420ToRGB24(const Napi::CallbackInfo& info);

Napi::Value J420ToRAW(const Napi::CallbackInfo& info);

Napi::Value I420ToRGB565(const Napi::CallbackInfo& info);

Napi::Value J420ToRGB565(const Napi::CallbackInfo& info);

Napi::Value H420ToRGB565(const Napi::CallbackInfo& info);

Napi::Value I422ToRGB565(const Napi::CallbackInfo& info);

/**
 * Convert I420 To RGB565 with 4x4 dither matrix (16 bytes).
 * Values in dither matrix from 0 to 7 recommended.
 * The order of the dither matrix is first byte is upper left.
 */
Napi::Value I420ToRGB565Dither(const Napi::CallbackInfo& info);

Napi::Value I420ToARGB1555(const Napi::CallbackInfo& info);

Napi::Value I420ToARGB4444(const Napi::CallbackInfo& info);

/**
 * Convert I420 to AR30.
 */
Napi::Value I420ToAR30(const Napi::CallbackInfo& info);

/**
 * Convert H420 to AR30.
 */
Napi::Value H420ToAR30(const Napi::CallbackInfo& info);

/**
 * Convert I420 to ARGB with matrix.
 */
Napi::Value I420ToARGBMatrix(const Napi::CallbackInfo& info);

/**
 * Convert I422 to ARGB with matrix.
 */
Napi::Value I422ToARGBMatrix(const Napi::CallbackInfo& info);

/**
 * Convert I444 to ARGB with matrix.
 */
Napi::Value I444ToARGBMatrix(const Napi::CallbackInfo& info);

/**
 * multiply 10 bit yuv into high bits to allow any number of bits.
 */
Napi::Value I010ToAR30Matrix(const Napi::CallbackInfo& info);

/**
 * multiply 10 bit yuv into high bits to allow any number of bits.
 */
Napi::Value I210ToAR30Matrix(const Napi::CallbackInfo& info);

/**
 * Convert 10 bit YUV to ARGB with matrix.
 */
Napi::Value I010ToARGBMatrix(const Napi::CallbackInfo& info);

/**
 * Convert 10 bit 422 YUV to ARGB with matrix.
 */
Napi::Value I210ToARGBMatrix(const Napi::CallbackInfo& info);

/**
 * Convert I420 with Alpha to preattenuated ARGB with matrix.
 */
Napi::Value I420AlphaToARGBMatrix(const Napi::CallbackInfo& info);

/**
 * Convert NV12 to ARGB with matrix.
 */
Napi::Value NV12ToARGBMatrix(const Napi::CallbackInfo& info);

/**
 * Convert NV21 to ARGB with matrix.
 */
Napi::Value NV21ToARGBMatrix(const Napi::CallbackInfo& info);

/**
 * Convert NV12 to RGB565 with matrix.
 */
Napi::Value NV12ToRGB565Matrix(const Napi::CallbackInfo& info);

/**
 * Convert NV12 to RGB24 with matrix.
 */
Napi::Value NV12ToRGB24Matrix(const Napi::CallbackInfo& info);

/**
 * Convert NV21 to RGB24 with matrix.
 */
Napi::Value NV21ToRGB24Matrix(const Napi::CallbackInfo& info);

/**
 * Convert Android420 to ARGB with matrix.
 */
Napi::Value Android420ToARGBMatrix(const Napi::CallbackInfo& info);

/**
 * Convert I422 to RGBA with matrix.
 */
Napi::Value I422ToRGBAMatrix(const Napi::CallbackInfo& info);

/**
 * Convert I422 to RGBA with matrix.
 */
Napi::Value I420ToRGBAMatrix(const Napi::CallbackInfo& info);

/**
 * Convert I420 to RGB24 with matrix.
 */
Napi::Value I420ToRGB24Matrix(const Napi::CallbackInfo& info);

/**
 * Convert I420 to RGB565 with specified color matrix.
 */
Napi::Value I420ToRGB565Matrix(const Napi::CallbackInfo& info);

/**
 * Convert I420 to AR30 with matrix.
 */
Napi::Value I420ToAR30Matrix(const Napi::CallbackInfo& info);

/**
 * Convert I400 (grey) to ARGB.  Reverse of ARGBToI400.
 */
Napi::Value I400ToARGBMatrix(const Napi::CallbackInfo& info);

/**
 * Convert camera sample to ARGB with cropping, rotation and vertical flip.
 * "sample_size" is needed to parse MJPG.
 * "dst_stride_argb" number of bytes in a row of the dst_argb plane.
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
 */
Napi::Value ConvertToARGB(const Napi::CallbackInfo& info);
