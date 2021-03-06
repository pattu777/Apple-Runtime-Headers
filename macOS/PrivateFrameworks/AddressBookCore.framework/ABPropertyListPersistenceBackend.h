//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/ABAccountPersistenceBackend-Protocol.h>

@class NSString;

@interface ABPropertyListPersistenceBackend : NSObject <ABAccountPersistenceBackend>
{
    NSString *_uid;
    NSString *_path;
    NSString *_sourceClassName;
}

- (void)deletePersistentValuesWithAddressBook:(id)arg1;
- (BOOL)savePersistentValues:(id)arg1;
- (BOOL)savePersistentValues:(id)arg1 postNotifications:(BOOL)arg2;
- (void)rediscoverPersistentValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)loadPersistentValues;
- (id)parentAccountTypeIdentifier;
- (id)accountTypeIdentifier;
- (id)acAccountIdentifier;
- (id)plistPath;
- (id)path;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithUID:(id)arg1 path:(id)arg2 sourceClassName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

