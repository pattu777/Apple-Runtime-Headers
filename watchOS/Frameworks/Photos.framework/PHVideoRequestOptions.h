//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHMediaRequestThreadingOptions-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PHVideoRequestOptions : NSObject <PHMediaRequestThreadingOptions>
{
    _Bool _networkAccessAllowed;
    _Bool _streamingAllowed;
    _Bool _videoComplementAllowed;
    _Bool _allowMediumHighQuality;
    _Bool _restrictToPlayableOnCurrentDevice;
    int _version;
    int _deliveryMode;
    CDUnknownBlockType _progressHandler;
    int _streamingVideoIntent;
    int _contentMode;
    NSObject<OS_dispatch_queue> *_resultHandlerQueue;
    struct CGSize _targetSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // @synthesize resultHandlerQueue=_resultHandlerQueue;
@property(nonatomic) _Bool restrictToPlayableOnCurrentDevice; // @synthesize restrictToPlayableOnCurrentDevice=_restrictToPlayableOnCurrentDevice;
@property(nonatomic) int contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic, getter=isMediumHighQualityAllowed) _Bool allowMediumHighQuality; // @synthesize allowMediumHighQuality=_allowMediumHighQuality;
@property(nonatomic, getter=isVideoComplementAllowed) _Bool videoComplementAllowed; // @synthesize videoComplementAllowed=_videoComplementAllowed;
@property(nonatomic) int streamingVideoIntent; // @synthesize streamingVideoIntent=_streamingVideoIntent;
@property(nonatomic, getter=isStreamingAllowed) _Bool streamingAllowed; // @synthesize streamingAllowed=_streamingAllowed;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) int deliveryMode; // @synthesize deliveryMode=_deliveryMode;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (_Bool)isSynchronous;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

