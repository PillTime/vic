#include "glfw.h"

#include <stddef.h>
#include <stdint.h>

#include <GLFW/glfw3.h>

void vicGlfwInitialize()
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
}

void vicGlfwTerminate()
{
    glfwTerminate();
}

GLFWwindow *vicGlfwWindowCreate(size_t const width, size_t const height, char const *const title,
                                GLFWframebuffersizefun const callback)
{
    GLFWwindow *const window =
        glfwCreateWindow((uint32_t)width, (uint32_t)height, title, nullptr, nullptr);

    if (callback != nullptr)
    {
        glfwSetFramebufferSizeCallback(window, callback);
    }

    return window;
}

void vicGlfwWindowDestroy(GLFWwindow *const window)
{
    glfwDestroyWindow(window);
}
