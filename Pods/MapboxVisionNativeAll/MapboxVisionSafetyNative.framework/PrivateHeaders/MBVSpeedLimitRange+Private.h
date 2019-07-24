#import "MBVSpeedLimitRange.h"

#include <algorithm>

@interface MBVSpeedLimitRange (Private)

- (instancetype)initWithSpeedLimitRange:(std::pair<float, float>)speedLimitRange;

@end
