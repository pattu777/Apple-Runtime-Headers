//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICRadioContentReference.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ICRadioLibraryArtistContentReference : ICRadioContentReference <NSCopying, NSSecureCoding>
{
    NSString *_artistName;
    NSNumber *_representativeCloudIdentifier;
    NSNumber *_storeIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSNumber *representativeCloudIdentifier; // @synthesize representativeCloudIdentifier=_representativeCloudIdentifier;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)matchDictionary;
- (int)contentType;

@end

