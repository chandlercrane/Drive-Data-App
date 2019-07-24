#pragma once

#ifdef BUILD_VISION_AR_API
#  define VISION_AR_NATIVE_API __attribute__((visibility("default")))
#  ifdef BUILD_AUTOTESTS
#    define VISION_AR_NATIVE_TEST_API VISION_AR_NATIVE_API
#  else
#    define VISION_AR_NATIVE_TEST_API
#  endif
#else
#  define VISION_AR_NATIVE_API
#  define VISION_AR_NATIVE_TEST_API
#endif
