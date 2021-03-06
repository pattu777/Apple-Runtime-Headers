//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface ECEmailAddressFormatter : NSFormatter
{
    long long _style;
    _Bool _shouldIncludeDisplayName;
}

@property(nonatomic) _Bool shouldIncludeDisplayName; // @synthesize shouldIncludeDisplayName=_shouldIncludeDisplayName;
- (id)_stringFromGroupEmailAddress:(id)arg1;
- (id)_groupListString:(id)arg1;
- (id)_stringFromMailboxAddress:(id)arg1 includeDisplayName:(_Bool)arg2;
- (id)_stringFromEmailAddressList:(id)arg1 includeDisplayName:(_Bool)arg2;
- (id)_stringFromEmailAddressConvertible:(id)arg1 includeDisplayName:(_Bool)arg2;
- (id)_stringFromEmailAddress:(id)arg1 includeDisplayName:(_Bool)arg2;
- (id)stringFromEmailAddressList:(id)arg1;
- (id)stringFromEmailAddressConvertible:(id)arg1;
- (id)stringFromEmailAddress:(id)arg1;
- (id)emailAddressFromString:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)init;

@end

