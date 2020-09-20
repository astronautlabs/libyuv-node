mkdir external
cd external
git clone https://chromium.googlesource.com/libyuv/libyuv

cd libyuv
mkdir out
cd out 
cmake -G "Visual Studio 15 2017" -A x64 -DCMAKE_BUILD_TYPE="Release" ..
cmake --build . --config Release

echo "Copying output..."
copy Release\yuv.lib ..\..
copy Release\libyuv.dll ..\..
echo "Build successful"
