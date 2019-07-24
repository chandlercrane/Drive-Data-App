#pragma once

#ifdef BUILD_VISION_CORE_API
#  define VISION_CORE_NATIVE_API __attribute__((visibility("default")))
#  ifdef BUILD_AUTOTESTS
#    define VISION_CORE_NATIVE_TEST_API VISION_CORE_NATIVE_API
#  else
#    define VISION_CORE_NATIVE_TEST_API
#  endif
#else
#  define VISION_CORE_NATIVE_API
#  define VISION_CORE_NATIVE_TEST_API
#endif
