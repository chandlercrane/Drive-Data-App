#import <CoreVideo/CoreVideo.h>
#import <Foundation/Foundation.h>

#import "MBV_api.h"

@class MBVCameraParameters;
@class CLHeading, CLLocation;
@class CMDeviceMotion;

NS_ASSUME_NONNULL_BEGIN

VISION_CORE_NATIVE_API NS_SWIFT_NAME(Sensors) @interface MBVSensors : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (void)setImage:(CVPixelBufferRef)image;
- (void)setCameraParameters:(MBVCameraParameters *)cameraParameters;

- (void)setGPS:(CLLocation *)location;
- (void)setHeading:(CLHeading *)heading;

- (void)setDeviceMotion:(CMDeviceMotion *)motion withReferenceFrame:(CMAttitudeReferenceFrame)frame;

@end

NS_ASSUME_NONNULL_END
