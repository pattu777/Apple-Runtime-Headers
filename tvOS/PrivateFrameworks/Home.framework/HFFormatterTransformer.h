//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface HFFormatterTransformer : NSFormatter
{
    NSFormatter *_sourceFormatter;
    CDUnknownBlockType _transformBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType transformBlock; // @synthesize transformBlock=_transformBlock;
@property(copy, nonatomic) NSFormatter *sourceFormatter; // @synthesize sourceFormatter=_sourceFormatter;
- (id)stringForObjectValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSourceFormatter:(id)arg1 transformBlock:(CDUnknownBlockType)arg2;

@end

