//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKController, AKHighlightAnnotation;

@interface AKHighlightAnnotationController : NSObject
{
    AKController *_controller;
    AKHighlightAnnotation *_continuousHighlight;
}

- (void).cxx_destruct;
@property(retain) AKHighlightAnnotation *continuousHighlight; // @synthesize continuousHighlight=_continuousHighlight;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (_Bool)_clearHighlightsWithStyleMatchingMask:(unsigned long long)arg1 except:(id)arg2 inRange:(struct _NSRange)arg3 onPageController:(id)arg4;
- (_Bool)_adaptExistingHighlightsToNewHighlight:(id)arg1 onPageController:(id)arg2 firstModifiedHighlight:(id *)arg3;
- (id)_highlightsInCharacterIndexRange:(struct _NSRange)arg1 onPageController:(id)arg2;
- (id)_createHighlightAnnotationWithAttributeTag:(long long)arg1;
- (void)endContinuousHighlighting;
- (void)continueHighlighting;
- (void)beginContinuousHighlighting;
- (id)highlightsWithinSelection;
- (void)clearHighlightsWithinSelection;
- (void)performOneShotHighlightWithAttributeTag:(long long)arg1;
- (id)initWithController:(id)arg1;

@end

