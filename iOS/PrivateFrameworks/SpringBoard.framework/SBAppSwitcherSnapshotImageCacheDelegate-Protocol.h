//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, SBAppLayout, SBAppSwitcherSnapshotImageCache;

@protocol SBAppSwitcherSnapshotImageCacheDelegate <NSObject>
- (struct CGSize)snapshotSizeForItemWithRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 interfaceOrientation:(long long)arg3 inImageCache:(SBAppSwitcherSnapshotImageCache *)arg4;
- (NSArray *)defaultAppLayoutsForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (NSArray *)appLayoutsForWhichToGenerateFullSizeSnapshotsInImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (double)scaleForDownscaledSnapshotsForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (long long)orientationForSnapshotOfAppLayout:(SBAppLayout *)arg1 inImageCache:(SBAppSwitcherSnapshotImageCache *)arg2;
- (NSArray *)highPriorityAppLayoutsForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (_Bool)biasForwardForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (struct _NSRange)visibleAppLayoutRangeForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (NSArray *)appLayoutsForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
@end

