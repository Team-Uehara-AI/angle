// GENERATED FILE - DO NOT EDIT.
// Generated by gen_features.py using data from vk_features.json.
//
// Copyright 2022 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// FeaturesVk_autogen.h: Optional features for the Vulkan renderer.

#ifndef ANGLE_PLATFORM_FEATURESVK_H_
#define ANGLE_PLATFORM_FEATURESVK_H_

#include "platform/Feature.h"

namespace angle
{

struct FeaturesVk : FeatureSetBase
{
    FeaturesVk();
    ~FeaturesVk();

    FeatureInfo basicGLLineRasterization = {
        "basicGLLineRasterization",
        FeatureCategory::VulkanFeatures,
        "Enable the use of pixel shader patching to implement OpenGL basic line "
        "rasterization rules",
        &members,
    };

    FeatureInfo bresenhamLineRasterization = {
        "bresenhamLineRasterization",
        FeatureCategory::VulkanFeatures,
        "Enable Bresenham line rasterization via VK_EXT_line_rasterization extension",
        &members,
    };

    FeatureInfo provokingVertex = {
        "provokingVertex",
        FeatureCategory::VulkanFeatures,
        "Enable provoking vertex mode via VK_EXT_provoking_vertex extension",
        &members,
    };

    FeatureInfo forceFallbackFormat = {
        "forceFallbackFormat",
        FeatureCategory::VulkanWorkarounds,
        "Force a fallback format for angle_end2end_tests",
        &members,
    };

    FeatureInfo clampPointSize = {
        "clampPointSize", FeatureCategory::VulkanWorkarounds,
        "The point size range reported from the API is inconsistent with the actual behavior",
        &members, "http://anglebug.com/2970"};

    FeatureInfo depthClamping = {
        "depthClamping", FeatureCategory::VulkanWorkarounds,
        "The depth value is not clamped to [0,1] for floating point depth buffers.", &members,
        "http://anglebug.com/3970"};

    FeatureInfo supportsRenderpass2 = {
        "supportsRenderpass2",
        FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_KHR_create_renderpass2 extension",
        &members,
    };

    FeatureInfo supportsIncrementalPresent = {
        "supportsIncrementalPresent",
        FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_KHR_incremental_present extension",
        &members,
    };

    FeatureInfo supportsAndroidHardwareBuffer = {
        "supportsAndroidHardwareBuffer",
        FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_ANDROID_external_memory_android_hardware_buffer extension",
        &members,
    };

    FeatureInfo supportsGGPFrameToken = {
        "supportsGGPFrameToken",
        FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_GGP_frame_token extension",
        &members,
    };

    FeatureInfo supportsExternalMemoryFd = {
        "supportsExternalMemoryFd",
        FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_KHR_external_memory_fd extension",
        &members,
    };

    FeatureInfo supportsExternalMemoryFuchsia = {
        "supportsExternalMemoryFuchsia",
        FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_FUCHSIA_external_memory extension",
        &members,
    };

    FeatureInfo supportsFilteringPrecision = {
        "supportsFilteringPrecision",
        FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_GOOGLE_sampler_filtering_precision extension",
        &members,
    };

    FeatureInfo supportsExternalFenceCapabilities = {
        "supportsExternalFenceCapabilities",
        FeatureCategory::VulkanFeatures,
        "VkInstance supports the VK_KHR_external_fence_capabilities extension",
        &members,
    };

    FeatureInfo supportsExternalSemaphoreCapabilities = {
        "supportsExternalSemaphoreCapabilities",
        FeatureCategory::VulkanFeatures,
        "VkInstance supports the VK_KHR_external_semaphore_capabilities extension",
        &members,
    };

    FeatureInfo supportsExternalSemaphoreFd = {
        "supportsExternalSemaphoreFd",
        FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_KHR_external_semaphore_fd extension",
        &members,
    };

