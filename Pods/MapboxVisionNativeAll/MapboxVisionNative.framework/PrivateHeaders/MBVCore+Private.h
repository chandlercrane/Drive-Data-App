#include "VisionCore/core.hpp"

static void CORE_SHOULD_EXISTS(NSString *message) {
  if (!cva::Core::Instance()) {
    [NSException raise:@"CVACoreAccessibilityException" format:@"%@", message];
    exit(-1);
  }
}
