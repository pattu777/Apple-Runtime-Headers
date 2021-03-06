//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UISlidingBarConfiguration, UISlidingBarStateRequest, UIViewController, _UIPanelAnimationState;
@protocol UIPanelControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPanelInternalState : NSObject <NSCopying>
{
    UIViewController *_mainViewController;
    UIViewController *_leadingViewController;
    UIViewController *_trailingViewController;
    UIViewController *_collapsedViewController;
    UIViewController *_preservedDetailController;
    id <UIPanelControllerDelegate> _delegate;
    UISlidingBarConfiguration *_configuration;
    UISlidingBarStateRequest *_stateRequest;
    UISlidingBarStateRequest *_externallyAnimatingStateRequest;
    int _externallyAnimatingAffectedSides;
    _UIPanelAnimationState *_animationState;
    int _collapsedState;
    float _keyboardAdjustment;
}

- (void).cxx_destruct;
@property(nonatomic) float keyboardAdjustment; // @synthesize keyboardAdjustment=_keyboardAdjustment;
@property(nonatomic) int collapsedState; // @synthesize collapsedState=_collapsedState;
@property(retain, nonatomic) _UIPanelAnimationState *animationState; // @synthesize animationState=_animationState;
@property(nonatomic) int externallyAnimatingAffectedSides; // @synthesize externallyAnimatingAffectedSides=_externallyAnimatingAffectedSides;
@property(copy, nonatomic) UISlidingBarStateRequest *externallyAnimatingStateRequest; // @synthesize externallyAnimatingStateRequest=_externallyAnimatingStateRequest;
@property(copy, nonatomic) UISlidingBarStateRequest *stateRequest; // @synthesize stateRequest=_stateRequest;
@property(copy, nonatomic) UISlidingBarConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <UIPanelControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *preservedDetailController; // @synthesize preservedDetailController=_preservedDetailController;
@property(retain, nonatomic) UIViewController *collapsedViewController; // @synthesize collapsedViewController=_collapsedViewController;
@property(retain, nonatomic) UIViewController *trailingViewController; // @synthesize trailingViewController=_trailingViewController;
@property(retain, nonatomic) UIViewController *leadingViewController; // @synthesize leadingViewController=_leadingViewController;
@property(retain, nonatomic) UIViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (id)_stateForInteractiveRequest:(id)arg1 withAffectedSides:(int)arg2 inPossibleStates:(id)arg3;
- (id)computePossibleStatesGivenParentView:(id)arg1 withSize:(struct CGSize)arg2;
- (id)_allowedTrailingWidthsForParentWidth:(float)arg1;
- (id)_allowedLeadingWidthsForParentWidth:(float)arg1;
- (float)_defaultWidthForViewController:(id)arg1 parentWidth:(float)arg2;
- (id)_allowedWidthsForViewController:(id)arg1 parentWidth:(float)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

