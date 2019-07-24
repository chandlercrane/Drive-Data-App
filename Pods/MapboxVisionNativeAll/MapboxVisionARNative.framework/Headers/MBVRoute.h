#import <Foundation/Foundation.h>

#import "MBV_ar_api.h"

NS_ASSUME_NONNULL_BEGIN

@class MBVRoutePoint;

/**
 *  Route provided by a route engine and used to draw an AR lane.
 */
VISION_AR_NATIVE_API NS_SWIFT_NAME(Route) @interface MBVRoute : NSObject

/// Array of points along the route
@property (nonatomic, readonly) NSArray<MBVRoutePoint *> *points;

/// Estimated time of arrival expressed in seconds
@property (nonatomic, readonly) float eta;

@property (nonatomic, readonly) NSString *sourceStreetName;
@property (nonatomic, readonly) NSString *destinationStreetName;

- (instancetype)initWithPoints:(NSArray<MBVRoutePoint *> *)points eta:(float)eta sourceStreetName:(NSString *)sourceStreetName destinationStreetName:(NSString *)destinationStreetName;

@end

NS_ASSUME_NONNULL_END
