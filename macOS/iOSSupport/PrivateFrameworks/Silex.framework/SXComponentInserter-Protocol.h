//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray, SXComponentInsert;
@protocol SXBlueprintMarker, SXComponentInsertionCacheValidator, SXComponentInsertionConditionEngine, SXComponentInsertionLayoutProvider, SXDOMObjectProviding;

@protocol SXComponentInserter <NSObject>
@property(readonly, nonatomic) unsigned long long componentTraits;
@property(readonly, nonatomic) id <SXComponentInsertionConditionEngine> conditionEngine;
- (SXComponentInsert *)componentInsertForMarker:(id <SXBlueprintMarker>)arg1 DOMObjectProvider:(id <SXDOMObjectProviding>)arg2 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg3;
- (BOOL)validateMarker:(id <SXBlueprintMarker>)arg1 DOMObjectProvider:(id <SXDOMObjectProviding>)arg2 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg3;
- (NSArray *)conditionsForDOMObjectProvider:(id <SXDOMObjectProviding>)arg1;

@optional
- (void)componentInsertionCompleted;
- (id <SXComponentInsertionCacheValidator>)cacheValidatorForCache:(NSArray *)arg1 DOMObjectProvider:(id <SXDOMObjectProviding>)arg2;
@end

