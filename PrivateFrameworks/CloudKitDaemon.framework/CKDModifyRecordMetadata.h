//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDProgressTracker, CKRecord, CKRecordID, NSError, NSString;

@interface CKDModifyRecordMetadata : NSObject
{
    BOOL _isDelete;
    CKRecord *_record;
    CKRecordID *_recordID;
    CKRecord *_serverRecord;
    NSString *_etag;
    unsigned int _uploadState;
    NSError *_error;
    CKDProgressTracker *_progressTracker;
}

+ (id)modifyMetadataForDeleteWithRecordID:(id)arg1;
+ (id)modifyMetadataWithRecord:(id)arg1;
+ (id)_stringForUploadState:(unsigned int)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CKRecord *serverRecord; // @synthesize serverRecord=_serverRecord;
@property(nonatomic) unsigned int uploadState; // @synthesize uploadState=_uploadState;
@property(nonatomic) BOOL isDelete; // @synthesize isDelete=_isDelete;
@property(retain, nonatomic) CKDProgressTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void).cxx_destruct;
- (id)description;

@end

