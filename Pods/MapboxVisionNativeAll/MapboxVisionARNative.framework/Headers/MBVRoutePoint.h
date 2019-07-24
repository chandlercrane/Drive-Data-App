#import <Foundation/Foundation.h>
#import <MapboxVisionNative/MBVGeoCoordinate.h>

#import "MBV_ar_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Single point of a route.
 */
VISION_AR_NATIVE_API NS_SWIFT_NAME(RoutePoint) @interface MBVRoutePoint : NSObject

/// Geographical coordinate of the point along the route
@property (nonatomic, readonly) MBVGeoCoordinate *position;

- (instancetype)initWithPosition:(MBVGeoCoordinate *)position;

@end

NS_ASSUME_NONNULL_END
