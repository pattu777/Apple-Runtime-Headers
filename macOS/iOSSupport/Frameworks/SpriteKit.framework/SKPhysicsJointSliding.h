//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSliding : SKPhysicsJoint
{
    BOOL _shouldEnableLimits;
    double _lowerDistanceLimit;
    double _upperDistanceLimit;
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3 axis:(struct CGVector)arg4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) double upperDistanceLimit; // @synthesize upperDistanceLimit=_upperDistanceLimit;
@property(nonatomic) double lowerDistanceLimit; // @synthesize lowerDistanceLimit=_lowerDistanceLimit;
@property(nonatomic) BOOL shouldEnableLimits; // @synthesize shouldEnableLimits=_shouldEnableLimits;

@end

