#include <napi.h>

size_t i420_y_size(int32_t width, int32_t height);
size_t i420_u_size(int32_t width, int32_t height);
size_t i420_v_size(int32_t width, int32_t height);
uint8_t *i420_y_data(int32_t width, int32_t height, uint8_t *data);
size_t i420_y_stride(int32_t width);
size_t i420_u_stride(int32_t width);
size_t i420_v_stride(int32_t width);
uint8_t *i420_u_data(int32_t width, int32_t height, uint8_t *data);
uint8_t *i420_v_data(int32_t width, int32_t height, uint8_t *data);