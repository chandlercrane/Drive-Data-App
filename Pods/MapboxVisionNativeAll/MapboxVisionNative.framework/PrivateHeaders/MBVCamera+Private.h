#import "MBVCamera.h"

#include "Vision/types/camera.hpp"

@interface MBVCamera (Private)

- (instancetype)initWithCamera:(mapbox::vision::Camera const &)camera;

@end
