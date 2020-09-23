
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

export enum RotationMode {
    kRotate0 = 0,
    kRotate90 = 90,
    kRotate180 = 180,
    kRotate270 = 270,

    kRotateNone = 0,
    kRotateClockwise = 90,
    kRotateCounterClockwise = 270
}

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
