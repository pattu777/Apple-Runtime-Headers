//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface AVMomentCaptureMovieRecordingResolvedSettings : NSObject
{
    long long _uniqueID;
    _Bool _torchEnabled;
    NSURL *_movieURL;
    NSURL *_spatialOverCaptureURL;
    CDStruct_79c71658 _movieDimensions;
}

+ (id)movieRecordingResolvedSettingsWithUniqueID:(long long)arg1 torchEnabled:(_Bool)arg2 movieURL:(id)arg3 spatialOverCaptureURL:(id)arg4 movieDimensions:(CDStruct_79c71658)arg5;
@property(readonly) CDStruct_79c71658 movieDimensions; // @synthesize movieDimensions=_movieDimensions;
@property(readonly) NSURL *spatialOverCaptureURL; // @synthesize spatialOverCaptureURL=_spatialOverCaptureURL;
@property(readonly) NSURL *movieURL; // @synthesize movieURL=_movieURL;
@property(readonly, getter=isTorchEnabled) _Bool torchEnabled; // @synthesize torchEnabled=_torchEnabled;
@property(readonly) long long uniqueID; // @synthesize uniqueID=_uniqueID;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (id)_initWithUniqueID:(long long)arg1 torchEnabled:(_Bool)arg2 movieURL:(id)arg3 spatialOverCaptureURL:(id)arg4 movieDimensions:(CDStruct_79c71658)arg5;

@end

