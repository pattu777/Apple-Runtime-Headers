//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNQuickContactActionDelegate-Protocol.h>

@class CNContact, CNQuickActionsUsageManager, CNQuickFaceTimeAction, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOrderedSet, NSString;
@protocol CNQuickActionsManagerDelegate;

__attribute__((visibility("hidden")))
@interface CNQuickActionsManager : NSObject <CNQuickContactActionDelegate>
{
    NSMutableDictionary *_actionsByCategories;
    NSOrderedSet *_actions;
    NSMutableSet *_requests;
    _Bool _bypassActionValidation;
    _Bool _useDuetIfAvailable;
    NSArray *_contacts;
    id <CNQuickActionsManagerDelegate> _delegate;
    NSArray *_categories;
    long long _mode;
    unsigned long long _desiredNumberOfActions;
    NSMutableArray *_updateBlocks;
    NSDictionary *_groups;
    CNQuickFaceTimeAction *_faceTimeVideoAction;
    CNQuickFaceTimeAction *_faceTimeAudioAction;
    CNQuickActionsUsageManager *_usageManager;
    NSArray *_subManagers;
}

+ (id)actionsManagerForContacts:(id)arg1;
+ (id)defaultCategories;
+ (_Bool)hasActionsForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *subManagers; // @synthesize subManagers=_subManagers;
@property(retain, nonatomic) CNQuickActionsUsageManager *usageManager; // @synthesize usageManager=_usageManager;
@property(retain, nonatomic) CNQuickFaceTimeAction *faceTimeAudioAction; // @synthesize faceTimeAudioAction=_faceTimeAudioAction;
@property(retain, nonatomic) CNQuickFaceTimeAction *faceTimeVideoAction; // @synthesize faceTimeVideoAction=_faceTimeVideoAction;
@property(retain, nonatomic) NSDictionary *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSMutableArray *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(nonatomic) _Bool useDuetIfAvailable; // @synthesize useDuetIfAvailable=_useDuetIfAvailable;
@property(nonatomic) _Bool bypassActionValidation; // @synthesize bypassActionValidation=_bypassActionValidation;
@property(nonatomic) unsigned long long desiredNumberOfActions; // @synthesize desiredNumberOfActions=_desiredNumberOfActions;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) __weak id <CNQuickActionsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void)contactAction:(id)arg1 presentViewController:(id)arg2;
- (void)contactActionDidUpdate:(id)arg1;
- (id)quickActions;
@property(readonly, nonatomic) NSArray *actions;
- (void)actionPerformed:(id)arg1;
- (void)_actionsUpdated;
- (void)stopUpdatingActions;
- (void)refreshActions;
- (void)refreshActionsAndForceSendUpdate:(_Bool)arg1;
- (void)_updateMultiContactActions;
- (void)_updateSingleContactActions;
- (void)updateActionsWithBlock:(CDUnknownBlockType)arg1;
- (id)_propertyItemsForKey:(id)arg1;
- (void)_openURL:(id)arg1;
- (void)_updateIDSActionsForPropertyItems:(id)arg1 category:(id)arg2 serviceName:(id)arg3 propertyActionClass:(Class)arg4;
- (void)_updateActionsForPropertyItems:(id)arg1 category:(id)arg2 propertyActionClass:(Class)arg3;
- (id)_addActionForPropertyItem:(id)arg1 category:(id)arg2 propertyActionClass:(Class)arg3;
- (void)_addAction:(id)arg1;
- (id)_hybridActionsFromOrderedActionsByCategories:(id)arg1 totalNumberOfActions:(unsigned long long)arg2;
- (id)_expandedActionsFromOrderedActionsByCategories:(id)arg1 totalNumberOfActions:(unsigned long long)arg2;
- (id)_hierarchicalActionsForCategory:(id)arg1 fromActions:(id)arg2 askDelegate:(_Bool)arg3;
- (id)_groupedActionsFromOrderedActionsByCategories:(id)arg1;
- (_Bool)_shouldGroupActionsInCategory:(id)arg1;
- (id)_ignoredLabels;
- (id)_orderedLabels;
- (void)_createGroupsForPropertyKeys:(id)arg1;
@property(nonatomic) _Bool sortsWithDuet;
@property(readonly, nonatomic) CNContact *contact;
- (void)dealloc;
- (id)initWithContacts:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

