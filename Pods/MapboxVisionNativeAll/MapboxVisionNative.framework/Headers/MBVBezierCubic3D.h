#import <Foundation/Foundation.h>

#import "MBVWorldCoordinate.h"

#import "MBV_api.h"

/// :nodoc:
typedef MBVWorldCoordinate MBVPoint3D NS_SWIFT_NAME(Point3D);

NS_ASSUME_NONNULL_BEGIN

/**
 *  Cubic bezier spline in the world space.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(BezierCubic3D) @interface MBVBezierCubic3D : NSObject

- (MBVPoint3D *)getPoint:(float)t;
- (NSArray<MBVPoint3D *> *)getPoints:(NSArray<NSNumber *> *)ts;
- (MBVPoint3D *)getDerivative:(float)t;
- (NSArray<MBVPoint3D *> *)getDerivatives:(NSArray<NSNumber *> *)ts;
- (NSArray<MBVPoint3D *> *)getControlPoints;

+ (MBVBezierCubic3D *)fitCurve:(NSArray<MBVPoint3D *> *)points;

@end

NS_ASSUME_NONNULL_END
