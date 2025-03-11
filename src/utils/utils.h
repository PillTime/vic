#ifndef VIC_SRC_UTILS_UTILS_H
#define VIC_SRC_UTILS_UTILS_H

#include <stddef.h>

#define VIC_ALLOCATOR nullptr

#define VIC_DIE(msg) vicDie(__FILE__, __LINE__, msg)

[[noreturn]] void vicDie(char const *file, size_t line, char const *message);

#endif // VIC_SRC_UTILS_UTILS_H
