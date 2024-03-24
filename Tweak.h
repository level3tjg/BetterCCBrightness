#import <ControlCenterUIKit/CCUIContinuousSliderView.h>
#import <ControlCenterUIKit/CCUIControlCenterMaterialView.h>
#import <ControlCenterUIKit/CCUILabeledRoundButtonViewController.h>
#import <CoreBrightness/CBClient.h>
#import <DisplayModule/CCUIDisplayBackgroundViewController.h>
#import <ManagedConfiguration/MCProfileConnection.h>
#import <Masonry/Masonry.h>
#import <MaterialKit/MTMaterialView.h>
#import <SpringBoard/SBHarmonyController.h>
#import <SpringBoardUIServices/SBUIProudLockIconView.h>
#import <dlfcn.h>
#import <mach-o/dyld.h>

// CCUI Layout
extern CGFloat CCUISliderExpandedModuleContinuousCornerRadius();
extern CGFloat CCUISliderExpandedContentModuleHeight();
extern CGFloat CCUISliderExpandedContentModuleWidth();
extern BOOL CCUILayoutShouldBePortrait(UIView *);

// Auto-Brightness
extern BOOL _AXSAutoBrightnessEnabled();
extern void BKSDisplayBrightnessSetAutoBrightnessEnabled(BOOL);

// Reduce White Point
extern BOOL _AXSReduceWhitePointEnabled();
extern void _AXSSetReduceWhitePointEnabled(BOOL);
extern double MADisplayFilterPrefGetReduceWhitePointIntensity();
extern void MADisplayFilterPrefSetReduceWhitePointIntensity(double);

// Night Shift
// Use CBBlueLightClient

@interface UIView ()
@property(nonatomic, setter=_setContinuousCornerRadius:)
    CGFloat _continuousCornerRadius;
@end

@interface CCUILabeledRoundButtonViewController ()
@property(nonatomic) BOOL useAlternateBackground;
@end

@interface CCUICAPackageView ()
@property(nonatomic) CGFloat scale;
@end

@interface CCUIDisplayBackgroundViewController () <MCProfileConnectionObserver>
@property(nonatomic) CCUILabeledRoundButtonViewController *autoBrightnessButton;
@property(nonatomic) CCUILabeledRoundButtonViewController *autoLockButton;
@property(nonatomic) NSArray<CCUILabeledRoundButtonViewController *> *buttons;
@property(nonatomic) MTMaterialView *nightShiftMaterialView;
@property(nonatomic) UILabel *nightShiftSliderLabel;
@property(nonatomic) CCUIContinuousSliderView *nightShiftSliderView;
@property(nonatomic) BOOL reduceWhitePointWasEnabled;
@property(nonatomic) CCUILabeledRoundButtonViewController *whitePointButton;
@property(nonatomic) MTMaterialView *whitePointMaterialView;
@property(nonatomic) UILabel *whitePointSliderLabel;
@property(nonatomic) CCUIContinuousSliderView *whitePointSliderView;
@property(nonatomic) BOOL observingStateChanges;
@property(nonatomic) NSNumber *previousMaxInactivity;
- (void)startObservingStateChangesIfNecessary;
- (void)startObservingStateChanges;
- (void)_toggleAutoLock;
- (void)_toggleAutoBrightness;
- (void)_toggleReduceWhitePoint;
@end