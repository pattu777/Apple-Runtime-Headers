//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/MKAnnotation-Protocol.h>

@protocol MKOverlay <MKAnnotation>
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@optional
- (BOOL)canReplaceMapContent;
- (BOOL)intersectsMapRect:(CDStruct_02837cd9)arg1;
@end

