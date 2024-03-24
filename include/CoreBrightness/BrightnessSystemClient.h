#import <Foundation/Foundation.h>

@interface BrightnessSystemClient : NSObject
- (id)copyPropertyForKey:(NSString *)key;
- (void)setProperty:(id)value forKey:(NSString *)key;
@end