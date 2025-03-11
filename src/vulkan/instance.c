#include "instance.h"

#include <vulkan/vulkan.h>

#include "../utils/utils.h"

VkInstance vicVulkanInstanceCreate()
{
    VkApplicationInfo const app_info = {
        .sType = VK_STRUCTURE_TYPE_APPLICATION_INFO,
        .pApplicationName = "vic",
        .applicationVersion = VK_MAKE_API_VERSION(0, 0, 0, 0),
        .apiVersion = VK_API_VERSION_1_4,
    };

    VkInstanceCreateInfo const create_info = {
        .sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
        .pApplicationInfo = &app_info,
    };

    VkInstance instance = VK_NULL_HANDLE;
    VkResult const result = vkCreateInstance(&create_info, VIC_ALLOCATOR, &instance);
    if (result != VK_SUCCESS)
    {
        VIC_DIE("failed to create vulkan instance");
    }

    return instance;
}

void vicVulkanInstanceDestroy(VkInstance const instance)
{
    vkDestroyInstance(instance, VIC_ALLOCATOR);
}
