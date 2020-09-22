declare module "binding" {
    //#region convert_argb.h

    /**
     * Copy ARGB to ARGB.
     */
    export function ARGBCopy(
        src_argb: Uint8Array,
        src_stride_argb: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert I420 to ARGB.
     */
    export function I420ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert I420 to ABGR.
     */
    export function I420ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert J420 to ARGB.
     */
    export function J420ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert J420 to ABGR.
     */
    export function J420ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert H420 to ARGB.
     */
    export function H420ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert H420 to ABGR.
     */
    export function H420ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert U420 to ARGB.
     */
    export function U420ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert U420 to ABGR.
     */
    export function U420ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert I422 to ARGB.
     */
    export function I422ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert I422 to ABGR.
     */
    export function I422ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert J422 to ARGB.
     */
    export function J422ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert J422 to ABGR.
     */
    export function J422ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert H422 to ARGB.
     */
    export function H422ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert H422 to ABGR.
     */
    export function H422ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert U422 to ARGB.
     */
    export function U422ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert U422 to ABGR.
     */
    export function U422ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert I444 to ARGB.
     */
    export function I444ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /**
     * Convert I444 to ABGR.
     */
    export function I444ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert J444 to ARGB. */
    export function J444ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert J444 to ABGR. */
    export function J444ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert H444 to ARGB. */
    export function H444ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert H444 to ABGR. */
    export function H444ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert U444 to ARGB. */
    export function U444ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert U444 to ABGR. */
    export function U444ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert I010 to ARGB. */
    export function I010ToARGB(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert I010 to ABGR. */
    export function I010ToABGR(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert H010 to ARGB. */
    export function H010ToARGB(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert H010 to ABGR. */
    export function H010ToABGR(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert U010 to ARGB. */
    export function U010ToARGB(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert U010 to ABGR. */
    export function U010ToABGR(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert I210 to ARGB. */
    export function I210ToARGB(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert I210 to ABGR. */
    export function I210ToABGR(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert H210 to ARGB. */
    export function H210ToARGB(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert H210 to ABGR. */
    export function H210ToABGR(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert U210 to ARGB. */
    export function U210ToARGB(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert U210 to ABGR. */
    export function U210ToABGR(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert I420 with Alpha to preattenuated ARGB. */
    export function I420AlphaToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        src_a: Uint8Array,
        src_stride_a: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number,
        attenuate: number
    ): number;

    /** Convert I420 with Alpha to preattenuated ABGR. */
    export function I420AlphaToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        src_a: Uint8Array,
        src_stride_a: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number,
        attenuate: number
    ): number;

    /** Convert I400 (grey) to ARGB.  Reverse of ARGBToI400. */
    export function I400ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert J400 (jpeg grey) to ARGB. */
    export function J400ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Alias. */
    /** #define YToARGB I400ToARGB */

    /** Convert NV12 to ARGB. */
    export function NV12ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_uv: Uint8Array,
        src_stride_uv: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert NV21 to ARGB. */
    export function NV21ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_vu: Uint8Array,
        src_stride_vu: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert NV12 to ABGR. */
    export function NV12ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_uv: Uint8Array,
        src_stride_uv: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert NV21 to ABGR. */
    export function NV21ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_vu: Uint8Array,
        src_stride_vu: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert NV12 to RGB24. */
    export function NV12ToRGB24(
        src_y: Uint8Array,
        src_stride_y: number,
        src_uv: Uint8Array,
        src_stride_uv: number,
        dst_rgb24: Uint8Array,
        dst_stride_rgb24: number,
        width: number,
        height: number
    ): number;

    /** Convert NV21 to RGB24. */
    export function NV21ToRGB24(
        src_y: Uint8Array,
        src_stride_y: number,
        src_vu: Uint8Array,
        src_stride_vu: number,
        dst_rgb24: Uint8Array,
        dst_stride_rgb24: number,
        width: number,
        height: number
    ): number;

    /** Convert NV21 to YUV24. */
    export function NV21ToYUV24(
        src_y: Uint8Array,
        src_stride_y: number,
        src_vu: Uint8Array,
        src_stride_vu: number,
        dst_yuv24: Uint8Array,
        dst_stride_yuv24: number,
        width: number,
        height: number
    ): number;

    /** Convert NV12 to RAW. */
    export function NV12ToRAW(
        src_y: Uint8Array,
        src_stride_y: number,
        src_uv: Uint8Array,
        src_stride_uv: number,
        dst_raw: Uint8Array,
        dst_stride_raw: number,
        width: number,
        height: number
    ): number;

    /** Convert NV21 to RAW. */
    export function NV21ToRAW(
        src_y: Uint8Array,
        src_stride_y: number,
        src_vu: Uint8Array,
        src_stride_vu: number,
        dst_raw: Uint8Array,
        dst_stride_raw: number,
        width: number,
        height: number
    ): number;

    /** Convert YUY2 to ARGB. */
    export function YUY2ToARGB(
        src_yuy2: Uint8Array,
        src_stride_yuy2: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert UYVY to ARGB. */
    export function UYVYToARGB(
        src_uyvy: Uint8Array,
        src_stride_uyvy: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert I010 to AR30. */
    export function I010ToAR30(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ar30: Uint8Array,
        dst_stride_ar30: number,
        width: number,
        height: number
    ): number;

    /** Convert I010 to AB30. */
    export function I010ToAB30(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ab30: Uint8Array,
        dst_stride_ab30: number,
        width: number,
        height: number
    ): number;

    /** Convert H010 to AR30. */
    export function H010ToAR30(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ar30: Uint8Array,
        dst_stride_ar30: number,
        width: number,
        height: number
    ): number;

    /** Convert H010 to AB30. */
    export function H010ToAB30(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ab30: Uint8Array,
        dst_stride_ab30: number,
        width: number,
        height: number
    ): number;

    /** Convert U010 to AR30. */
    export function U010ToAR30(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ar30: Uint8Array,
        dst_stride_ar30: number,
        width: number,
        height: number
    ): number;

    /** Convert U010 to AB30. */
    export function U010ToAB30(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ab30: Uint8Array,
        dst_stride_ab30: number,
        width: number,
        height: number
    ): number;

    /** Convert I210 to AR30. */
    export function I210ToAR30(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ar30: Uint8Array,
        dst_stride_ar30: number,
        width: number,
        height: number
    ): number;

    /** Convert I210 to AB30. */
    export function I210ToAB30(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ab30: Uint8Array,
        dst_stride_ab30: number,
        width: number,
        height: number
    ): number;

    /** Convert H210 to AR30. */
    export function H210ToAR30(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ar30: Uint8Array,
        dst_stride_ar30: number,
        width: number,
        height: number
    ): number;

    /** Convert H210 to AB30. */
    export function H210ToAB30(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ab30: Uint8Array,
        dst_stride_ab30: number,
        width: number,
        height: number
    ): number;

    /** Convert U210 to AR30. */
    export function U210ToAR30(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ar30: Uint8Array,
        dst_stride_ar30: number,
        width: number,
        height: number
    ): number;

    /** Convert U210 to AB30. */
    export function U210ToAB30(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ab30: Uint8Array,
        dst_stride_ab30: number,
        width: number,
        height: number
    ): number;

    /** BGRA little endian (argb in memory) to ARGB. */
    export function BGRAToARGB(
        src_bgra: Uint8Array,
        src_stride_bgra: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** ABGR little endian (rgba in memory) to ARGB. */
    export function ABGRToARGB(
        src_abgr: Uint8Array,
        src_stride_abgr: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** RGBA little endian (abgr in memory) to ARGB. */
    export function RGBAToARGB(
        src_rgba: Uint8Array,
        src_stride_rgba: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Deprecated function name. */
    /** #define BG24ToARGB RGB24ToARGB */

    /** RGB little endian (bgr in memory) to ARGB. */
    export function RGB24ToARGB(
        src_rgb24: Uint8Array,
        src_stride_rgb24: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** RGB big endian (rgb in memory) to ARGB. */
    export function RAWToARGB(
        src_raw: Uint8Array,
        src_stride_raw: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** RGB big endian (rgb in memory) to RGBA. */
    export function RAWToRGBA(
        src_raw: Uint8Array,
        src_stride_raw: number,
        dst_rgba: Uint8Array,
        dst_stride_rgba: number,
        width: number,
        height: number
    ): number;

    /** RGB16 (RGBP fourcc) little endian to ARGB. */
    export function RGB565ToARGB(
        src_rgb565: Uint8Array,
        src_stride_rgb565: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** RGB15 (RGBO fourcc) little endian to ARGB. */
    export function ARGB1555ToARGB(
        src_argb1555: Uint8Array,
        src_stride_argb1555: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** RGB12 (R444 fourcc) little endian to ARGB. */
    export function ARGB4444ToARGB(
        src_argb4444: Uint8Array,
        src_stride_argb4444: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Aliases */
    /** #define AB30ToARGB AR30ToABGR */
    /** #define AB30ToABGR AR30ToARGB */
    /** #define AB30ToAR30 AR30ToAB30 */

    /** Convert AR30 To ARGB. */
    export function AR30ToARGB(
        src_ar30: Uint8Array,
        src_stride_ar30: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert AR30 To ABGR. */
    export function AR30ToABGR(
        src_ar30: Uint8Array,
        src_stride_ar30: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert AR30 To AB30. */
    export function AR30ToAB30(
        src_ar30: Uint8Array,
        src_stride_ar30: number,
        dst_ab30: Uint8Array,
        dst_stride_ab30: number,
        width: number,
        height: number
    ): number;

    // /** src_width/height provided by capture */
    // /** dst_width/height for clipping determine final size. */
    // export function MJPGToARGB(
    //     sample: Uint8Array,
    //     sample_size: number,
    //     dst_argb: Uint8Array,
    //     dst_stride_argb: number,
    //     src_width: number,
    //     src_height: number,
    //     dst_width: number,
    //     dst_height: number
    // ): number;

    /** Convert Android420 to ARGB. */
    export function Android420ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        src_pixel_stride_uv: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    /** Convert Android420 to ABGR. */
    export function Android420ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        src_pixel_stride_uv: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert NV12 to RGB565. */
    export function NV12ToRGB565(
        src_y: Uint8Array,
        src_stride_y: number,
        src_uv: Uint8Array,
        src_stride_uv: number,
        dst_rgb565: Uint8Array,
        dst_stride_rgb565: number,
        width: number,
        height: number
    ): number;

    /** Convert I422 to BGRA. */
    export function I422ToBGRA(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_bgra: Uint8Array,
        dst_stride_bgra: number,
        width: number,
        height: number
    ): number;

    /** Convert I422 to ABGR. */
    export function I422ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    /** Convert I422 to RGBA. */
    export function I422ToRGBA(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgba: Uint8Array,
        dst_stride_rgba: number,
        width: number,
        height: number
    ): number;

    export function I420ToARGB(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        width: number,
        height: number
    ): number;

    export function I420ToBGRA(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_bgra: Uint8Array,
        dst_stride_bgra: number,
        width: number,
        height: number
    ): number;

    export function I420ToABGR(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_abgr: Uint8Array,
        dst_stride_abgr: number,
        width: number,
        height: number
    ): number;

    export function I420ToRGBA(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgba: Uint8Array,
        dst_stride_rgba: number,
        width: number,
        height: number
    ): number;

    export function I420ToRGB24(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgb24: Uint8Array,
        dst_stride_rgb24: number,
        width: number,
        height: number
    ): number;

    export function I420ToRAW(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_raw: Uint8Array,
        dst_stride_raw: number,
        width: number,
        height: number
    ): number;

    export function H420ToRGB24(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgb24: Uint8Array,
        dst_stride_rgb24: number,
        width: number,
        height: number
    ): number;

    export function H420ToRAW(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_raw: Uint8Array,
        dst_stride_raw: number,
        width: number,
        height: number
    ): number;

    export function J420ToRGB24(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgb24: Uint8Array,
        dst_stride_rgb24: number,
        width: number,
        height: number
    ): number;

    export function J420ToRAW(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_raw: Uint8Array,
        dst_stride_raw: number,
        width: number,
        height: number
    ): number;

    export function I420ToRGB565(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgb565: Uint8Array,
        dst_stride_rgb565: number,
        width: number,
        height: number
    ): number;

    export function J420ToRGB565(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgb565: Uint8Array,
        dst_stride_rgb565: number,
        width: number,
        height: number
    ): number;

    export function H420ToRGB565(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgb565: Uint8Array,
        dst_stride_rgb565: number,
        width: number,
        height: number
    ): number;

    export function I422ToRGB565(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgb565: Uint8Array,
        dst_stride_rgb565: number,
        width: number,
        height: number
    ): number;

    /** Convert I420 To RGB565 with 4x4 dither matrix (16 bytes). */
    /** Values in dither matrix from 0 to 7 recommended. */
    /** The order of the dither matrix is first byte is upper left. */

    export function I420ToRGB565Dither(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgb565: Uint8Array,
        dst_stride_rgb565: number,
        dither4x4: Uint8Array,
        width: number,
        height: number
    ): number;

    export function I420ToARGB1555(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb1555: Uint8Array,
        dst_stride_argb1555: number,
        width: number,
        height: number
    ): number;

    export function I420ToARGB4444(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb4444: Uint8Array,
        dst_stride_argb4444: number,
        width: number,
        height: number
    ): number;

    /** Convert I420 to AR30. */
    export function I420ToAR30(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_ar30: Uint8Array,
        dst_stride_ar30: number,
        width: number,
        height: number
    ): number;

    /** Convert H420 to AR30. */
    export function H420ToAR30(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_ar30: Uint8Array,
        dst_stride_ar30: number,
        width: number,
        height: number
    ): number;

    /** Convert I420 to ARGB with matrix. */
    export function I420ToARGBMatrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert I422 to ARGB with matrix. */
    export function I422ToARGBMatrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert I444 to ARGB with matrix. */
    export function I444ToARGBMatrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** multiply 10 bit yuv into high bits to allow any number of bits. */
    export function I010ToAR30Matrix(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ar30: Uint8Array,
        dst_stride_ar30: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** multiply 10 bit yuv into high bits to allow any number of bits. */
    export function I210ToAR30Matrix(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_ar30: Uint8Array,
        dst_stride_ar30: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert 10 bit YUV to ARGB with matrix. */
    export function I010ToARGBMatrix(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert 10 bit 422 YUV to ARGB with matrix. */
    export function I210ToARGBMatrix(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert I420 with Alpha to preattenuated ARGB with matrix. */
    export function I420AlphaToARGBMatrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        src_a: Uint8Array,
        src_stride_a: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number,
        attenuate: number
    ): number;

    /** Convert NV12 to ARGB with matrix. */
    export function NV12ToARGBMatrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_uv: Uint8Array,
        src_stride_uv: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert NV21 to ARGB with matrix. */
    export function NV21ToARGBMatrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_vu: Uint8Array,
        src_stride_vu: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert NV12 to RGB565 with matrix. */
    export function NV12ToRGB565Matrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_uv: Uint8Array,
        src_stride_uv: number,
        dst_rgb565: Uint8Array,
        dst_stride_rgb565: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert NV12 to RGB24 with matrix. */
    export function NV12ToRGB24Matrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_uv: Uint8Array,
        src_stride_uv: number,
        dst_rgb24: Uint8Array,
        dst_stride_rgb24: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert NV21 to RGB24 with matrix. */
    export function NV21ToRGB24Matrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_vu: Uint8Array,
        src_stride_vu: number,
        dst_rgb24: Uint8Array,
        dst_stride_rgb24: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert Android420 to ARGB with matrix. */
    export function Android420ToARGBMatrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        src_pixel_stride_uv: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert I422 to RGBA with matrix. */
    export function I422ToRGBAMatrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgba: Uint8Array,
        dst_stride_rgba: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert I422 to RGBA with matrix. */
    export function I420ToRGBAMatrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgba: Uint8Array,
        dst_stride_rgba: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert I420 to RGB24 with matrix. */
    export function I420ToRGB24Matrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgb24: Uint8Array,
        dst_stride_rgb24: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert I420 to RGB565 with specified color matrix. */
    export function I420ToRGB565Matrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_rgb565: Uint8Array,
        dst_stride_rgb565: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert I420 to AR30 with matrix. */
    export function I420ToAR30Matrix(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_ar30: Uint8Array,
        dst_stride_ar30: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert I400 (grey) to ARGB.  Reverse of ARGBToI400. */
    export function I400ToARGBMatrix(
        src_y: Uint8Array,
        src_stride_y: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        yuvconstants: YuvConstants,
        width: number,
        height: number
    ): number;

    /** Convert camera sample to ARGB with cropping, rotation and vertical flip. */
    /** "sample_size" is needed to parse MJPG. */
    /** "dst_stride_argb" number of bytes in a row of the dst_argb plane. */
    /**   Normally this would be the same as dst_width, with recommended alignment */
    /**   to 16 bytes for better efficiency. */
    /**   If rotation of 90 or 270 is used, stride is affected. The caller should */
    /**   allocate the I420 buffer according to rotation. */
    /** "dst_stride_u" number of bytes in a row of the dst_u plane. */
    /**   Normally this would be the same as (dst_width + 1) / 2, with */
    /**   recommended alignment to 16 bytes for better efficiency. */
    /**   If rotation of 90 or 270 is used, stride is affected. */
    /** "crop_x" and "crop_y" are starting position for cropping. */
    /**   To center, crop_x = (src_width - dst_width) / 2 */
    /**              crop_y = (src_height - dst_height) / 2 */
    /** "src_width" / "src_height" is size of src_frame in pixels. */
    /**   "src_height" can be negative indicating a vertically flipped image source. */
    /** "crop_width" / "crop_height" is the size to crop the src to. */
    /**    Must be less than or equal to src_width/src_height */
    /**    Cropping parameters are pre-rotation. */
    /** "rotation" can be 0, 90, 180 or 270. */
    /** "fourcc" is a fourcc. ie 'I420', 'YUY2' */
    /** Returns 0 for successful; -1 for invalid parameter. Non-zero for failure. */
    export function ConvertToARGB(
        sample: Uint8Array,
        sample_size: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        crop_x: number,
        crop_y: number,
        src_width: number,
        src_height: number,
        crop_width: number,
        crop_height: number,
        rotation: RotationMode,
        fourcc: number
    ): number;



    //#endregion
    //#region convert.h

    /** Convert I444 to I420. */
    export function I444ToI420(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** Convert I444 to NV12. */
    export function I444ToNV12(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_uv: Uint8Array,
        dst_stride_uv: number,
        width: number,
        height: number
    ): number;

    /** Convert I444 to NV21. */
    export function I444ToNV21(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_vu: Uint8Array,
        dst_stride_vu: number,
        width: number,
        height: number
    ): number;

    /** Convert I422 to I420. */
    export function I422ToI420(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** Convert I422 to NV21. */
    export function I422ToNV21(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_vu: Uint8Array,
        dst_stride_vu: number,
        width: number,
        height: number
    ): number;

    /** Copy I420 to I420. */
    //#define I420ToI420 I420Copy
    export function I420Copy(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** Copy I010 to I010 */
    //#define I010ToI010 I010Copy
    //#define H010ToH010 I010Copy
    export function I010Copy(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_y: Uint16Array,
        dst_stride_y: number,
        dst_u: Uint16Array,
        dst_stride_u: number,
        dst_v: Uint16Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** Convert 10 bit YUV to 8 bit */
    //#define H010ToH420 I010ToI420
    export function I010ToI420(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** Convert I400 (grey) to I420. */
    export function I400ToI420(
        src_y: Uint8Array,
        src_stride_y: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** Convert I400 (grey) to NV21. */
    export function I400ToNV21(
        src_y: Uint8Array,
        src_stride_y: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_vu: Uint8Array,
        dst_stride_vu: number,
        width: number,
        height: number
    ): number;

    //#define J400ToJ420 I400ToI420

    /** Convert NV12 to I420. */
    export function NV12ToI420(
        src_y: Uint8Array,
        src_stride_y: number,
        src_uv: Uint8Array,
        src_stride_uv: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** Convert NV21 to I420. */
    export function NV21ToI420(
        src_y: Uint8Array,
        src_stride_y: number,
        src_vu: Uint8Array,
        src_stride_vu: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** Convert YUY2 to I420. */
    export function YUY2ToI420(
        src_yuy2: Uint8Array,
        src_stride_yuy2: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** Convert UYVY to I420. */
    export function UYVYToI420(
        src_uyvy: Uint8Array,
        src_stride_uyvy: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** Convert AYUV to NV12. */
    export function AYUVToNV12(
        src_ayuv: Uint8Array,
        src_stride_ayuv: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_uv: Uint8Array,
        dst_stride_uv: number,
        width: number,
        height: number
    ): number;

    /** Convert AYUV to NV21. */
    export function AYUVToNV21(
        src_ayuv: Uint8Array,
        src_stride_ayuv: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_vu: Uint8Array,
        dst_stride_vu: number,
        width: number,
        height: number
    ): number;

    /** Convert Android420 to I420. */
    export function Android420ToI420(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        src_pixel_stride_uv: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** ARGB little endian (bgra in memory) to I420. */
    export function ARGBToI420(
        src_argb: Uint8Array,
        src_stride_argb: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** BGRA little endian (argb in memory) to I420. */
    export function BGRAToI420(
        src_bgra: Uint8Array,
        src_stride_bgra: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** ABGR little endian (rgba in memory) to I420. */
    export function ABGRToI420(
        src_abgr: Uint8Array,
        src_stride_abgr: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** RGBA little endian (abgr in memory) to I420. */
    export function RGBAToI420(
        src_rgba: Uint8Array,
        src_stride_rgba: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** RGB little endian (bgr in memory) to I420. */
    export function RGB24ToI420(
        src_rgb24: Uint8Array,
        src_stride_rgb24: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** RGB little endian (bgr in memory) to J420. */
    export function RGB24ToJ420(
        src_rgb24: Uint8Array,
        src_stride_rgb24: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** RGB big endian (rgb in memory) to I420. */
    export function RAWToI420(
        src_raw: Uint8Array,
        src_stride_raw: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** RGB16 (RGBP fourcc) little endian to I420. */
    export function RGB565ToI420(
        src_rgb565: Uint8Array,
        src_stride_rgb565: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** RGB15 (RGBO fourcc) little endian to I420. */
    export function ARGB1555ToI420(
        src_argb1555: Uint8Array,
        src_stride_argb1555: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** RGB12 (R444 fourcc) little endian to I420. */
    export function ARGB4444ToI420(
        src_argb4444: Uint8Array,
        src_stride_argb4444: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number
    ): number;

    /** RGB little endian (bgr in memory) to J400. */
    export function RGB24ToJ400(
        src_rgb24: Uint8Array,
        src_stride_rgb24: number,
        dst_yj: Uint8Array,
        dst_stride_yj: number,
        width: number,
        height: number
    ): number;

    /** RGB big endian (rgb in memory) to J400. */
    export function RAWToJ400(
        src_raw: Uint8Array,
        src_stride_raw: number,
        dst_yj: Uint8Array,
        dst_stride_yj: number,
        width: number,
        height: number
    ): number;

    // /** 
    //  * src_width/height provided by capture.
    //  * dst_width/height for clipping determine final size. 
    //  */
    // export function MJPGToI420(
    //     sample: Uint8Array,
    //     sample_size: number,
    //     dst_y: Uint8Array,
    //     dst_stride_y: number,
    //     dst_u: Uint8Array,
    //     dst_stride_u: number,
    //     dst_v: Uint8Array,
    //     dst_stride_v: number,
    //     src_width: number,
    //     src_height: number,
    //     dst_width: number,
    //     dst_height: number
    // ): number;

    // /** JPEG to NV21 */
    // export function MJPGToNV21(
    //     sample: Uint8Array,
    //     sample_size: number,
    //     dst_y: Uint8Array,
    //     dst_stride_y: number,
    //     dst_vu: Uint8Array,
    //     dst_stride_vu: number,
    //     src_width: number,
    //     src_height: number,
    //     dst_width: number,
    //     dst_height: number
    // ): number;

    // /** Query size of MJPG in pixels. */
    // export function MJPGSize(
    //     sample: Uint8Array,
    //     sample_size: number,
    //     width: Int32Array,
    //     height: Int32Array
    // ): number;

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
     */
    export function ConvertToI420(
        sample: Uint8Array,
        sample_size: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        crop_x: number,
        crop_y: number,
        src_width: number,
        src_height: number,
        crop_width: number,
        crop_height: number,
        rotation: RotationMode,
        fourcc: number
    ): number;

    //#endregion
    //#region row.h

    export interface YuvConstants {
        kUVToB: Int8Array;
        kUVToG: Int8Array;
        kUVToR: Int8Array;
        kUVBiasB: Int16Array;
        kUVBiasG: Int16Array;
        kUVBiasR: Int16Array;
        kYToRgb: Int16Array;
        kYBiasToRgb: Int16Array;
    }

    //#endregion
    //#region cpu_id.h
    
    export enum CpuFlags {
        // Internal flag to indicate cpuid requires initialization.
        kCpuInitialized = 0x1,

        // These flags are only valid on ARM processors.
        kCpuHasARM = 0x2,
        kCpuHasNEON = 0x4,
        // 0x8 reserved for future ARM flag.

        // These flags are only valid on x86 processors.
        kCpuHasX86 = 0x10,
        kCpuHasSSE2 = 0x20,
        kCpuHasSSSE3 = 0x40,
        kCpuHasSSE41 = 0x80,
        kCpuHasSSE42 = 0x100,  // unused at this time,
        kCpuHasAVX = 0x200,
        kCpuHasAVX2 = 0x400,
        kCpuHasERMS = 0x800,
        kCpuHasFMA3 = 0x1000,
        kCpuHasF16C = 0x2000,
        kCpuHasGFNI = 0x4000,
        kCpuHasAVX512BW = 0x8000,
        kCpuHasAVX512VL = 0x10000,
        kCpuHasAVX512VBMI = 0x20000,
        kCpuHasAVX512VBMI2 = 0x40000,
        kCpuHasAVX512VBITALG = 0x80000,
        kCpuHasAVX512VPOPCNTDQ = 0x100000,

        // These flags are only valid on MIPS processors.
        kCpuHasMIPS = 0x200000,
        kCpuHasMSA = 0x400000,
        kCpuHasMMI = 0x800000,
    }
    
    /**
     * Optional init function. TestCpuFlag does an auto-init.
     * Returns cpu_info flags.
     */
    export function InitCpuFlags(): number;

    /**
     * Detect CPU has SSE2 etc.
     * Test_flag parameter should be one of kCpuHas constants above.
     * Returns non-zero if instruction set is detected
     */
    export function TestCpuFlag(test_flag: number): number;

    /**
     * Internal function for parsing /proc/cpuinfo.
     */
    export function ArmCpuCaps(cpuinfo_name: string): number;
    export function MipsCpuCaps(cpuinfo_name: string): number;

    /**
     * For testing, allow CPU flags to be disabled.
     * ie MaskCpuFlags(~kCpuHasSSSE3) to disable SSSE3.
     * MaskCpuFlags(-1) to enable all cpu specific optimizations.
     * MaskCpuFlags(1) to disable all cpu specific optimizations.
     * MaskCpuFlags(0) to reset state so next call will auto init.
     * Returns cpu_info flags.
     */
    export function MaskCpuFlags(enable_flags: number): number;

    /**
     * Sets the CPU flags to |cpu_flags|, bypassing the detection code. |cpu_flags|
     * should be a valid combination of the kCpuHas constants above and include
     * kCpuInitialized. Use this method when running in a sandboxed process where
     * the detection code might fail (as it might access /proc/cpuinfo). In such
     * cases the cpu_info can be obtained from a non sandboxed process by calling
     * InitCpuFlags() and passed to the sandboxed process (via command line
     * parameters, IPC...) which can then call this method to initialize the CPU
     * flags.
     * Notes:
     * - when specifying 0 for |cpu_flags|, the auto initialization is enabled
     *   again.
     * - enabling CPU features that are not supported by the CPU will result in
     *   undefined behavior.
     * TODO(fbarchard): consider writing a helper function that translates from
     * other library CPU info to libyuv CPU info and add a .md doc that explains
     * CPU detection.
     */
    export function SetCpuFlags(cpu_flags: number);

    /**
     * Low level cpuid for X86. Returns zeros on other CPUs.
     * eax is the info type that you want.
     * ecx is typically the cpu number, and should normally be zero.
     */
    export function CpuId(info_eax: number, info_ecx: number, cpu_info: Int32Array);
    //#endregion
    //#region rotate_argb.h

    // Rotate ARGB frame
    export function ARGBRotate(
        src_argb: Uint8Array,
        src_stride_argb: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        src_width: number,
        src_height: number,
        mode: RotationMode,
    ): number;
    //#endregion
    //#region rotate.h

    export enum RotationMode {
        kRotate0 = 0,
        kRotate90 = 90,
        kRotate180 = 180,
        kRotate270 = 270,

        kRotateNone = 0,
        kRotateClockwise = 90,
        kRotateCounterClockwise = 270
    }



    // Rotate I420 frame.
    export function I420Rotate(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number,
        mode: RotationMode
    ): number;

    // Rotate I444 frame.
    export function I444Rotate(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number,
        mode: RotationMode
    ): number;

    // Rotate NV12 input and store in I420.
    export function NV12ToI420Rotate(
        src_y: Uint8Array,
        src_stride_y: number,
        src_uv: Uint8Array,
        src_stride_uv: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        width: number,
        height: number,
        mode: RotationMode
    ): number;

    // Rotate a plane by 0, 90, 180, or 270.
    export function RotatePlane(
        src: Uint8Array,
        src_stride: number,
        dst: Uint8Array,
        dst_stride: number,
        width: number,
        height: number,
        mode: RotationMode
    ): number;

    // Rotate planes by 90, 180, 270. Deprecated.
    export function RotatePlane90(
        src: Uint8Array,
        src_stride: number,
        dst: Uint8Array,
        dst_stride: number,
        width: number,
        height: number);

    export function RotatePlane180(
        src: Uint8Array,
        src_stride: number,
        dst: Uint8Array,
        dst_stride: number,
        width: number,
        height: number);

    export function RotatePlane270(
        src: Uint8Array,
        src_stride: number,
        dst: Uint8Array,
        dst_stride: number,
        width: number,
        height: number);

    // Rotations for when U and V are interleaved.
    // These functions take one input pointer and
    // split the data into two buffers while
    // rotating them. Deprecated.
    export function RotateUV90(
        src: Uint8Array,
        src_stride: number,
        dst_a: Uint8Array,
        dst_stride_a: number,
        dst_b: Uint8Array,
        dst_stride_b: number,
        width: number,
        height: number);

    export function RotateUV180(
        src: Uint8Array,
        src_stride: number,
        dst_a: Uint8Array,
        dst_stride_a: number,
        dst_b: Uint8Array,
        dst_stride_b: number,
        width: number,
        height: number);

    export function RotateUV270(
        src: Uint8Array,
        src_stride: number,
        dst_a: Uint8Array,
        dst_stride_a: number,
        dst_b: Uint8Array,
        dst_stride_b: number,
        width: number,
        height: number);

    // The 90 and 270 functions are based on transposes.
    // Doing a transpose with reversing the read/write
    // order will result in a rotation by +- 90 degrees.
    // Deprecated.
    export function TransposePlane(
        src: Uint8Array,
        src_stride: number,
        dst: Uint8Array,
        dst_stride: number,
        width: number,
        height: number);

    export function TransposeUV(
        src: Uint8Array,
        src_stride: number,
        dst_a: Uint8Array,
        dst_stride_a: number,
        dst_b: Uint8Array,
        dst_stride_b: number,
        width: number,
        height: number);


    //#endregion
    //#region scale_argb.h


    export function ARGBScale(
        src_argb: Uint8Array,
        src_stride_argb: number,
        src_width: number,
        src_height: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        dst_width: number,
        dst_height: number,
        filtering: FilterMode
    ): number;

    /** Clipped scale takes destination rectangle coordinates for clip values. */
    export function ARGBScaleClip(
        src_argb: Uint8Array,
        src_stride_argb: number,
        src_width: number,
        src_height: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        dst_width: number,
        dst_height: number,
        clip_x: number,
        clip_y: number,
        clip_width: number,
        clip_height: number,
        filtering: FilterMode
    ): number;

    /** Scale with YUV conversion to ARGB and clipping. */
    export function YUVToARGBScaleClip(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        src_fourcc: number,
        src_width: number,
        src_height: number,
        dst_argb: Uint8Array,
        dst_stride_argb: number,
        dst_fourcc: number,
        dst_width: number,
        dst_height: number,
        clip_x: number,
        clip_y: number,
        clip_width: number,
        clip_height: number,
        filtering: FilterMode
    ): number;


    //#endregion
    //#region scale.h
    export enum FilterMode {
        /** Posample : number; Fastest. */
        kFilterNone = 0,

        /** Filter horizontally only. */
        kFilterLinear = 1,

        /** Faster than box, but lower quality scaling down. */
        kFilterBilinear = 2,

        /** Highest quality. */
        kFilterBox = 3
    }

    // Scale a YUV plane.
    export function ScalePlane(
        src: Uint8Array,
        src_stride: number,
        src_width: number,
        src_height: number,
        dst: Uint8Array,
        dst_stride: number,
        dst_width: number,
        dst_height: number,
        filtering: FilterMode
    );

    export function ScalePlane_16(
        src: Uint16Array,
        src_stride: number,
        src_width: number,
        src_height: number,
        dst: Uint16Array,
        dst_stride: number,
        dst_width: number,
        dst_height: number,
        filtering: FilterMode
    );

    // Scales a YUV 4:2:0 image from the src width and height to the
    // dst width and height.
    // If filtering is kFilterNone, a simple nearest-neighbor algorithm is
    // used. This produces basic (blocky) quality at the fastest speed.
    // If filtering is kFilterBilinear, interpolation is used to produce a better
    // quality image, at the expense of speed.
    // If filtering is kFilterBox, averaging is used to produce ever better
    // quality image, at further expense of speed.
    // Returns 0 if successful.

    export function I420Scale(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        src_width: number,
        src_height: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        dst_width: number,
        dst_height: number,
        filtering: FilterMode
    ): number;

    export function I420Scale_16(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        src_width: number,
        src_height: number,
        dst_y: Uint16Array,
        dst_stride_y: number,
        dst_u: Uint16Array,
        dst_stride_u: number,
        dst_v: Uint16Array,
        dst_stride_v: number,
        dst_width: number,
        dst_height: number,
        filtering: FilterMode
    ): number;

    // Scales a YUV 4:4:4 image from the src width and height to the
    // dst width and height.
    // If filtering is kFilterNone, a simple nearest-neighbor algorithm is
    // used. This produces basic (blocky) quality at the fastest speed.
    // If filtering is kFilterBilinear, interpolation is used to produce a better
    // quality image, at the expense of speed.
    // If filtering is kFilterBox, averaging is used to produce ever better
    // quality image, at further expense of speed.
    // Returns 0 if successful.

    export function I444Scale(
        src_y: Uint8Array,
        src_stride_y: number,
        src_u: Uint8Array,
        src_stride_u: number,
        src_v: Uint8Array,
        src_stride_v: number,
        src_width: number,
        src_height: number,
        dst_y: Uint8Array,
        dst_stride_y: number,
        dst_u: Uint8Array,
        dst_stride_u: number,
        dst_v: Uint8Array,
        dst_stride_v: number,
        dst_width: number,
        dst_height: number,
        filtering: FilterMode
    ): number;

    export function I444Scale_16(
        src_y: Uint16Array,
        src_stride_y: number,
        src_u: Uint16Array,
        src_stride_u: number,
        src_v: Uint16Array,
        src_stride_v: number,
        src_width: number,
        src_height: number,
        dst_y: Uint16Array,
        dst_stride_y: number,
        dst_u: Uint16Array,
        dst_stride_u: number,
        dst_v: Uint16Array,
        dst_stride_v: number,
        dst_width: number,
        dst_height: number,
        filtering: FilterMode
    ): number;

    // Legacy API.  Deprecated.
    export function Scale(
        src_y: Uint8Array,
        src_u: Uint8Array,
        src_v: Uint8Array,
        src_stride_y: number,
        src_stride_u: number,
        src_stride_v: number,
        src_width: number,
        src_height: number,
        dst_y: Uint8Array,
        dst_u: Uint8Array,
        dst_v: Uint8Array,
        dst_stride_y: number,
        dst_stride_u: number,
        dst_stride_v: number,
        dst_width: number,
        dst_height: number,
        interpolate: boolean
    ): number;


    //#endregion
    //#region version.h 
    export function Version(): number;
    //#endregion
}