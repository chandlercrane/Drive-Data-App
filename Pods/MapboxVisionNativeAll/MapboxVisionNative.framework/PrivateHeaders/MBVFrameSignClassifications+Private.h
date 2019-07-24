#import "MBVFrameSignClassifications.h"

#include "Vision/types/sign.hpp"

@interface MBVFrameSignClassifications (Private)

- (instancetype)initWithFrameSignClassifications:(mapbox::vision::FrameSignClassifications const &)signClassifications;

@end
