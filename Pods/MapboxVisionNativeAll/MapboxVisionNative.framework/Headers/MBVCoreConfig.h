#import <Foundation/Foundation.h>

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

// should match FPSPolicy in core/config.hpp
typedef NS_ENUM(NSUInteger, MBVFPSPolicy) {
  MBVFPSPolicyFixed = 0,
  MBVFPSPolicyDynamic,
} NS_SWIFT_NAME(FPSPolicy);

VISION_CORE_NATIVE_API NS_SWIFT_NAME(CoreConfig) @interface MBVCoreConfig : NSObject

@property (nonatomic, assign) bool useSegmentation;
@property (nonatomic, assign) bool useDetection;
@property (nonatomic, assign) bool useClassification;
@property (nonatomic, assign) bool useRoadConfidence;
@property (nonatomic, assign) bool useTracking;
@property (nonatomic, assign) bool useDebugOverlay;
@property (nonatomic, assign) bool drawSegMaskInDebug;
@property (nonatomic, assign) bool solveCameraWorldTransform;
@property (nonatomic, assign) bool drawCurLaneInDebug;
@property (nonatomic, assign) bool drawMarkingLanesInDebug;
@property (nonatomic, assign) bool useCarDistanceMeasure;
@property (nonatomic, assign) bool useTrajectoryEstimator;
@property (nonatomic, assign) bool saveTelemetry;
@property (nonatomic, assign) bool useDetectionMapping;
@property (nonatomic, assign) bool useMergeMLModelLaunch;

@property (nonatomic, assign) MBVFPSPolicy segmentationFPSPolicy;

@property (nonatomic, assign) MBVFPSPolicy detectionFPSPolicy;

- (void)setSegmentationFixedFPS:(float)fps;
- (void)setSegmentationDynamicFPSWithMinFPS:(float)minFPS maxFPS:(float)maxFPS NS_SWIFT_NAME(setSegmentationDynamicFPS(minFPS:maxFPS:));
- (void)setDetectionFixedFPS:(float)fps;
- (void)setDetectionDynamicFPSWithMinFPS:(float)minFPS maxFPS:(float)maxFPS NS_SWIFT_NAME(setDetectionDynamicFPS(minFPS:maxFPS:));

@end

NS_ASSUME_NONNULL_END
