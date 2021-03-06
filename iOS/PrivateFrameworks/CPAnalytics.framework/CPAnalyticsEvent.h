//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPAnalyticsSystemProperties, NSDate, NSDictionary, NSString;

@interface CPAnalyticsEvent : NSObject
{
    NSString *_name;
    NSDate *_timestamp;
    NSDictionary *_payload;
    CPAnalyticsSystemProperties *_systemProperties;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties; // @synthesize systemProperties=_systemProperties;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyRawPayload;
- (id)propertyForKey:(id)arg1;
- (id)initWithName:(id)arg1 payload:(id)arg2 systemProperties:(id)arg3;

@end

