set(VIC_SOURCE "${CMAKE_SOURCE_DIR}")
string(LENGTH "${VIC_SOURCE}" VIC_SOURCE_OFFSET)
math(EXPR VIC_SOURCE_OFFSET "${VIC_SOURCE_OFFSET} + 1")

add_library(_vic_utils utils.c)
target_compile_definitions(_vic_utils PRIVATE
    VIC_SOURCE="${VIC_SOURCE}"
    VIC_SOURCE_OFFSET=${VIC_SOURCE_OFFSET}
)
