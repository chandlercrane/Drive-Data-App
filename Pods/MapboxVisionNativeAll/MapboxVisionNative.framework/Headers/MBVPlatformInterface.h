#import <CoreMotion/CoreMotion.h>
#import <Foundation/Foundation.h>
#import "MBVImage.h"
#import "MBVTelemetryEntry.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(PlatformInterface) @protocol MBVPlatformInterface <NSObject>
- (void)makeVideoClip:(float)startTime end:(float)endTime;
- (void)sendTelemetry:(NSString *)name entries:(NSArray<MBVTelemetryEntry *> *)entries;
- (void)saveImage:(MBVImage *)image path:(NSString *)path NS_SWIFT_NAME(save(image:path:));
@end

NS_ASSUME_NONNULL_END
