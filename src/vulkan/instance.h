#ifndef VIC_SRC_VULKAN_INSTANCE_H
#define VIC_SRC_VULKAN_INSTANCE_H

#include <vulkan/vulkan.h>

VkInstance vicVulkanInstanceCreate();
void vicVulkanInstanceDestroy(VkInstance instance);

#endif // VIC_SRC_VULKAN_INSTANCE_H
