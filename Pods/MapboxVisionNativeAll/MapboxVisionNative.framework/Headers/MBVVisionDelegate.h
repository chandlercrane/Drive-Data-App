#import <Foundation/Foundation.h>

#import "MBVAuthorizationStatus.h"
#import "MBVCountry.h"

NS_ASSUME_NONNULL_BEGIN

@class MBVFrameSegmentation;
@class MBVFrameDetections;
@class MBVFrameSignClassifications;
@class MBVRoadDescription;
@class MBVWorldDescription;
@class MBVVehicleState;
@class MBVCamera;

NS_SWIFT_NAME(VisionDelegate)
@protocol MBVVisionDelegate

- (void)onAuthorizationStatusUpdated:(MBVAuthorizationStatus)status;

- (void)onFrameSegmentationUpdated:(MBVFrameSegmentation *)segmentation;
- (void)onFrameDetectionsUpdated:(MBVFrameDetections *)detections;
- (void)onFrameSignClassificationsUpdated:(MBVFrameSignClassifications *)signClassifications;
- (void)onRoadDescriptionUpdated:(MBVRoadDescription *)road;
- (void)onWorldDescriptionUpdated:(MBVWorldDescription *)world;
- (void)onVehicleStateUpdated:(MBVVehicleState *)vehicleState;
- (void)onCameraUpdated:(MBVCamera *)camera;
- (void)onCountryUpdated:(MBVCountry)country;

- (void)onUpdateCompleted;

@end

NS_ASSUME_NONNULL_END
