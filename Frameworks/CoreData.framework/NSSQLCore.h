//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSPersistentStore.h>

#import "NSFilePresenter.h"

@class NSManagedObjectContext, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSQLAdapter, NSSQLConnection, NSSQLEntity, NSSQLModel, NSSQLRow, NSSQLRowCache, NSSaveChangesRequest, NSSet, NSString, NSURL;

@interface NSSQLCore : NSPersistentStore <NSFilePresenter>
{
    NSSQLModel *_model;
    NSSQLAdapter *_adapter;
    NSSQLConnection *_connection;
    NSMutableArray *_channels;
    NSManagedObjectContext *_currentContext;
    NSSQLEntity *_lastEntity;
    NSSQLRowCache *_rowCache;
    NSSet *_newInserts;
    struct __CFDictionary *_changeCache;
    struct __CFDictionary *_insertCache;
    struct __CFDictionary *_toManyCache;
    NSSaveChangesRequest *_currentSaveRequest;
    NSMutableSet *_rowsInCurrentSave;
    NSMutableDictionary *_updatedFOKRowsInCurrentSave;
    NSMutableDictionary *_deletedFOKRowsInCurrentSave;
    int _lazyFaultDebugLevel;
    NSMutableDictionary *_batchFaultBuffer;
    NSMutableDictionary *_batchToManyFaultBuffer;
    struct _NSScalarObjectID *_currentGlobalID;
    NSSQLRow *_currentRow;
    id _observer;
    NSMutableSet *_missingObjectGIDs;
    NSMutableDictionary *_storeMetadata;
    NSMutableArray *_externalDataReferencesToSave;
    NSMutableSet *_externalDataReferencesToDelete;
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    int _transactionInMemorySequence;
    int _moreOtherReserved;
    struct _sqlCoreFlags {
        unsigned int beganTransaction:1;
        unsigned int ignoreEntityCaching:1;
        unsigned int storeMetadataClean:1;
        unsigned int useToManyCaching:1;
        unsigned int useSyntaxColoredLogging:1;
        unsigned int checkedExternalReferences:1;
        unsigned int fileProtectionType:3;
        unsigned int notifyFOKChanges:1;
        unsigned int _RESERVED:22;
    } _sqlCoreFlags;
}

