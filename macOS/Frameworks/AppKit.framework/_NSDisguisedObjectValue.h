//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSDisguisedObjectValue : NSObject
{
    void *_disguisedReference;
}

+ (id)conditionallyReveal:(BOOL)arg1 object:(id)arg2;
+ (id)conditionallyDisguise:(BOOL)arg1 object:(id)arg2;
- (void)dealloc;
@property(readonly) id objectValue;
- (id)initWithObject:(id)arg1;

@end

