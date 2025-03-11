#include <stdlib.h>

#include <GLFW/glfw3.h>
#include <vulkan/vulkan.h>

#include "glfw/glfw.h"
#include "vulkan/instance.h"

void windowLoop(GLFWwindow *const window)
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

    VkInstance instance = vicVulkanInstanceCreate();

    windowLoop(window);

    vicVulkanInstanceDestroy(instance);

    vicGlfwWindowDestroy(window);
    vicGlfwTerminate();

    return EXIT_SUCCESS;
}