+ (void)initialize;
+ (void)setSQLGenerationV1Default:(BOOL)arg1;
+ (void)setColoredLoggingDefault:(BOOL)arg1;
+ (BOOL)sanityCheckFileAtURL:(id)arg1 error:(id *)arg2;
+ (int)debugDefault;
+ (BOOL)coloredLoggingDefault;
+ (BOOL)SQLGenerationV1Default;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;
+ (BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id *)arg5;
+ (Class)migrationManagerClass;
+ (void)setDebugDefault:(int)arg1;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id *)arg3;
- (BOOL)loadMetadata:(id *)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)beginTransaction;
- (void)setCurrentContext:(id)arg1;
- (id)currentContext;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)connection;
- (void)setURL:(id)arg1;
- (void)commitTransaction;
- (id)model;
- (id)type;
- (id)identifier;
- (void)dealloc;
- (id)_newObjectIDForEntity:(id)arg1 referenceData64:(unsigned long long)arg2;
- (id)_newReservedKeysForEntities:(id)arg1 counts:(id)arg2;
- (void)recomputePrimaryKeyMaxForEntities:(id)arg1;
- (void)_purgeRowCache;
- (id)_ubiquityDictionaryForAttribute:(id)arg1 onObject:(id)arg2;
- (id)externalDataReferencesToSave;
- (id)safeguardLocationForFileWithUUID:(id)arg1;
- (id)externalLocationForFileWithUUID:(id)arg1;
- (id)_entityForObject:(id)arg1;
- (unsigned int)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 orderedManyToMany:(id)arg3;
- (id)_processRawRows:(CDStruct_576b85d7 *)arg1 forFetchPlan:(id)arg2 selectedBy:(SEL)arg3 withArgument:(id)arg4;
- (id)availableChannel;
- (id)createChannel;
- (void)unregisterChannel:(id)arg1;
- (id)newAdapterForModel:(id)arg1;
- (void)_uncacheRows:(id)arg1;
- (void)_cacheRows:(id)arg1;
- (void)_useModel:(id)arg1;
- (struct _NSScalarObjectID *)newForeignKeyID:(long long)arg1 entity:(id)arg2;
- (id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2;
- (void)generatePrimaryKeysForEntity:(id)arg1;
- (void)_prefetchRelationshipKey:(id)arg1 sourceEntityDescription:(id)arg2 sourceObjectIDs:(id)arg3 prefetchRelationshipKeys:(id)arg4 inContext:(id)arg5;
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3;
- (id)newSortDescriptorForOrderedRelationship:(id)arg1;
- (id)newFaultingPredicateForSourceID:(struct _NSScalarObjectID *)arg1 andRelationship:(id)arg2;
- (id)hackQueryForManyToManyPrefetching:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3;
- (id)rawSQLTextForToManyFaultStatement:(id)arg1 stripBindVariables:(BOOL)arg2 swapEKPK:(BOOL)arg3;
- (id)_loadAndSetMetadataReadOnly;
- (id)_loadAndSetMetadata;
- (void)_repairDatabaseCorrelationTables:(id)arg1 brokenHashModel:(id)arg2 storeVersionNumber:(id)arg3 recurse:(BOOL)arg4;
- (id)_collectSkewedComponents:(id *)arg1;
- (id)_dissectCorrelationTableCreationSQL:(id)arg1;
- (void)_checkAndRepairCorrelationTables:(BOOL)arg1 storeVersionNumber:(id)arg2;
- (id)performBatchUpdate:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)refreshObjects:(id)arg1;
- (id)saveChanges:(id)arg1;
- (void)commitBatchUpdateOnConnection:(id)arg1;
- (void)rollbackBatchUpdateOnConnection:(id)arg1;
- (id)countForFetchRequest:(id)arg1 inContext:(id)arg2;
- (id)objectsForFetchRequest:(id)arg1 inContext:(id)arg2;
- (void)beginBatchUpdateOnConnection:(id)arg1;
- (id)_performExhaustiveConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2;
- (void)rollbackChanges;
- (void)deleteExternalDataReferences:(id)arg1;
- (void)commitChanges:(id)arg1;
- (id)writeExternalDataReferences;
- (void)performChanges;
- (void)prepareForSave:(id)arg1;
- (id)_newRowsForFetchPlan:(id)arg1 selectedBy:(SEL)arg2 withArgument:(id)arg3;
- (id)newRowsForFetchPlan:(id)arg1;
- (void)_cleanUpAfterSave;
- (void)writeChanges;
- (BOOL)_performFastConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2;
- (void)forgetChangeSnapshotForObjectID:(id)arg1;
- (id)_newConflictRecordForObject:(id)arg1 originalRow:(id)arg2 newRow:(id)arg3;
- (id)_newObjectGraphStyleForSQLRow:(id)arg1 withObject:(id)arg2;
- (struct __CFArray *)_rowsForConflictDetection:(id)arg1 withChannel:(id)arg2;
- (void)commitTransaction_NotificationFree;
- (void)beginTransaction_NotificationFree;
- (void)createCorrelationTrackerUpdatesForDeletedObject:(id)arg1;
- (void)_prepareForDeletionOfExternalDataReferencesForObject:(id)arg1;
- (void)_populateRow:(id)arg1 fromObject:(id)arg2 timestamp:(double)arg3 inserted:(BOOL)arg4;
- (void)insertEntity:(id)arg1 intoOrderingArray:(id)arg2 withDependencies:(id)arg3 processingSet:(id)arg4;
- (id)correlationTableUpdateTrackerForRelationship:(id)arg1;
- (id)findOrCreateChangeSnapshotForGlobalID:(id)arg1;
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)arg1 rowCacheOriginal:(id)arg2 originalSnapshot:(id)arg3 value:(id)arg4 added:(id)arg5 deleted:(id)arg6 sourceRowPK:(long long)arg7 properties:(id)arg8 sourceObject:(id)arg9 newIndexes:(unsigned int **)arg10 reorderedIndexes:(char **)arg11;
- (void)registerChangedFOKs:(id)arg1 deletions:(id)arg2 forSourceObject:(id)arg3 andRelationship:(id)arg4;
- (BOOL)shouldNotifyFOKChanges;
- (id)entityForObject:(id)arg1;
- (void)recordToManyChangesForObject:(id)arg1 inRow:(id)arg2 usingTimestamp:(double)arg3 inserted:(BOOL)arg4;
- (id)externalDataReferencesToDelete;
- (unsigned int)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 inverseToMany:(id)arg3;
- (unsigned int)_knownEntityKeyForObject:(id)arg1;
- (long long)_knownPrimaryKeyForObject:(id)arg1;
- (unsigned int)_orderKeyForObject:(id)arg1 fromSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 inOrderedSet:(id)arg4;
- (void)_populateOrderKeysInOrderedSet:(id)arg1 usingSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 newIndexes:(unsigned int **)arg4 reorderedIndexes:(char **)arg5;
- (unsigned int)_knownEntityKeyForObjectID:(id)arg1;
- (long long)_knownPrimaryKeyForObjectID:(id)arg1;
- (void)_prefetchWithFetchRequest:(id)arg1 withObjectIDs:(id)arg2 inContext:(id)arg3;
- (id)_obtainOpenChannel;
- (id)_prepareResultsFromResultSet:(CDStruct_576b85d7 *)arg1 usingFetchPlan:(id)arg2 withMatchingRows:(id *)arg3;
- (id)_prepareDictionaryResultsFromResultSet:(CDStruct_576b85d7 *)arg1 usingFetchPlan:(id)arg2;
- (int)fileProtectionLevel;
- (id)externalDataLinksDirectory;
- (id)_availableChannel;
- (void)registerChannel:(id)arg1;
- (id)_availableChannelFromRegisteredChannels;
- (void)recordChangeSnapshot:(id)arg1 forObjectID:(id)arg2;
- (id)changeSnapshotForObjectID:(id)arg1;
- (void)rollbackTransaction_core;
- (void)commitTransaction_core;
- (void)beginTransaction_core;
- (void)_beginTransaction:(id)arg1;
- (id)newFetchedPKsForSourceID:(struct _NSScalarObjectID *)arg1 andRelationship:(id)arg2;
- (id)fetchRowForObjectID:(struct _NSScalarObjectID *)arg1;
- (id)rowForObjectID:(id)arg1 after:(double)arg2;
- (id)rowCache;
- (void)_ensureDatabaseMatchesModel;
- (id)_newAdapterForModel:(id)arg1;
- (struct _NSScalarObjectID *)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (void)resetExternalDataReferencesDirectories;
- (id)channels;
- (void)_disconnect;
- (void)cacheStatement:(id)arg1 forRequestWithIdentifier:(id)arg2;
- (void)_performPostSaveTasks;
- (id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (void)rollbackTransaction;
- (id)adapter;
- (id)entityForFetchRequest:(id)arg1;
- (id)cachedStatementForRequestWithIdentifier:(id)arg1;
- (id)rowForObjectID:(id)arg1;
- (void)setDatabaseUUID:(id)arg1;
- (struct __CFArray *)_deleteAllRowsNoRelationshipIntegrityForEntityWithAllSubentities:(id)arg1;
- (id)_externalDataLinksDirectory;
- (void)clearCachedInformationForRequestWithIdentifier:(id)arg1;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (Class)_objectIDClass;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;
- (id)databaseUUID;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (void)_setMetadata:(id)arg1;
- (const id *)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (id)entityForEntityDescription:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (BOOL)load:(id *)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (id)externalDataReferencesDirectory;
- (id)objectIDFactoryForEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end
