//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudFeedEntry.h>

@class NSMutableOrderedSet, NSOrderedSet;

@interface PLCloudFeedAssetsEntry : PLCloudFeedEntry
{
}

+ (id)entityName;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableEntryAssets;
- (BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *entryAssets; // @dynamic entryAssets;

@end

