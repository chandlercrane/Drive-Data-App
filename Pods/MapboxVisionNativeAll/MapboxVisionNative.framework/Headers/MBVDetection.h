#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Class of a detected object.
 */
typedef NS_ENUM(NSUInteger, MBVDetectionClass) {
  MBVDetectionClassCar,
  MBVDetectionClassBicycle,
  MBVDetectionClassPerson,
  MBVDetectionClassTrafficLight,
  MBVDetectionClassTrafficSign
} NS_SWIFT_NAME(DetectionClass);

/**
 *  Single result of object detection.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(Detection) @interface MBVDetection : NSObject

/// Relative coordinates of rectangle bounding the detected object on the image.
/// Expressed as a value in range [0..1] relative to image size.
@property (nonatomic, readonly) CGRect boundingBox;

/// Class of the the detected object
@property (nonatomic, readonly) MBVDetectionClass detectionClass;

/// Confidence of determining a detection class
@property (nonatomic, readonly) float confidence;

@end

NS_ASSUME_NONNULL_END
