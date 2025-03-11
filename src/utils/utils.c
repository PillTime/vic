#include "utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vicDie(char const *const file, size_t const line, char const *const message)
{
    fprintf(stderr, "[%s#%zu] FATAL: %s\n", strstr(file, VIC_SOURCE) + VIC_SOURCE_OFFSET, line,
            message);
    fflush(stderr);
    exit(EXIT_FAILURE);
}
