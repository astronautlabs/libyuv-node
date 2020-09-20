#include "i420_util.h"

size_t i420_y_size(int32_t width, int32_t height) {
    return width * height;
}

size_t i420_u_size(int32_t width, int32_t height) {
    return i420_y_size(width, height) / 4;
}

size_t i420_v_size(int32_t width, int32_t height) {
    return i420_y_size(width, height) / 4;
}

uint8_t *i420_y_data(int32_t width, int32_t height, uint8_t *data) {
    return data;
}

size_t i420_y_stride(int32_t width) {
    return width;
}

size_t i420_u_stride(int32_t width) {
    return width / 2;
}

size_t i420_v_stride(int32_t width) {
    return width / 2;
}

uint8_t *i420_u_data(int32_t width, int32_t height, uint8_t *data) {
    return i420_y_data(width, height, data) + i420_y_size(width, height);
}

uint8_t *i420_v_data(int32_t width, int32_t height, uint8_t *data) {
    return i420_u_data(width, height, data) + i420_u_size(width, height);
}
