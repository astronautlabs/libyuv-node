# libyuv-node
## Node.js bindings for Chromium's [libyuv](https://chromium.googlesource.com/libyuv/libyuv/) library. 

libyuv is an open source project that includes YUV scaling and conversion functionality.

- Scale YUV to prepare content for compression, with point, bilinear or box filter.
- Convert to YUV from webcam formats for compression.
- Convert to RGB formats for rendering/effects.
- Rotate by 90/180/270 degrees to adjust for mobile devices in portrait mode.
- Optimized for SSSE3/AVX2 on x86/x64.
- Optimized for Neon on Arm.
- Optimized for MSA on Mips.

For more information about `libyuv`, visit Google's site at https://chromium.googlesource.com/libyuv/libyuv/

## Why?

If you are processing video frames in Node.js, you may need to convert the color space
of such frames between a compact YUV chroma-subsampled format (like YUV 4:2:0) and RGB0 
and vice versa. You may also need to scale the video frame from one size to another
performantly with various sampling methods. `libyuv` provides these capabilities,
and using this binding you can very easily perform these conversions.

It works very well with libraries like [node-webrtc](https://github.com/node-webrtc/node-webrtc).

## Building

Currently there are no prebuilt binaries available. On a modern system, building 
`libyuv` from scratch takes approximately 30 seconds and requires downloading 
about 17MB of source code. 

### Windows

- Make sure to install 
  [Windows 10 SDK](https://developer.microsoft.com/en-US/windows/downloads/windows-10-sdk/) 
  or later or the build may fail. Version `10.0.19041.0` or later is recommended.

## Development
### Troubleshooting
#### Windows: Permission Denied ("build" is open in a another process)

The Visual Studio Code C# extension opens OmniSharp with the "build" folder open as the current working directory.
This is not a C# project, so it is safe to find the "C#" extension in your editor's Extensions list and "Disable (Workspace)".
This will only affect this workspace, not any other projects you may have on your machine.

## Contributing

PRs are welcome!