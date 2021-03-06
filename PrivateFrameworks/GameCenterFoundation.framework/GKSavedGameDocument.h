//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFilePresenter.h"

@class NSDate, NSFileVersion, NSOperationQueue, NSString, NSURL;

@interface GKSavedGameDocument : NSObject <NSFilePresenter>
{
    BOOL _hasConflict;
    BOOL _isConflictVersion;
    NSURL *_fileURL;
    NSString *_name;
    NSFileVersion *_fileVersion;
    NSString *_deviceName;
    NSDate *_modificationDate;
}

+ (id)currentDeviceName;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)metadata;
- (void)setMetadata:(id)arg1;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
- (void)updateMetadata;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSFileVersion *fileVersion; // @synthesize fileVersion=_fileVersion;
- (void)loadWrapperDataWithFilename:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteConflictVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateConflictStateWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL hasConflict; // @synthesize hasConflict=_hasConflict;
@property(nonatomic) BOOL isConflictVersion; // @synthesize isConflictVersion=_isConflictVersion;
- (void)loadMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteAllVersionsIncludingCurrent:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidChange;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

