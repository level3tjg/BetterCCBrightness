#import <Foundation/Foundation.h>

@protocol MCProfileConnectionObserver <NSObject>
@optional
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)notification userInfo:(id)userInfo;
@end