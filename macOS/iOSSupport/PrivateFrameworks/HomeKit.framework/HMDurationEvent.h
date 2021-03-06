//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMTimeEvent.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@interface HMDurationEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying>
{
    double _duration;
}

+ (BOOL)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_updateDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (void)setOffset:(double)arg1;
- (id)initWithDict:(id)arg1 duration:(double)arg2;
- (id)initWithDuration:(double)arg1;

@end

