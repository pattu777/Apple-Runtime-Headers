//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HFValueTransformer : NSObject
{
    Class _valueClass;
    CDUnknownBlockType _transformBlock;
    CDUnknownBlockType _reverseTransformBlock;
}

+ (id)identityTransformer;
+ (id)transformerForValueClass:(Class)arg1 transformBlock:(CDUnknownBlockType)arg2 reverseTransformBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reverseTransformBlock; // @synthesize reverseTransformBlock=_reverseTransformBlock;
@property(copy, nonatomic) CDUnknownBlockType transformBlock; // @synthesize transformBlock=_transformBlock;
@property(retain, nonatomic) Class valueClass; // @synthesize valueClass=_valueClass;
- (id)valueForTransformedValue:(id)arg1;
- (id)transformedValueForValue:(id)arg1;

@end

