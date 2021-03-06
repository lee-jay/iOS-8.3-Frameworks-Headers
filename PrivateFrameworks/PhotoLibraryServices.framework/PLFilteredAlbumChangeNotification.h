//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>

#import "PLDerivedNotification.h"
#import "PLIndexMapperDataSource.h"

@class NSIndexSet, NSString, PLFilteredAlbum, PLIndexMapper;

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLIndexMapperDataSource, PLDerivedNotification>
{
    PLFilteredAlbum *_album;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAssetContainerChangeNotification *_backingNotification;
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;
@property(copy, nonatomic) NSIndexSet *filteredIndexes;
- (BOOL)countDidChange;
@property(readonly, retain, nonatomic) NSIndexSet *updatedFilteredIndexes;
- (id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3;
- (BOOL)keyAssetDidChange;
- (BOOL)titleDidChange;
- (id)album;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)_diffDescription;
- (BOOL)shouldReload;
@property(readonly, retain, nonatomic) PLIndexMapper *indexMapper;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
- (id)object;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

