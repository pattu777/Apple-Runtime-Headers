//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <nfshared/NFAWDEventProtocol-Protocol.h>

@class NSString;

@interface NFAWDCRSActivationTimerExpired : NSObject <NFAWDEventProtocol>
{
    unsigned int _version;
    unsigned int _status;
}

@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

