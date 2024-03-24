#import "CBBlueLightClient.h"

@interface CBClient : NSObject
@property(atomic) CBBlueLightClient *blueLightClient;
+ (BOOL)supportsBlueLightReduction;
+ (BOOL)supportsAdaptation;
@end