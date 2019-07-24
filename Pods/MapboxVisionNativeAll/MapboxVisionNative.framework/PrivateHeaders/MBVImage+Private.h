#pragma once

#import <Foundation/Foundation.h>
#import "MBVImage.h"
#include "VisionCore/util/image.hpp"

NS_ASSUME_NONNULL_BEGIN

@interface MBVImage (Private)

- (instancetype)initWithImage:(cva::ImagePtr)image;

@end

NS_ASSUME_NONNULL_END
