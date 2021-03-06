//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TVImageProxy, TVImageView, UIImage, UILabel;

@interface TVHeaderView : UIView
{
    TVImageView *_headerImageView;
    long long _horizontalAlignment;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    _Bool _useUberImageLayout;
    struct UIEdgeInsets _imageInsets;
}

+ (id)titleFont;
+ (id)titleColor;
+ (id)subtitleFont;
+ (id)subtitleColor;
- (void).cxx_destruct;
@property(nonatomic) _Bool useUberImageLayout; // @synthesize useUberImageLayout=_useUberImageLayout;
@property(nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_imageInsets;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(readonly, nonatomic) UILabel *titleLabel;
@property(readonly, nonatomic) TVImageView *headerImageView;
@property(readonly, nonatomic) UILabel *subtitleLabel;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *subtitle;
- (void)setHeaderImageProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) TVImageProxy *headerImageProxy;
@property(retain, nonatomic) UIImage *headerImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

