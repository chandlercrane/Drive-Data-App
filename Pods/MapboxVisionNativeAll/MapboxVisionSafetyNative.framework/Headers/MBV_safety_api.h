#pragma once

#ifdef BUILD_VISION_SAFETY_API
#  define VISION_SAFETY_NATIVE_API __attribute__((visibility("default")))
#  ifdef BUILD_AUTOTESTS
#    define VISION_SAFETY_NATIVE_TEST_API VISION_SAFETY_NATIVE_API
#  else
#    define VISION_SAFETY_NATIVE_TEST_API
#  endif
#else
#  define VISION_SAFETY_NATIVE_API
#  define VISION_SAFETY_NATIVE_TEST_API
#endif
