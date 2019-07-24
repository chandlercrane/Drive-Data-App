#import <Foundation/Foundation.h>

#import "MBV_api.h"

@protocol MBVVisionDelegate;
@class MBVCoreConfig, MBVPoint2D, MBVWorldCoordinate, MBVGeoCoordinate;

NS_ASSUME_NONNULL_BEGIN

VISION_CORE_NATIVE_API NS_SWIFT_NAME(VisionManagerBaseNative) @interface MBVVisionManagerBaseNative : NSObject

@property (nonatomic, strong) MBVCoreConfig *config;

- (instancetype)init NS_UNAVAILABLE;

- (nullable MBVPoint2D *)worldToPixel:(MBVWorldCoordinate *)worldCoordinate;
- (nullable MBVWorldCoordinate *)pixelToWorld:(MBVPoint2D *)point;
- (nullable MBVGeoCoordinate *)worldToGeo:(MBVWorldCoordinate *)world;
- (nullable MBVWorldCoordinate *)geoToWorld:(MBVGeoCoordinate *)geo;

@end

NS_ASSUME_NONNULL_END
