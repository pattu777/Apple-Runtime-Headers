//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderCore/NSCopying-Protocol.h>

@interface SCRCProcessIdentifier : NSObject <NSCopying>
{
    struct ProcessSerialNumber _psn;
}

+ (id)processIdentifierWithPSN:(struct ProcessSerialNumber)arg1;
- (struct ProcessSerialNumber)psn;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPSN:(struct ProcessSerialNumber)arg1;

@end

