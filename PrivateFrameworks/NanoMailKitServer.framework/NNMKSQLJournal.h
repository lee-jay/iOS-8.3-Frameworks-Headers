//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSObject<OS_dispatch_queue>, NSString;

@interface NNMKSQLJournal : NSObject
{
    NSString *_directoryPath;
    NSMutableData *_currentFileData;
    NSObject<OS_dispatch_queue> *_journalQueue;
    unsigned int _filesCount;
}

- (void)_flush;
@property(nonatomic) unsigned int filesCount; // @synthesize filesCount=_filesCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *journalQueue; // @synthesize journalQueue=_journalQueue;
@property(retain, nonatomic) NSMutableData *currentFileData; // @synthesize currentFileData=_currentFileData;
@property(retain, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
- (void)mergeUsingBlock:(CDUnknownBlockType)arg1;
- (void)appendSQLStatement:(id)arg1;
- (id)_nextFilePath;
- (id)_sortedJournalFiles;
- (void)flushIfNeeded;
- (unsigned int)_currentFilesCount;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;

@end

