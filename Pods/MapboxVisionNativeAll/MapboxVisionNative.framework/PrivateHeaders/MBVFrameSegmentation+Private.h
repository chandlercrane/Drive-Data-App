#import "MBVFrameSegmentation.h"

#include "Vision/types/segmentation.hpp"

@interface MBVFrameSegmentation (Private)

- (instancetype)initWithFrameSegmentation:(mapbox::vision::FrameSegmentation const &)frameSegmentation;

@end
