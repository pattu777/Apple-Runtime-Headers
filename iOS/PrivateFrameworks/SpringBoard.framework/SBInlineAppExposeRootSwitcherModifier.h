//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBFluidSwitcherRootSwitcherModifier.h>

@class NSString;

@interface SBInlineAppExposeRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier
{
    long long _layoutRole;
    _Bool _overlay;
    NSString *_bundleIdentifier;
    struct UIRectCornerRadii _fullscreenCornerRadii;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIRectCornerRadii fullscreenCornerRadii; // @synthesize fullscreenCornerRadii=_fullscreenCornerRadii;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)transitionModifierForInlineTransitionEvent:(id)arg1;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)newMultitaskingModifierFromMultitaskingModifier:(id)arg1;
- (double)floatingDockHeight;
- (id)initWithBundleIdentifier:(id)arg1 layoutRole:(long long)arg2 overlay:(_Bool)arg3;

@end

