//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class NSLayoutConstraint, NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordTimelineContentSubtitleCell : WDMedicalRecordGroupableCell
{
    NSString *_titleString;
    NSString *_subtitleString;
    _Bool _showDisclosureIndicator;
    _Bool _useRegularFontForSubtitle;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_disclosureChevronView;
    NSLayoutConstraint *_titlePillConstraint;
    NSLayoutConstraint *_titleChevronConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *titleChevronConstraint; // @synthesize titleChevronConstraint=_titleChevronConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titlePillConstraint; // @synthesize titlePillConstraint=_titlePillConstraint;
@property(retain, nonatomic) UIView *disclosureChevronView; // @synthesize disclosureChevronView=_disclosureChevronView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool useRegularFontForSubtitle; // @synthesize useRegularFontForSubtitle=_useRegularFontForSubtitle;
@property(nonatomic) _Bool showDisclosureIndicator; // @synthesize showDisclosureIndicator=_showDisclosureIndicator;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)setupSubviews;

@end

