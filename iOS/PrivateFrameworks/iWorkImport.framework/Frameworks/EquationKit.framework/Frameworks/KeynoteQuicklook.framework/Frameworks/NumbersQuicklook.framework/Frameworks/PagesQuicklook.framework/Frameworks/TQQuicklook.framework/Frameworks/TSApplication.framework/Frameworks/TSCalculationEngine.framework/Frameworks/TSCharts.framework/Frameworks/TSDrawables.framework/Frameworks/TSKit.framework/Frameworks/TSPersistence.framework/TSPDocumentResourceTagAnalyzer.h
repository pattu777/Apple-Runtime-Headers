//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSPersistence/NSFastEnumeration-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface TSPDocumentResourceTagAnalyzer : NSObject <NSFastEnumeration>
{
    NSMutableDictionary *_tagsToDocumentResourceInfosDictionary;
    NSMutableSet *_documentResourceInfos;
    NSMutableSet *_untaggedDocumentResourceInfos;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, copy, nonatomic) NSSet *untaggedDocumentResourceInfos;
@property(readonly, copy, nonatomic) NSSet *allDocumentResourceInfos;
- (id)minimumTagsWithPreferredTags:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *allTags;
- (void)addDocumentResourceInfo:(id)arg1;
- (id)description;

@end

