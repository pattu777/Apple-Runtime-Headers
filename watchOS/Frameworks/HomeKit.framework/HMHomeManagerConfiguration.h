//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>

@class HMFLocationAuthorization, NSOperationQueue, NSURL;

@interface HMHomeManagerConfiguration : NSObject <NSCopying, NSMutableCopying>
{
    unsigned int _cachePolicy;
    _Bool _shouldConnect;
    unsigned int _options;
    _Bool _discretionary;
    NSOperationQueue *_delegateQueue;
    HMFLocationAuthorization *_locationAuthorization;
    NSURL *_cacheURL;
}

+ (id)defaultPrivateConfiguration;
+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(readonly) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(readonly) HMFLocationAuthorization *locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property(readonly) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, getter=isDiscretionary) _Bool discretionary; // @synthesize discretionary=_discretionary;
@property(readonly) unsigned int options; // @synthesize options=_options;
@property(nonatomic) _Bool shouldConnect; // @synthesize shouldConnect=_shouldConnect;
@property(nonatomic) unsigned int cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) _Bool canUseCache;
- (id)initWithOptions:(unsigned int)arg1 cachePolicy:(unsigned int)arg2;
- (id)init;

@end