    FeatureInfo supportsExternalSemaphoreFuchsia = {
        "supportsExternalSemaphoreFuchsia",
        FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_FUCHSIA_external_semaphore extension",
        &members,
    };

    FeatureInfo supportsExternalFenceFd = {
        "supportsExternalFenceFd", FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_KHR_external_fence_fd extension", &members,
        "http://anglebug.com/2517"};

    FeatureInfo supportsAndroidNativeFenceSync = {
        "supportsAndroidNativeFenceSync", FeatureCategory::VulkanFeatures,
        "VkDevice supports the EGL_ANDROID_native_fence_sync extension", &members,
        "http://anglebug.com/2517"};

    FeatureInfo supportsImageCubeArray = {"supportsImageCubeArray", FeatureCategory::VulkanFeatures,
                                          "VkDevice supports the imageCubeArray feature properly",
                                          &members, "http://anglebug.com/3584"};

    FeatureInfo supportsPipelineStatisticsQuery = {
        "supportsPipelineStatisticsQuery", FeatureCategory::VulkanFeatures,
        "VkDevice supports the pipelineStatisticsQuery feature", &members,
        "http://anglebug.com/5430"};

    FeatureInfo supportsShaderStencilExport = {
        "supportsShaderStencilExport",
        FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_EXT_shader_stencil_export extension",
        &members,
    };

    FeatureInfo supportsYUVSamplerConversion = {
        "supportsYUVSamplerConversion",
        FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_KHR_sampler_ycbcr_conversion extension",
        &members,
    };

    FeatureInfo emulateTransformFeedback = {
        "emulateTransformFeedback", FeatureCategory::VulkanFeatures,
        "Emulate transform feedback as the VK_EXT_transform_feedback is not present.", &members,
        "http://anglebug.com/3205"};

    FeatureInfo supportsTransformFeedbackExtension = {
        "supportsTransformFeedbackExtension", FeatureCategory::VulkanFeatures,
        "Transform feedback uses the VK_EXT_transform_feedback extension.", &members,
        "http://anglebug.com/3206"};

    FeatureInfo supportsGeometryStreamsCapability = {
        "supportsGeometryStreamsCapability", FeatureCategory::VulkanFeatures,
        "Implementation supports the GeometryStreams SPIR-V capability.", &members,
        "http://anglebug.com/3206"};

    FeatureInfo supportsIndexTypeUint8 = {"supportsIndexTypeUint8", FeatureCategory::VulkanFeatures,
                                          "VkDevice supports the VK_EXT_index_type_uint8 extension",
                                          &members, "http://anglebug.com/4405"};

    FeatureInfo supportsCustomBorderColor = {
        "supportsCustomBorderColor", FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_EXT_custom_border_color extension", &members,
        "http://anglebug.com/3577"};

    FeatureInfo supportsMultiDrawIndirect = {
        "supportsMultiDrawIndirect", FeatureCategory::VulkanFeatures,
        "VkDevice supports the multiDrawIndirect extension", &members, "http://anglebug.com/6439"};

    FeatureInfo supportsDepthStencilResolve = {"supportsDepthStencilResolve",
                                               FeatureCategory::VulkanFeatures,
                                               "VkDevice supports the VK_KHR_depth_stencil_resolve "
                                               "extension with the independentResolveNone feature",
                                               &members, "http://anglebug.com/4836"};

    FeatureInfo supportsMultisampledRenderToSingleSampled = {
        "supportsMultisampledRenderToSingleSampled", FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_EXT_multisampled_render_to_single_sampled extension", &members,
        "http://anglebug.com/4836"};

    FeatureInfo supportsMultiview = {"supportsMultiview", FeatureCategory::VulkanFeatures,
                                     "VkDevice supports the VK_KHR_multiview extension", &members,
                                     "http://anglebug.com/6048"};

    FeatureInfo disableFifoPresentMode = {
        "disableFifoPresentMode", FeatureCategory::VulkanWorkarounds,
        "VK_PRESENT_MODE_FIFO_KHR causes random timeouts", &members, "http://anglebug.com/3153"};

