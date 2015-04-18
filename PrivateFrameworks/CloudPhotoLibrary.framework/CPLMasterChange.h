//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLItemChange.h>

@class NSArray, NSData, NSDate, NSString;

@interface CPLMasterChange : CPLItemChange
{
    NSArray *_resources;
    NSDate *_creationDate;
    NSString *_itemType;
    NSDate *_importDate;
    NSString *_filename;
    NSString *_importGroupIdentifier;
    NSString *_mediaMetaDataType;
    NSData *_mediaMetaData;
    int _originalOrientation;
    unsigned int _fullSizeJPEGSource;
}

@property(copy, nonatomic) NSString *importGroupIdentifier; // @synthesize importGroupIdentifier=_importGroupIdentifier;
@property(copy, nonatomic) NSString *mediaMetaDataType; // @synthesize mediaMetaDataType=_mediaMetaDataType;
@property(retain, nonatomic) NSData *mediaMetaData; // @synthesize mediaMetaData=_mediaMetaData;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
- (BOOL)supportsResources;
@property(copy, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
@property(nonatomic) unsigned int fullSizeJPEGSource; // @synthesize fullSizeJPEGSource=_fullSizeJPEGSource;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) int originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property(copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(readonly, nonatomic) BOOL isImage;
- (id)propertiesDescription;
- (unsigned int)dataClassType;
- (void)awakeFromStorage;
- (void)prepareForStorage;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)propertiesForChangeType:(unsigned int)arg1;
- (int)dequeueOrder;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) BOOL isVideo;
- (void).cxx_destruct;
- (id)name;
- (void)setName:(id)arg1;
- (id)init;

@end
