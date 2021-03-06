//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CKNavigationButtonView, UIImageView;
@protocol CKNavigationBarCanvasViewDelegate;

@interface CKNavigationBarCanvasView : UIView
{
    _Bool _enforceLeftItemViewsAlignmentToCenter;
    _Bool _keepTitleViewCentered;
    _Bool _isBusinessChat;
    _Bool _videoEnabled;
    _Bool _audioEnabled;
    _Bool _shouldAnimateAvatarLayoutChanges;
    _Bool _isInEditingMode;
    _Bool _isShowingControls;
    _Bool _multiwayAudioButtonHidden;
    _Bool _isTearingDownButtonViews;
    _Bool _isAnimatingAvatars;
    _Bool _ignoreNextWidthChange;
    id <CKNavigationBarCanvasViewDelegate> _delegate;
    UIView *_titleView;
    UIView *_leftItemView;
    UIView *_rightItemView;
    double _preferredHeight;
    long long _statusIndicatorType;
    long long _joinButtonStyle;
    CKNavigationButtonView *_buttonViewFaceTimeAudio;
    CKNavigationButtonView *_buttonViewFaceTimeVideo;
    CKNavigationButtonView *_buttonViewInfo;
    UIImageView *_statusIndicatorImageView;
}

+ (double)preferredLandscapeHeightForRegularWidth;
+ (double)preferredLandscapeHeightForCompactWidth;
+ (double)minHeight;
+ (double)heightWithoutButtonViewsContactless;
+ (double)heightWithButtonViewsContactless;
+ (double)heightWithButtonViews;
+ (double)heightWithoutButtonViews;
+ (double)maxHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreNextWidthChange; // @synthesize ignoreNextWidthChange=_ignoreNextWidthChange;
@property(nonatomic) _Bool isAnimatingAvatars; // @synthesize isAnimatingAvatars=_isAnimatingAvatars;
@property(nonatomic) _Bool isTearingDownButtonViews; // @synthesize isTearingDownButtonViews=_isTearingDownButtonViews;
@property(retain, nonatomic) UIImageView *statusIndicatorImageView; // @synthesize statusIndicatorImageView=_statusIndicatorImageView;
@property(retain, nonatomic) CKNavigationButtonView *buttonViewInfo; // @synthesize buttonViewInfo=_buttonViewInfo;
@property(retain, nonatomic) CKNavigationButtonView *buttonViewFaceTimeVideo; // @synthesize buttonViewFaceTimeVideo=_buttonViewFaceTimeVideo;
@property(retain, nonatomic) CKNavigationButtonView *buttonViewFaceTimeAudio; // @synthesize buttonViewFaceTimeAudio=_buttonViewFaceTimeAudio;
@property(nonatomic) long long joinButtonStyle; // @synthesize joinButtonStyle=_joinButtonStyle;
@property(nonatomic) long long statusIndicatorType; // @synthesize statusIndicatorType=_statusIndicatorType;
@property(nonatomic) _Bool multiwayAudioButtonHidden; // @synthesize multiwayAudioButtonHidden=_multiwayAudioButtonHidden;
@property(nonatomic) _Bool isShowingControls; // @synthesize isShowingControls=_isShowingControls;
@property(nonatomic) _Bool isInEditingMode; // @synthesize isInEditingMode=_isInEditingMode;
@property(nonatomic) _Bool shouldAnimateAvatarLayoutChanges; // @synthesize shouldAnimateAvatarLayoutChanges=_shouldAnimateAvatarLayoutChanges;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic) _Bool isBusinessChat; // @synthesize isBusinessChat=_isBusinessChat;
@property(nonatomic) _Bool keepTitleViewCentered; // @synthesize keepTitleViewCentered=_keepTitleViewCentered;
@property(nonatomic) _Bool enforceLeftItemViewsAlignmentToCenter; // @synthesize enforceLeftItemViewsAlignmentToCenter=_enforceLeftItemViewsAlignmentToCenter;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(retain, nonatomic) UIView *rightItemView; // @synthesize rightItemView=_rightItemView;
@property(retain, nonatomic) UIView *leftItemView; // @synthesize leftItemView=_leftItemView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <CKNavigationBarCanvasViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)_calculateFrameForButtonPositionType:(long long)arg1 shouldOffset:(_Bool)arg2;
- (void)layoutSubviews;
- (void)layoutTitleViewIfNeeded:(struct CGRect)arg1;
- (struct UIEdgeInsets)systemMinimumLayoutMarginsFromDelegate;
- (struct UIEdgeInsets)safeAreaInsets;
- (_Bool)_canShowAvatarView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_shouldUseTallHeight;
- (void)_addLaserEffectToButton:(id)arg1;
- (void)clearAllItemViews;
- (void)removeButtonViewsIfNeeded;
- (void)_tearDownButtonContainer;
- (void)_updateJoinButtonStyle;
- (void)_setupButtonContainer;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 preferredHeight:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

