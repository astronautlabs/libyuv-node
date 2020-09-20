#include "rgba_util.h"

size_t rgba_size(int32_t width, int32_t height) {
    return rgba_stride(width) * height;
}

size_t rgba_stride(int32_t width) {
    return width * 4;
}
