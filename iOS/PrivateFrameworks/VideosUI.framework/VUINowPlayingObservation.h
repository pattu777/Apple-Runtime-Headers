//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingObservation : NSObject
{
    _Bool _playing;
    NSString *_nowPlayingAppBundleIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nowPlayingAppBundleIdentifier; // @synthesize nowPlayingAppBundleIdentifier=_nowPlayingAppBundleIdentifier;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 isPlaying:(_Bool)arg2;

@end

