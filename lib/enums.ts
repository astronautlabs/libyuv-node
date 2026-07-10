
export enum CpuFlags {
    // Internal flag to indicate cpuid requires initialization.
    kCpuInitialized = 0x1,

    // These flags are only valid on Arm processors.
    kCpuHasARM = 0x2,
    kCpuHasNEON = 0x100,
    kCpuHasNeonDotProd = 0x200,
    kCpuHasNeonI8MM = 0x400,
    kCpuHasSVE = 0x800,
    kCpuHasSVE2 = 0x1000,
    kCpuHasSME = 0x2000,
    kCpuHasSME2 = 0x4000,
    kCpuHasSVEF32MM = 0x8000,

    // These flags are only valid on RISCV processors.
    kCpuHasRISCV = 0x4,
    kCpuHasRVV = 0x100,
    kCpuHasRVVZVFH = 0x200,

    // These flags are only valid on x86 processors.
    kCpuHasX86 = 0x8,
    kCpuHasSSE2 = 0x100,
    kCpuHasSSSE3 = 0x200,
    kCpuHasSSE41 = 0x400,
    kCpuHasSSE42 = 0x800,
    kCpuHasAVX = 0x1000,
    kCpuHasAVX2 = 0x2000,
    kCpuHasERMS = 0x4000,
    kCpuHasFSMR = 0x8000,
    kCpuHasFMA3 = 0x10000,
    kCpuHasF16C = 0x20000,
    kCpuHasAVX512BW = 0x40000,
    kCpuHasAVX512VL = 0x80000,
    kCpuHasAVX512VNNI = 0x100000,
    kCpuHasAVX512VBMI = 0x200000,
    kCpuHasAVX512VBMI2 = 0x400000,
    kCpuHasAVX512VBITALG = 0x800000,
    kCpuHasAVX10 = 0x1000000,
    kCpuHasAVX10_2 = 0x2000000,
    kCpuHasAVXVNNI = 0x4000000,
    kCpuHasAVXVNNIINT8 = 0x8000000,
    kCpuHasAMXINT8 = 0x10000000,
    
    // These flags are only valid on LOONGARCH processors.
    kCpuHasLOONGARCH = 0x20,
    kCpuHasLSX = 0x100,
    kCpuHasLASX = 0x200,
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
