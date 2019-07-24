#import <CoreML/CoreML.h>
#import <Foundation/Foundation.h>

@interface ArgmaxCustomLayer : NSObject <MLCustomLayer>

+ (void)argmaxWithSinglePrecision:(MLMultiArray *)input output:(MLMultiArray **)output;

@end