    FeatureInfo bindEmptyForUnusedDescriptorSets = {
        "bindEmptyForUnusedDescriptorSets", FeatureCategory::VulkanWorkarounds,
        "Gaps in bound descriptor set indices causes the post-gap sets to misbehave", &members,
        "http://anglebug.com/2727"};

    FeatureInfo forceD16TexFilter = {
        "forceD16TexFilter", FeatureCategory::VulkanWorkarounds,
        "VK_FORMAT_D16_UNORM does not support VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT, "
        "which prevents OES_depth_texture from being supported.",
        &members, "http://anglebug.com/3452"};

    FeatureInfo disableFlippingBlitWithCommand = {
        "disableFlippingBlitWithCommand", FeatureCategory::VulkanWorkarounds,
        "vkCmdBlitImage with flipped coordinates blits incorrectly.", &members,
        "http://anglebug.com/3498"};

    FeatureInfo perFrameWindowSizeQuery = {
        "perFrameWindowSizeQuery", FeatureCategory::VulkanWorkarounds,
        "Vulkan swapchain is not returning VK_ERROR_OUT_OF_DATE when window resizing", &members,
        "http://anglebug.com/3623, http://anglebug.com/3624, http://anglebug.com/3625"};

    FeatureInfo padBuffersToMaxVertexAttribStride = {
        "padBuffersToMaxVertexAttribStride", FeatureCategory::VulkanWorkarounds,
        "Vulkan considers vertex attribute accesses to count up to the last multiple of the "
        "stride. This additional access supports AMD's robust buffer access implementation. "
        "AMDVLK in particular will return incorrect values when the vertex access extends into "
        "the range that would be the stride padding and the buffer is too small. "
        "This workaround limits GL_MAX_VERTEX_ATTRIB_STRIDE to a maximum value and "
        "pads up every buffer allocation size to be a multiple of the maximum stride.",
        &members, "http://anglebug.com/4428"};

    FeatureInfo supportsExternalMemoryDmaBufAndModifiers = {
        "supportsExternalMemoryDmaBufAndModifiers", FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_EXT_external_memory_dma_buf and VK_EXT_image_drm_format_modifier "
        "extensions",
        &members, "http://anglebug.com/6248"};

    FeatureInfo supportsExternalMemoryHost = {
        "supportsExternalMemoryHost",
        FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_EXT_external_memory_host extension",
        &members,
    };

    FeatureInfo allocateNonZeroMemory = {
        "allocateNonZeroMemory", FeatureCategory::VulkanFeatures,
        "Fill new allocations with non-zero values to flush out errors.", &members,
        "http://anglebug.com/4384"};

    FeatureInfo logMemoryReportCallbacks = {
        "logMemoryReportCallbacks",
        FeatureCategory::VulkanFeatures,
        "Log each callback from VK_EXT_device_memory_report",
        &members,
    };

    FeatureInfo logMemoryReportStats = {
        "logMemoryReportStats",
        FeatureCategory::VulkanFeatures,
        "Log stats from VK_EXT_device_memory_report each swap",
        &members,
    };

    FeatureInfo shadowBuffers = {
        "shadowBuffers", FeatureCategory::VulkanFeatures,
        "Allocate a shadow buffer for GL buffer objects to reduce glMap* latency.", &members,
        "http://anglebug.com/4339"};

    FeatureInfo preferCPUForBufferSubData = {
        "preferCPUForBufferSubData", FeatureCategory::VulkanFeatures,
        "Prefer use CPU to do bufferSubData instead of staged update.", &members,
        "http://issuetracker.google.com/200067929"};

    FeatureInfo persistentlyMappedBuffers = {
        "persistentlyMappedBuffers", FeatureCategory::VulkanFeatures,
        "Persistently map buffer memory to reduce map/unmap IOCTL overhead.", &members,
        "http://anglebug.com/2162"};

