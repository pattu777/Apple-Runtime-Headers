//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CNMeCardSharingResult, CNMeCardSharingSettingsViewController;

@protocol CNMeCardSharingSettingsViewControllerDelegate <NSObject>

@optional
- (void)sharingSettingsViewController:(CNMeCardSharingSettingsViewController *)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)sharingSettingsViewController:(CNMeCardSharingSettingsViewController *)arg1 didUpdateSharingState:(_Bool)arg2;
- (void)sharingSettingsViewControllerDidUpdateContact:(CNMeCardSharingSettingsViewController *)arg1;
- (void)sharingSettingsViewController:(CNMeCardSharingSettingsViewController *)arg1 didUpdateWithSharingResult:(CNMeCardSharingResult *)arg2;
@end

