//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImaging/PABufferImageBackingTile.h>

#import <PAImaging/PAMutableImageTile-Protocol.h>

@class NSString;

@interface PAMutableBufferImageBackingTile : PABufferImageBackingTile <PAMutableImageTile>
{
}

- (BOOL)writeBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)writeTextureRegion:(id)arg1 withContext:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)_mutableBuffer;
- (id)initWithBuffer:(id)arg1 tileIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

