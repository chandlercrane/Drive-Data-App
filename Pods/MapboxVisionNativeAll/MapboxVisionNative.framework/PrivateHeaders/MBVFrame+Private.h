#import "MBVFrame.h"

#include "Vision/types/base.hpp"

@interface MBVFrame (Private)

- (instancetype)initWithFrame:(mapbox::vision::Frame const &)frame;

@end
