//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVHomeSharingKit/TVHKMediaQueryController.h>

@class NSMutableArray;
@protocol TVHKMediaCategoryTypesFetchControllerDelegate;

@interface TVHKMediaCategoryTypesFetchController : TVHKMediaQueryController
{
    id <TVHKMediaCategoryTypesFetchControllerDelegate> _delegate;
    NSMutableArray *_mutableMediaCategoryTypes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableMediaCategoryTypes; // @synthesize mutableMediaCategoryTypes=_mutableMediaCategoryTypes;
@property(nonatomic) __weak id <TVHKMediaCategoryTypesFetchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyFetchDidFailWithError:(id)arg1;
- (void)_notifyFetchDidCompleteWithResult:(id)arg1;
- (void)_handleContentsChangeFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2;
- (void)_handleInitialFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2;
- (void)_didCompleteQueryOperation:(id)arg1;
- (id)_queryOperationForQueryReason:(long long)arg1 simulatedContentsChangeObjects:(id)arg2;
- (void)stop;
- (id)initWithMediaEntityServer:(id)arg1;

@end

