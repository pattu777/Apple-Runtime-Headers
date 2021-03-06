//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Carousel/NTKClockIconZoomAnimator-Protocol.h>

@class CSLClockZoomAttributes, CSLShapeView, NSString, NTKClockIconView, UIView;

@interface CSLClockIconZoomViewController : UIViewController <NTKClockIconZoomAnimator>
{
    float _minDiameter;
    float _maxDiameter;
    NTKClockIconView *_iconView;
    UIView *_zoomingIconCircleView;
    UIView *_zoomingIconTimeView;
    UIView *_zoomingContainerView;
    float _lastZoomFraction;
    _Bool _needsToSendInitialEvent;
    CSLClockZoomAttributes *_zoomAttributes;
    struct CGRect _pendingIconFrame;
    CSLShapeView *_maskView;
    CSLShapeView *_backgroundIcon;
    _Bool _usesLocalZoomBehavior;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usesLocalZoomBehavior; // @synthesize usesLocalZoomBehavior=_usesLocalZoomBehavior;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)cleanupAfterZoom;
- (void)setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)_centerView:(id)arg1;
- (void)prepareToZoomActivatingViewInView:(id)arg1 withIconView:(id)arg2 minDiameter:(float)arg3 maxDiameter:(float)arg4;
- (void)prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (void)_updateBackgroundIconAtFraction:(float)arg1 diameter:(float)arg2;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

