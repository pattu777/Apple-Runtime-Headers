//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSObject-Protocol.h>

@class NSValue;
@protocol UIVectorOperatable;

@protocol UIVectorOperatable <NSObject, NSCopying>
+ (id <UIVectorOperatable>)epsilon;
+ (id <UIVectorOperatable>)zero;
- (id <UIVectorOperatable>)addVector:(id <UIVectorOperatable>)arg1;
- (id <UIVectorOperatable>)multiplyByVector:(id <UIVectorOperatable>)arg1;
- (id <UIVectorOperatable>)multiplyByScalar:(float)arg1;
- (NSValue *)getNSValue;
- (void)reinitWithVector:(id <UIVectorOperatable>)arg1;
- (id <UIVectorOperatable>)copy;
- (id)getValue;
- (_Bool)isUndefined;
- (_Bool)isApproximatelyEqualTo:(id <UIVectorOperatable>)arg1 withinEpsilon:(id <UIVectorOperatable>)arg2;
- (_Bool)isApproximatelyEqualTo:(id <UIVectorOperatable>)arg1;
- (void)integrateWithVelocity:(id <UIVectorOperatable>)arg1 target:(id <UIVectorOperatable>)arg2 intermediateTarget:(id <UIVectorOperatable>)arg3 intermediateTargetVelocity:(id <UIVectorOperatable>)arg4 parameters:(CDStruct_c63719c4)arg5 state:(CDStruct_e16b0789)arg6 delta:(double)arg7;
- (id <UIVectorOperatable>)interpolateTo:(id <UIVectorOperatable>)arg1 progress:(float)arg2;
@end