    FeatureInfo enablePreRotateSurfaces = {"enablePreRotateSurfaces",
                                           FeatureCategory::VulkanFeatures,
                                           "Enable Android pre-rotation for landscape applications",
                                           &members, "http://anglebug.com/3502"};

    FeatureInfo enablePrecisionQualifiers = {
        "enablePrecisionQualifiers", FeatureCategory::VulkanFeatures,
        "Enable precision qualifiers in shaders", &members, "http://anglebug.com/3078"};

    FeatureInfo preferAggregateBarrierCalls = {
        "preferAggregateBarrierCalls", FeatureCategory::VulkanWorkarounds,
        "Single barrier call is preferred over multiple calls with "
        "fine grained pipeline stage dependency information",
        &members, "http://anglebug.com/4633"};

    FeatureInfo preferSkippingInvalidateForEmulatedFormats = {
        "preferSkippingInvalidateForEmulatedFormats", FeatureCategory::VulkanWorkarounds,
        "Skipping invalidate is preferred for emulated formats that have extra channels over "
        "re-clearing the image",
        &members, "http://anglebug.com/6860"};

    FeatureInfo asyncCommandQueue = {"asyncCommandQueue", FeatureCategory::VulkanFeatures,
                                     "Use CommandQueue worker thread to dispatch work to GPU.",
                                     &members, "http://anglebug.com/4324"};

    FeatureInfo supportsShaderFloat16 = {
        "supportsShaderFloat16", FeatureCategory::VulkanFeatures,
        "VkDevice supports the VK_KHR_shader_float16_int8 extension "
        "and has the shaderFloat16 feature",
        &members, "http://anglebug.com/4551"};

    FeatureInfo allowGenerateMipmapWithCompute = {
        "allowGenerateMipmapWithCompute", FeatureCategory::VulkanFeatures,
        "Use the compute path to generate mipmaps on devices that meet the minimum requirements, "
        "and the performance is better.",
        &members, "http://anglebug.com/4551"};

    FeatureInfo supportsRenderPassStoreOpNone = {
        "supportsRenderPassStoreOpNone", FeatureCategory::VulkanFeatures,
        "VkDevice supports VK_QCOM_render_pass_store_ops extension.", &members,
        "http://anglebug.com/5055"};

    FeatureInfo supportsRenderPassLoadStoreOpNone = {
        "supportsRenderPassLoadStoreOpNone", FeatureCategory::VulkanFeatures,
        "VkDevice supports VK_EXT_load_store_op_none extension.", &members,
        "http://anglebug.com/5371"};

    FeatureInfo supportsDepthClipControl = {
        "supportsDepthClipControl", FeatureCategory::VulkanFeatures,
        "VkDevice supports VK_EXT_depth_clip_control extension.", &members,
        "http://anglebug.com/5421"};

    FeatureInfo supportsBlendOperationAdvanced = {
        "supportsBlendOperationAdvanced", FeatureCategory::VulkanFeatures,
        "VkDevice supports VK_EXT_blend_operation_advanced extension.", &members,
        "http://anglebug.com/3586"};

    FeatureInfo forceMaxUniformBufferSize16KB = {
        "forceMaxUniformBufferSize16KB", FeatureCategory::VulkanWorkarounds,
        "Force max uniform buffer size to 16K on some device due to bug", &members,
        "https://issuetracker.google.com/161903006"};

    FeatureInfo supportsImageFormatList = {
        "supportsImageFormatList", FeatureCategory::VulkanFeatures,
        "Enable VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT by default for ICDs "
        "that support VK_KHR_image_format_list",
        &members, "http://anglebug.com/5281"};

    FeatureInfo enableMultisampledRenderToTexture = {
        "enableMultisampledRenderToTexture", FeatureCategory::VulkanWorkarounds,
        "Expose EXT_multisampled_render_to_texture", &members, "http://anglebug.com/4937"};

