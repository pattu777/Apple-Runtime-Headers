//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BCSRemoteFetch : NSObject
{
}

+ (id)createSessionForClientBundleID:(id)arg1;
+ (id)cloudServerRequestHelper;
+ (id)_completionPool;
+ (id)_requestDispatchQueue;
- (id)dequeueCompletionBlocksForRequest:(id)arg1;
- (id)_dequeueCompletionBlocksForRequestHash:(id)arg1 inCompletionPool:(id)arg2;
- (void)enqueueCompletionBlock:(CDUnknownBlockType)arg1 forRequest:(id)arg2 isDuplicateRequest:(_Bool *)arg3;
- (void)_enqueueCompletionBlock:(CDUnknownBlockType)arg1 forRequestHash:(id)arg2 inCompletionPool:(id)arg3 isDuplicateRequest:(_Bool *)arg4;
- (id)_hashForRequest:(id)arg1;

@end

