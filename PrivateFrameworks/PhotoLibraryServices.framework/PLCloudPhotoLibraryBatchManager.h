//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject
{
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (id)drainBatches;
- (void)addRecord:(id)arg1 ignoreBatchSize:(BOOL)arg2;
- (BOOL)isAboveMaximumResourceBudget;
- (int)currentBatchCount;
- (void)addRecord:(id)arg1;
- (void)reset;
- (id)description;
- (id)init;
- (void)dealloc;

@end

