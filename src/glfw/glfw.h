#ifndef VIC_SRC_GLFW_GLFW_H
#define VIC_SRC_GLFW_GLFW_H

#include <stddef.h>

#include <GLFW/glfw3.h>

void vicGlfwInitialize();
void vicGlfwTerminate();

GLFWwindow *vicGlfwWindowCreate(size_t width, size_t height, char const *title,
                                GLFWframebuffersizefun callback);
void vicGlfwWindowDestroy(GLFWwindow *window);

#endif // VIC_SRC_GLFW_GLFW_H
