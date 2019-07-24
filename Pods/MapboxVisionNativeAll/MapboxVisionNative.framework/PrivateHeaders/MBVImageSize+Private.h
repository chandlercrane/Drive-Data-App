#import "MBVImageSize.h"

#include "Vision/types/base.hpp"

@interface MBVImageSize (Private)

- (instancetype)initWithImageSize:(mapbox::vision::ImageSize const &)imageSize;

@end
