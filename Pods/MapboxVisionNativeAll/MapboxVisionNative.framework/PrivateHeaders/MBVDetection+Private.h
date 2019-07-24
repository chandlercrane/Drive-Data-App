#import <Foundation/Foundation.h>

#import "MBVDetection.h"

#include "Vision/types/detections.hpp"

MBVDetectionClass convertDetectionClass(mapbox::vision::DetectionClass detectionClass);
mapbox::vision::DetectionClass convertDetectionClass(MBVDetectionClass detectionClass);

@interface MBVDetection (Private)

- (instancetype)initWithDetection:(mapbox::vision::Detection const &)detection;

@end
