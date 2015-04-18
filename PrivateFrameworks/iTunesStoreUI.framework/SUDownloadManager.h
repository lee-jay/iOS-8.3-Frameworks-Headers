//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, SSDownloadManager, SUClientInterface;

@interface SUDownloadManager : NSObject
{
    NSArray *_cachedDownloads;
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_downloadsByID;
}

- (id)downloadForDownloadIdentifier:(long long)arg1;
- (BOOL)deleteDownload:(id)arg1;
- (void)_finishPreflightWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_removeObject:(id)arg1 fromArray:(id *)arg2;
- (void)preflightWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithDownloadManager:(id)arg1 clientInterface:(id)arg2;
- (void)reloadDownloadManager;
@property(readonly, nonatomic) SSDownloadManager *downloadManager;
- (void)_reloadDownloadManager;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *downloads;
- (id)initWithDownloadManager:(id)arg1;

@end
