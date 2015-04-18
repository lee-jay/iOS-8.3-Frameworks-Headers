//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSString, PLAdditionalAssetAttributes, PLCloudMaster, PLManagedAsset;

@interface PLCloudResource : PLManagedObject
{
}

+ (void)countNonLocalOriginalResourcesInLibrary:(id)arg1 outCount:(unsigned int *)arg2 photoCount:(unsigned int *)arg3 videoCount:(unsigned int *)arg4;
+ (long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1;
+ (id)allCloudResourcesInManagedObjectContext:(id)arg1;
+ (id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(BOOL)arg4;
+ (void)markResource:(id)arg1 asLocallyAvailable:(BOOL)arg2 inPhotoLibrary:(id)arg3;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
- (id)cplResourceWithItemIdentifier:(id)arg1 includeFile:(BOOL)arg2;
- (void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3;
- (void)applyPropertiesFromCloudResource:(id)arg1;
@property(readonly, retain, nonatomic) PLManagedAsset *asset;
- (id)description;

// Remaining properties
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(retain, nonatomic) NSString *assetUuid; // @dynamic assetUuid;
@property(retain, nonatomic) PLCloudMaster *cloudMaster; // @dynamic cloudMaster;
@property(retain, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) long long fileSize; // @dynamic fileSize;
@property(retain, nonatomic) NSString *fingerprint; // @dynamic fingerprint;
@property(nonatomic) int height; // @dynamic height;
@property(nonatomic) BOOL isAvailable; // @dynamic isAvailable;
@property(nonatomic) BOOL isFlattened; // @dynamic isFlattened;
@property(nonatomic) BOOL isLocallyAvailable; // @dynamic isLocallyAvailable;
@property(retain, nonatomic) NSDate *lastOnDemandDownloadDate; // @dynamic lastOnDemandDownloadDate;
@property(retain, nonatomic) NSDate *prunedAt; // @dynamic prunedAt;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;
@property(nonatomic) int width; // @dynamic width;

@end
