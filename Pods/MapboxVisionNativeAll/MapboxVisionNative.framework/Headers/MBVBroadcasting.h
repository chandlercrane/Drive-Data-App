#import <Foundation/Foundation.h>

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

VISION_CORE_NATIVE_API NS_SWIFT_NAME(Broadcasting) @interface MBVBroadcasting : NSObject

typedef void (^DidReceiveBroadcastingStarted)(NSString *);

- (instancetype)initWithIP:(NSString *)ip port:(int)port;
- (void)start;
- (void)stop;
- (void)setDidReceiveBroadcastingStarted:(DidReceiveBroadcastingStarted)handler;

@end

NS_ASSUME_NONNULL_END
