//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

#import <IBFoundation/IBICCoreUISlotComponent-Protocol.h>

@class NSString;

@interface IBICPlatform : IBICSlotComponent <IBICCoreUISlotComponent>
{
    NSString *_latestVersion;
    long long _coreUIValue;
}

+ (id)universalPlatform;
+ (id)tvOSPlatform;
+ (id)watchOSPlatform;
+ (id)OSXPlatform;
+ (id)iOSPlatform;
+ (id)displayName;
+ (id)contentsJSONKey;
+ (id)itemWithIdentifier:(id)arg1 title:(id)arg2 latestVersion:(id)arg3 coreUIValue:(long long)arg4 displayOrder:(double)arg5;
+ (id)unspecifiedValuePlaceholder;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long coreUIValue; // @synthesize coreUIValue=_coreUIValue;
@property(readonly, nonatomic) NSString *latestVersion; // @synthesize latestVersion=_latestVersion;
- (id)idioms;
@property(readonly, nonatomic) NSString *latestMajorVersion;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 latestVersion:(id)arg3 coreUIValue:(long long)arg4 displayOrder:(double)arg5;
- (long long)componentID;
- (id)xctest_defaultOptions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

