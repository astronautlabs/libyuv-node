#!/bin/bash

echo "Kernel: `uname -r`"

if [ -f /etc/lsb-release ]; then
    echo "Distribution: `cat /etc/lsb-release`"
fi

set -ev
mkdir -p external
cd external
if ! [ -d libyuv ]; then
    git clone https://chromium.googlesource.com/libyuv/libyuv --branch stable
fi
cd libyuv
mkdir -p out
cd out

# MJPEG functions are not currently supported even when libjpeg is available
# on the host system.
# Issues:
# - macOS: Fails to link libyuv shared lib target with undefined symbol errors
# - linux: At runtime: undefined symbol: jpeg_resync_to_restart
if [ `uname` = 'Darwin' ]; then
    # macOS is a terrible operating system
    sed -i '' 's/if (JPEG_FOUND)/if (0 AND JPEG_FOUND)/' ../CMakeLists.txt
else
    sed -i 's/if (JPEG_FOUND)/if (0 AND JPEG_FOUND)/' ../CMakeLists.txt
fi

cmake -DCMAKE_BUILD_TYPE="Release" -DCMAKE_POSITION_INDEPENDENT_CODE=ON ..
cmake --build . --config Release

cp libyuv.a ../..

if ! [ `uname` = 'Darwin' ]; then
    cp libyuv.so ../..
fi
