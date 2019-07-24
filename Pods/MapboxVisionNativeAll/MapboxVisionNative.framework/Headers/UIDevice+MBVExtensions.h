#import <UIKit/UIDevice.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (MBVExtensions)

/**
 *  Model identifier of device (e.g. iPhone10,4).
 */
@property (nonatomic, readonly) NSString *modelID;
@end

NS_ASSUME_NONNULL_END
