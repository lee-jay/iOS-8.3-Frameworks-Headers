//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIDocumentPickerDirectoryObserverItem.h"

@class NSDate, NSMapTable, NSString, NSURL, _UIDocumentPickerContainerModel, _UIDocumentPickerURLContainerModel;

@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem>
{
    _UIDocumentPickerContainerModel *_weak_parentModel;
    _UIDocumentPickerURLContainerModel *_model;
    _UIDocumentPickerURLContainerModel *_weak_model;
    int _modelDisplayCount;
    id _observer;
    id _resourceIdentifier;
    BOOL _pickable;
    id _item;
    int _type;
    NSMapTable *_thumbnailsBySize;
    NSString *_pickabilityReason;
}

+ (void)clearLRUThumbnailCache;
+ (void)markThumbnailAsRecentlyUsed:(id)arg1;
+ (id)_lruThumbnailArray;
@property(copy, nonatomic) NSString *pickabilityReason; // @synthesize pickabilityReason=_pickabilityReason;
@property(retain, nonatomic) NSMapTable *thumbnailsBySize; // @synthesize thumbnailsBySize=_thumbnailsBySize;
- (id)_formattedSubtitleForNumberOfItems:(unsigned int)arg1;
- (void)decrementModelDisplayCount;
- (void)incrementModelDisplayCount;
- (id)sortTag;
- (id)tagBlipsWithHeight:(float)arg1 scale:(float)arg2;
@property(readonly, retain, nonatomic) _UIDocumentPickerContainerModel *model;
@property(readonly, retain, nonatomic) NSString *subtitle2;
@property(readonly, retain, nonatomic) NSString *subtitle;
- (id)thumbnailWithSize:(struct CGSize)arg1 scale:(float)arg2;
- (void)_modelChanged;
- (void)_ensureModelPresent;
@property(readonly, nonatomic) NSDate *sortDate;
- (id)_blipWithTags:(id)arg1 height:(float)arg2 scale:(float)arg3;
- (id)tags;
- (id)_resourceIdentifier;
- (id)_blockingThumbnailWithSize:(struct CGSize)arg1 scale:(float)arg2;
- (id)_createThumbnailWithSize:(struct CGSize)arg1 scale:(float)arg2;
@property(nonatomic) __weak _UIDocumentPickerContainerModel *parentModel;
- (id)_defaultThumbnailWithSize:(struct CGSize)arg1 scale:(float)arg2;
@property(retain, nonatomic) id item; // @synthesize item=_item;
@property(nonatomic) BOOL pickable; // @synthesize pickable=_pickable;
- (void)_valuesChanged;
- (id)modificationDate;
- (id)initWithItem:(id)arg1;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, retain, nonatomic) NSURL *url;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
