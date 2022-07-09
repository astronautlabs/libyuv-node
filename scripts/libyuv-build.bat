rem Handles issues with CircleCI declaring both PATH and Path
rem But must be handled carefully, because set PATH= will clear 
rem PATH entirely when there is not two set. This should result 
rem in a working situation in most cases 

set ORIGINAL_PATH=%Path%
set PATH=
set Path=%ORIGINAL_PATH%C:\\Program Files\\CMake\\bin;

mkdir external
cd external
git clone https://chromium.googlesource.com/libyuv/libyuv --branch stable

rem Disable JPEG as it is not yet supported
node ../scripts/disable-jpeg.js 

cd libyuv
mkdir out
cd out 
cmake -A x64 -DCMAKE_BUILD_TYPE="Release" ..
cmake --build . --config Release
copy Release\yuv.lib ..\..
copy Release\libyuv.dll ..\..
