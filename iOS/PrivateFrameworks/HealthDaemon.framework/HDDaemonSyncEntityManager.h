//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDaemon, NSArray, NSDictionary;

@interface HDDaemonSyncEntityManager : NSObject
{
    HDDaemon *_daemon;
    struct os_unfair_lock_s _lock;
    NSArray *_lock_allOrderedSyncEntities;
    NSDictionary *_lock_allSyncEntitiesByIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *syncEntitiesByIdentifier;
@property(readonly, copy, nonatomic) NSArray *orderedSyncEntities;
- (void)_lock_loadSyncEntities;
- (id)initWithDaemon:(id)arg1;

@end

