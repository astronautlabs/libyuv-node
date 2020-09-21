#!/bin/bash
set -ev
mkdir -p external
cd external
if ! [ -d libyuv ]; then
    git clone https://chromium.googlesource.com/libyuv/libyuv
fi
cd libyuv
mkdir -p out
cd out
cmake -DCMAKE_BUILD_TYPE="Release" -DCMAKE_POSITION_INDEPENDENT_CODE=ON ..
cmake --build . --config Release
cp libyuv.a ../..
cp libyuv.so ../..
