#!/bin/bash

echo "Kernel: `uname -r`"

if [ -f /etc/lsb-release ]; then
    echo "Distribution: `cat /etc/lsb-release`"
fi

set -ev
mkdir -p external
cd external
if ! [ -d libyuv ]; then
    git clone https://chromium.googlesource.com/libyuv/libyuv
fi
cd libyuv
mkdir -p out
cd out

if [ `uname` = 'Darwin' ]; then
    sed -i '' 's/if (JPEG_FOUND)/if (0 AND JPEG_FOUND)/' ../CMakeLists.txt
fi

cmake -DCMAKE_BUILD_TYPE="Release" -DCMAKE_POSITION_INDEPENDENT_CODE=ON ..
cmake --build . --config Release

cp libyuv.a ../..

if ! [ `uname` = 'Darwin' ]; then
    cp libyuv.so ../..
fi
