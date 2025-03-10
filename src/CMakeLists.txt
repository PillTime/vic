add_subdirectory(glfw)

add_executable(vic main.c)
target_link_libraries(vic _vic_glfw)