    FeatureInfo deferFlushUntilEndRenderPass = {
        "deferFlushUntilEndRenderPass", FeatureCategory::VulkanWorkarounds,
        "Allow glFlush to be deferred until renderpass ends", &members,
        "https://issuetracker.google.com/issues/166475273"};

    FeatureInfo waitIdleBeforeSwapchainRecreation = {
        "waitIdleBeforeSwapchainRecreation", FeatureCategory::VulkanWorkarounds,
        "Before passing an oldSwapchain to VkSwapchainCreateInfoKHR, wait for queue to be idle. "
        "Works around a bug on platforms which destroy oldSwapchain in vkCreateSwapchainKHR.",
        &members, "http://anglebug.com/5061"};

    FeatureInfo forceTextureLodOffset1 = {
        "forceTextureLodOffset1",
        FeatureCategory::VulkanWorkarounds,
        "Increase the minimum texture level-of-detail by 1 when sampling.",
        &members,
    };

    FeatureInfo forceTextureLodOffset2 = {
        "forceTextureLodOffset2",
        FeatureCategory::VulkanWorkarounds,
        "Increase the minimum texture level-of-detail by 2 when sampling.",
        &members,
    };

    FeatureInfo forceTextureLodOffset3 = {
        "forceTextureLodOffset3",
        FeatureCategory::VulkanWorkarounds,
        "Increase the minimum texture level-of-detail by 3 when sampling.",
        &members,
    };

    FeatureInfo forceTextureLodOffset4 = {
        "forceTextureLodOffset4",
        FeatureCategory::VulkanWorkarounds,
        "Increase the minimum texture level-of-detail by 4 when sampling.",
        &members,
    };

    FeatureInfo forceNearestFiltering = {
        "forceNearestFiltering",
        FeatureCategory::VulkanWorkarounds,
        "Force nearest filtering when sampling.",
        &members,
    };

    FeatureInfo forceNearestMipFiltering = {
        "forceNearestMipFiltering",
        FeatureCategory::VulkanWorkarounds,
        "Force nearest mip filtering when sampling.",
        &members,
    };

    FeatureInfo compressVertexData = {
        "compressVertexData",
        FeatureCategory::VulkanWorkarounds,
        "Compress vertex data to smaller data types when "
        "possible. Using this feature makes ANGLE non-conformant.",
        &members,
    };

    FeatureInfo preferDrawClearOverVkCmdClearAttachments = {
        "preferDrawClearOverVkCmdClearAttachments", FeatureCategory::VulkanWorkarounds,
        "On some hardware, clear using a draw call instead of vkCmdClearAttachments in the middle "
        "of render pass due to bugs",
        &members, "https://issuetracker.google.com/166809097"};

    FeatureInfo emulatedPrerotation90 = {"emulatedPrerotation90", FeatureCategory::VulkanFeatures,
                                         "Emulate 90-degree prerotation.", &members,
                                         "http://anglebug.com/4901"};

    FeatureInfo emulatedPrerotation180 = {"emulatedPrerotation180", FeatureCategory::VulkanFeatures,
                                          "Emulate 180-degree prerotation.", &members,
                                          "http://anglebug.com/4901"};

    FeatureInfo emulatedPrerotation270 = {"emulatedPrerotation270", FeatureCategory::VulkanFeatures,
                                          "Emulate 270-degree prerotation.", &members,
                                          "http://anglebug.com/4901"};

    FeatureInfo generateSPIRVThroughGlslang = {
        "generateSPIRVThroughGlslang", FeatureCategory::VulkanFeatures,
        "Translate SPIR-V through glslang.", &members, "http://anglebug.com/4889"};

    FeatureInfo forceDriverUniformOverSpecConst = {
        "forceDriverUniformOverSpecConst", FeatureCategory::VulkanWorkarounds,
        "Forces using driver uniforms instead of specialization constants.", &members,
        "http://issuetracker.google.com/173636783"};

    FeatureInfo exposeNonConformantExtensionsAndVersions = {
        "exposeNonConformantExtensionsAndVersions", FeatureCategory::VulkanWorkarounds,
        "Expose GLES versions and extensions that are not conformant.", &members,
        "http://anglebug.com/5375"};

