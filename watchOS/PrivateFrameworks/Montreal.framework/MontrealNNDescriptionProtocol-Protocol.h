//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Montreal/NSObject-Protocol.h>

@class MontrealLogIndent, NSDictionary, NSMutableString, NSString;

@protocol MontrealNNDescriptionProtocol <NSObject>
- (NSDictionary *)jsonDescription;
- (void)description:(NSMutableString *)arg1 indent:(MontrealLogIndent *)arg2;

@optional
- (void)generateJSONAtPath:(NSString *)arg1;
- (id)checkForValidity;
@end

