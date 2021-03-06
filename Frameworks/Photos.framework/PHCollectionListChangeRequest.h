//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHInsertChangeRequest.h"
#import "PHUpdateChangeRequest.h"

@class NSManagedObjectID, NSString, PHChangeRequestHelper, PHCollectionChangeRequestHelper, PHCollectionList, PHObjectPlaceholder;

@interface PHCollectionListChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHCollectionList *_originalCollectionList;
    BOOL _entitled;
    NSString *_clientName;
    int _clientProcessID;
    PHChangeRequestHelper *_helper;
    PHCollectionChangeRequestHelper *_collectionsHelper;
}

+ (id)changeRequestForCollectionList:(id)arg1 childCollections:(id)arg2;
+ (void)deleteCollectionLists:(id)arg1;
+ (id)changeRequestForCollectionList:(id)arg1;
+ (id)creationRequestForCollectionListWithTitle:(id)arg1;
- (void)removeChildCollections:(id)arg1;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)addChildCollections:(id)arg1;
- (void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned int)arg2;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic) NSString *uuid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedCollectionList;
- (void)removeChildCollection:(id)arg1;
- (void)addChildCollection:(id)arg1;
- (void)replaceChildCollectionsAtIndex:(unsigned int)arg1 withChildCollection:(id)arg2;
- (void)removeChildCollectionFromChildCollectionsAtIndex:(unsigned int)arg1;
- (void)insertChildCollection:(id)arg1 inChildCollectionsAtIndex:(unsigned int)arg2;
- (void)_prepareAssetIDsIfNeeded;
@property(readonly, nonatomic) PHCollectionChangeRequestHelper *collectionsHelper; // @synthesize collectionsHelper=_collectionsHelper;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_setOriginalCollectionList:(id)arg1;
- (id)_mutableObjectIDsAndUUIDs;
- (BOOL)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
@property(readonly, getter=isMutated) BOOL mutated;
- (void)didMutate;
- (id)mutations;
- (BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (BOOL)canGenerateUUIDLocally;
- (id)initForNewObject;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 entitled:(BOOL)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (BOOL)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(readonly, nonatomic, getter=isEntitled) BOOL entitled; // @synthesize entitled=_entitled;
@property(readonly, nonatomic) NSString *managedEntityName;
@property(readonly, getter=isNew) BOOL new;
@property(readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