    FeatureInfo emulateR32fImageAtomicExchange = {
        "emulateR32fImageAtomicExchange", FeatureCategory::VulkanWorkarounds,
        "Emulate r32f images with r32ui to support imageAtomicExchange.", &members,
        "http://anglebug.com/5535"};

    FeatureInfo supportsNegativeViewport = {
        "supportsNegativeViewport",
        FeatureCategory::VulkanFeatures,
        "The driver supports inverting the viewport with a negative height.",
        &members,
    };

    FeatureInfo forceFragmentShaderPrecisionHighpToMediump = {
        "forceFragmentShaderPrecisionHighpToMediump", FeatureCategory::VulkanWorkarounds,
        "Forces highp precision in fragment shader to mediump.", &members,
        "https://issuetracker.google.com/184850002"};

    FeatureInfo preferSubmitAtFBOBoundary = {
        "preferSubmitAtFBOBoundary", FeatureCategory::VulkanWorkarounds,
        "Submit commands to driver at each FBO boundary for performance improvements.", &members,
        "https://issuetracker.google.com/187425444"};

    FeatureInfo useMultipleDescriptorsForExternalFormats = {
        "useMultipleDescriptorsForExternalFormats", FeatureCategory::VulkanWorkarounds,
        "Return a default descriptor count for external formats.", &members,
        "http://anglebug.com/6141"};

    FeatureInfo supportsProtectedMemory = {
        "supportsProtectedMemory", FeatureCategory::VulkanFeatures,
        "VkDevice supports protected memory", &members, "http://anglebug.com/3965"};

    FeatureInfo supportsHostQueryReset = {"supportsHostQueryReset", FeatureCategory::VulkanFeatures,
                                          "VkDevice supports VK_EXT_host_query_reset extension",
                                          &members, "http://anglebug.com/6692"};

    FeatureInfo supportsSurfaceCapabilities2Extension = {
        "supportsSurfaceCapabilities2Extension",
        FeatureCategory::VulkanFeatures,
        "VkInstance supports the VK_KHR_get_surface_capabilities2 extension",
        &members,
    };

    FeatureInfo supportsSurfaceProtectedCapabilitiesExtension = {
        "supportsSurfaceProtectedCapabilitiesExtension",
        FeatureCategory::VulkanFeatures,
        "VkInstance supports the VK_KHR_surface_protected_capabilities extension",
        &members,
    };

    FeatureInfo supportsSurfacelessQueryExtension = {
        "supportsSurfacelessQueryExtension",
        FeatureCategory::VulkanFeatures,
        "VkInstance supports the VK_GOOGLE_surfaceless_query extension",
        &members,
    };

    FeatureInfo supportsSurfaceProtectedSwapchains = {
        "supportsSurfaceProtectedSwapchains",
        FeatureCategory::VulkanFeatures,
        "VkSurface supportsProtected for protected swapchains",
        &members,
    };

    FeatureInfo overrideSurfaceFormatRGB8ToRGBA8 = {
        "overrideSurfaceFormatRGB8ToRGBA8", FeatureCategory::VulkanWorkarounds,
        "Override surface format GL_RGB8 to GL_RGBA8", &members, "http://anglebug.com/6651"};

    FeatureInfo supportsSharedPresentableImageExtension = {
        "supportsSharedPresentableImageExtension",
        FeatureCategory::VulkanFeatures,
        "VkSurface supports the VK_KHR_shared_presentable_images extension",
        &members,
    };

    FeatureInfo supportsShaderFramebufferFetch = {
        "supportsShaderFramebufferFetch",
        FeatureCategory::VulkanFeatures,
        "Whether the Vulkan backend supports coherent framebuffer fetch",
        &members,
    };

