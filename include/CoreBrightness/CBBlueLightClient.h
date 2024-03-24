#import <Foundation/Foundation.h>

@interface CBBlueLightClient : NSObject
- (BOOL)getStrength:(float *)strength;
- (BOOL)setStrength:(float)strength commit:(BOOL)commit;
@end