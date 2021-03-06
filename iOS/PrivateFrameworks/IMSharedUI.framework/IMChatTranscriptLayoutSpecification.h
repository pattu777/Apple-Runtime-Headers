//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUI/NSCopying-Protocol.h>

@interface IMChatTranscriptLayoutSpecification : NSObject <NSCopying>
{
    double _maximumBubbleWidth;
    double _topMargin;
    double _bottomMargin;
    double _leadingMargin;
    double _trailingMargin;
    double _zeroVerticalItemSpacing;
    double _smallVerticalItemSpacing;
    double _mediumVerticalItemSpacing;
    double _largeVerticalItemSpacing;
    struct CGSize _layoutBoundsSize;
}

@property(nonatomic) double largeVerticalItemSpacing; // @synthesize largeVerticalItemSpacing=_largeVerticalItemSpacing;
@property(nonatomic) double mediumVerticalItemSpacing; // @synthesize mediumVerticalItemSpacing=_mediumVerticalItemSpacing;
@property(nonatomic) double smallVerticalItemSpacing; // @synthesize smallVerticalItemSpacing=_smallVerticalItemSpacing;
@property(nonatomic) double zeroVerticalItemSpacing; // @synthesize zeroVerticalItemSpacing=_zeroVerticalItemSpacing;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double maximumBubbleWidth; // @synthesize maximumBubbleWidth=_maximumBubbleWidth;
@property(nonatomic) struct CGSize layoutBoundsSize; // @synthesize layoutBoundsSize=_layoutBoundsSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

