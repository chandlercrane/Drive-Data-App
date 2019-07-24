#import "MBVARCamera.h"

#include "VisionAR/types/vision_ar_camera.hpp"

@interface MBVARCamera (Private)

- (instancetype)initWithCamera:(mapbox::vision::ARCamera const &)arCamera;

@end
