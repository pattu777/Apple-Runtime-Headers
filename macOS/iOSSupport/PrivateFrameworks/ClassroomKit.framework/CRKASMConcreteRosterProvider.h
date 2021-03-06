//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKASMRosterProviding-Protocol.h>
#import <ClassroomKit/CRKClassKitChangeNotifierDelegate-Protocol.h>

@class CRKASMCertificateIngestor, CRKASMRosterProviderConfiguration, CRKASMRosterUpdater, CRKASMWorldBuildOperation, CRKClassKitChangeNotifier, NSArray, NSString;
@protocol CRKASMRoster, CRKASMUserDirectory;

@interface CRKASMConcreteRosterProvider : NSObject <CRKClassKitChangeNotifierDelegate, CRKASMRosterProviding>
{
    BOOL _populated;
    id <CRKASMUserDirectory> _userDirectory;
    CRKASMRosterProviderConfiguration *_configuration;
    id <CRKASMRoster> _roster;
    NSArray *_locations;
    NSArray *_locationsWithManagePermissions;
    CRKASMCertificateIngestor *_certificateIngestor;
    CRKClassKitChangeNotifier *_classKitChangeNotifier;
    CRKASMWorldBuildOperation *_worldBuildOperation;
    CRKASMRosterUpdater *_rosterUpdater;
}

+ (id)instructorRosterProvider;
+ (id)studentRosterProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) CRKASMRosterUpdater *rosterUpdater; // @synthesize rosterUpdater=_rosterUpdater;
@property(retain, nonatomic) CRKASMWorldBuildOperation *worldBuildOperation; // @synthesize worldBuildOperation=_worldBuildOperation;
@property(readonly, nonatomic) CRKClassKitChangeNotifier *classKitChangeNotifier; // @synthesize classKitChangeNotifier=_classKitChangeNotifier;
@property(readonly, nonatomic) CRKASMCertificateIngestor *certificateIngestor; // @synthesize certificateIngestor=_certificateIngestor;
@property(copy, nonatomic) NSArray *locationsWithManagePermissions; // @synthesize locationsWithManagePermissions=_locationsWithManagePermissions;
@property(copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(nonatomic, getter=isPopulated) BOOL populated; // @synthesize populated=_populated;
@property(retain, nonatomic) id <CRKASMRoster> roster; // @synthesize roster=_roster;
@property(readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <CRKASMUserDirectory> userDirectory; // @synthesize userDirectory=_userDirectory;
- (void)notifierDidObserveClassKitChange:(id)arg1;
- (void)logDurationOfOperation:(id)arg1;
- (void)updateManageableLocations:(id)arg1;
- (void)updateRoster:(id)arg1;
- (void)processFinishedWorldBuild:(id)arg1;
- (void)worldBuildDidFinish:(id)arg1;
- (void)startNewWorldBuild;
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeCourseWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createCourseWithProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id *)arg3;
- (void)refresh;
- (id)initWithConfiguration:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

