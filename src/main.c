#include <stdlib.h>

#include <GLFW/glfw3.h>

#include "glfw/glfw.h"

void vicWindowLoop(GLFWwindow *const window)
{
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }
}

int main()
{
    vicGlfwInitialize();
    GLFWwindow *const window = vicGlfwWindowCreate(1280, 720, "vic", nullptr);

    vicWindowLoop(window);

    vicGlfwWindowDestroy(window);
    vicGlfwTerminate();

    return EXIT_SUCCESS;
}
