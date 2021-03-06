//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TeaUI/NSObject-Protocol.h>

@class TUDynamicBarAnimator;

@protocol TUDynamicBarAnimatorDelegate <NSObject>
- (void)dynamicBarAnimatorWillLeaveSteadyState:(TUDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(TUDynamicBarAnimator *)arg1;
- (BOOL)dynamicBarAnimator:(TUDynamicBarAnimator *)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)dynamicBarAnimatorOutputsDidChange:(TUDynamicBarAnimator *)arg1;
@end

