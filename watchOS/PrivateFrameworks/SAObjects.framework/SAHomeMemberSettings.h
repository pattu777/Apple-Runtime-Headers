//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString, SAPerson, SAVoice;

@interface SAHomeMemberSettings : AceObject <SAAceSerializable>
{
}

+ (id)homeMemberSettingsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)homeMemberSettings;
@property(copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;
@property(retain, nonatomic) SAVoice *ttsVoice;
@property(copy, nonatomic) NSString *temperatureUnit;
@property(copy, nonatomic) NSString *region;
@property(copy, nonatomic) NSString *preferredLanguage;
@property(copy, nonatomic) NSArray *parentalRestrictions;
@property(retain, nonatomic) SAPerson *meCard;
@property(copy, nonatomic) NSString *countryCode;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

