//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface ReportDampener : NSObject
{
    NSDate *_suppressReportingUntil;
    unsigned long long _numSuppressedReports;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long numSuppressedReports; // @synthesize numSuppressedReports=_numSuppressedReports;
@property(retain, nonatomic) NSDate *suppressReportingUntil; // @synthesize suppressReportingUntil=_suppressReportingUntil;

@end

