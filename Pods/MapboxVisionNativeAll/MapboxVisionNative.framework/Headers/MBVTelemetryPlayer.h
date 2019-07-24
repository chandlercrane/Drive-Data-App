#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

VISION_CORE_NATIVE_API NS_SWIFT_NAME(TelemetryPlayer) @interface MBVTelemetryPlayer : NSObject

- (void)readFromFolder:(NSString *)folderPath;

- (NSInteger)getFrameIndex;

- (void)setCurrentTime:(NSUInteger)timeMS;

- (void)updateDataWithFrameSize:(CGSize)frameSize srcSize:(CGSize)srcSize;

- (NSInteger)moveNextFrame;

- (NSInteger)getTimeOffset:(CGFloat)factor;

- (void)scrollData:(NSUInteger)offset;

@end

NS_ASSUME_NONNULL_END
