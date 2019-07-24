#import <Foundation/Foundation.h>
#import <MapboxVisionNative/MBVBezierCubic3D.h>

#import "MBV_ar_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  State of an AR lane in the world space.
 */
VISION_AR_NATIVE_API NS_SWIFT_NAME(ARLane) @interface MBVARLane : NSObject

/// Cubic spline describing geometry of the AR lane
@property (nonatomic, readonly) MBVBezierCubic3D *curve;

@end

NS_ASSUME_NONNULL_END
