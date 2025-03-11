add_subdirectory(utils)
add_subdirectory(glfw)
add_subdirectory(vulkan)

add_executable(vic main.c)
target_link_libraries(vic _vic_utils _vic_glfw _vic_vulkan)