    FeatureInfo supportsShaderFramebufferFetchNonCoherent = {
        "supportsShaderFramebufferFetchNonCoherent",
        FeatureCategory::VulkanFeatures,
        "Whether the Vulkan backend supports non-coherent framebuffer fetch",
        &members,
    };

    FeatureInfo supportsLockSurfaceExtension = {
        "supportsLockSurfaceExtension",
        FeatureCategory::VulkanFeatures,
        "Surface supports the EGL_KHR_lock_surface3 extension",
        &members,
    };

    FeatureInfo swapbuffersOnFlushOrFinishWithSingleBuffer = {
        "swapbuffersOnFlushOrFinishWithSingleBuffer", FeatureCategory::VulkanFeatures,
        "Bypass deferredFlush with calling swapbuffers on flush or finish when in Shared Present "
        "mode",
        &members, "http://anglebug.com/6878"};

    FeatureInfo emulateDithering = {"emulateDithering", FeatureCategory::VulkanFeatures,
                                    "Emulate OpenGL dithering", &members,
                                    "http://anglebug.com/6755"};

    FeatureInfo roundOutputAfterDithering = {
        "roundOutputAfterDithering", FeatureCategory::VulkanWorkarounds,
        "Round output after dithering to workaround a driver bug that rounds the output up",
        &members, "http://anglebug.com/6953"};

    FeatureInfo emulateAdvancedBlendEquations = {
        "emulateAdvancedBlendEquations", FeatureCategory::VulkanFeatures,
        "Emulate GL_KHR_blend_equation_advanced", &members, "http://anglebug.com/3586"};

    FeatureInfo bottomLeftOriginPresentRegionRectangles = {
        "bottomLeftOriginPresentRegionRectangles",
        FeatureCategory::VulkanWorkarounds,
        "On some platforms present region rectangles are expected to have a bottom-left origin, "
        "instead of top-left origin as from spec",
        &members,
    };

    FeatureInfo forceSubmitImmutableTextureUpdates = {
        "forceSubmitImmutableTextureUpdates", FeatureCategory::VulkanAppWorkarounds,
        "Force submit updates to immutable textures", &members, "http://anglebug.com/6929"};

    FeatureInfo retainSPIRVDebugInfo = {"retainSPIRVDebugInfo", FeatureCategory::VulkanFeatures,
                                        "Retain debug info in SPIR-V blob.", &members,
                                        "http://anglebug.com/5901"};

    FeatureInfo createPipelineDuringLink = {
        "createPipelineDuringLink", FeatureCategory::VulkanFeatures,
        "Create pipeline with default state during glLinkProgram", &members,
        "http://anglebug.com/7046"};

    FeatureInfo preferDeviceLocalMemoryHostVisible = {
        "preferDeviceLocalMemoryHostVisible", FeatureCategory::VulkanFeatures,
        "Prefer adding HOST_VISIBLE flag for DEVICE_LOCAL memory when picking memory types",
        &members, "http://anglebug.com/7047"};

    FeatureInfo supportsFragmentShadingRate = {
        "supportsFragmentShadingRate", FeatureCategory::VulkanFeatures,
        "VkDevice supports VK_KHR_fragment_shading_rate extension", &members,
        "http://anglebug.com/7172"};

    FeatureInfo explicitlyEnablePerSampleShading = {
        "explicitlyEnablePerSampleShading", FeatureCategory::VulkanWorkarounds,
        "Explicitly enable per-sample shading if the fragment shader contains the "
        "sample qualifier",
        &members, "http://anglebug.com/6876"};

    FeatureInfo forceContinuousRefreshOnSharedPresent = {
        "forceContinuousRefreshOnSharedPresent", FeatureCategory::VulkanFeatures,
        "Force to create vulkan swapchain with continuous refresh on shared present", &members,
        "https://issuetracker.google.com/229267970"};
};

inline FeaturesVk::FeaturesVk()  = default;
inline FeaturesVk::~FeaturesVk() = default;

}  // namespace angle

#endif  // ANGLE_PLATFORM_FEATURESVK_H_
