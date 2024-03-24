#import <ControlCenterUIKit/CCUILabeledRoundButtonViewController.h>
#import <ControlCenterUIKit/CCUISliderModuleBackgroundViewController.h>

@interface CCUIDisplayBackgroundViewController
    : CCUISliderModuleBackgroundViewController
@property(nonatomic) CCUILabeledRoundButtonViewController *nightShiftButton;
@property(nonatomic) CCUILabeledRoundButtonViewController *styleModeButton;
@property(nonatomic) CCUILabeledRoundButtonViewController *trueToneButton;
- (void)setFooterButtons:
    (NSArray<CCUILabeledRoundButtonViewController *> *)footerButtons;
- (NSString *)_subtitleForTrueToneEnabled:(BOOL)enabled;
- (void)_updateState;
@end