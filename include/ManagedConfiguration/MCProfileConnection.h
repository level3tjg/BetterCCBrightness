#import <Foundation/Foundation.h>
#import "MCProfileConnectionObserver.h"

@interface MCProfileConnection : NSObject
- (void)registerObserver:(id<MCProfileConnectionObserver>)observer;
- (void)addObserver:(id<MCProfileConnectionObserver>)observer;
- (id)userValueForSetting:(NSString *)setting;
- (void)setValue:(id)value forSetting:(NSString *)setting;
+ (instancetype)sharedConnection;
@end