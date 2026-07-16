# 0.2.2
- Fixes a problem building with Node.js 26.3.0 and later on Windows due to Node.js adding incompatible build flags by 
  default (those build flags are now excluded within our bindings.gyp)

# 0.2.1
- Additional API changes needed for libyuv M149
- Fixes for Windows builds
- Remove references to now unsupported MIPS acceleration functions

# 0.2.0
Updates libyuv to the version used in Chrome M149. 
- Mips CPU support has been dropped.
- RiscV CPU support has been added.
- The `RotateUV`/`TransposeUV` functions have been renamed to have a Split prefix (`RotateUV90` -> `SplitRotateUV90`).
