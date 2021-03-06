//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSSet;

@interface CKFetchRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    BOOL _isFetchCurrentUserOperation;
    BOOL _shouldFetchAssetContent;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSDictionary *_recordIDsToVersionETags;
    NSDictionary *_desiredPackageFileIndices;
    NSDictionary *_signaturesOfAssetsByRecordIDAndKey;
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *signaturesOfAssetsByRecordIDAndKey; // @synthesize signaturesOfAssetsByRecordIDAndKey=_signaturesOfAssetsByRecordIDAndKey;
@property(retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;
@property(retain, nonatomic) NSDictionary *desiredPackageFileIndices; // @synthesize desiredPackageFileIndices=_desiredPackageFileIndices;
@property(retain, nonatomic) NSSet *assetFieldNamesToPublishURLs; // @synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs;
@property(retain, nonatomic) NSDictionary *recordIDsToVersionETags; // @synthesize recordIDsToVersionETags=_recordIDsToVersionETags;
@property(nonatomic) unsigned int URLOptions; // @synthesize URLOptions=_URLOptions;
@property(nonatomic) unsigned int requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) BOOL isFetchCurrentUserOperation; // @synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

