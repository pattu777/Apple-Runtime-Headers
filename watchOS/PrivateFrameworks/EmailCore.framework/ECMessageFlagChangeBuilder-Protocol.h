//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol ECMessageFlagChangeBuilder
@property(nonatomic) int reason;
- (void)changesFlagColorTo:(unsigned int)arg1;
- (void)changesJunkLevelTo:(unsigned int)arg1;
- (void)changesJunkLevelSetByUserTo:(_Bool)arg1;
- (void)changesRedirectedTo:(_Bool)arg1;
- (void)changesForwardedTo:(_Bool)arg1;
- (void)changesDraftTo:(_Bool)arg1;
- (void)changesFlaggedTo:(_Bool)arg1;
- (void)changesRepliedTo:(_Bool)arg1;
- (void)changesDeletedTo:(_Bool)arg1;
- (void)changesReadTo:(_Bool)arg1;
@end

