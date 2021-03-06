//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSNumber, NSString, NSThread, NSTimer;

@interface SGRTCLogging : NSObject <NSCoding>
{
    NSString *_path;
    NSMutableArray *_loggedEvents;
    struct _opaque_pthread_mutex_t _lock;
    NSTimer *_persistenceTimer;
    NSThread *_persistenceTimerThread;
    double _storeCreationDate;
    NSNumber *_version;
}

+ (id)defaultPath;
+ (id)inMemoryLogger;
+ (id)defaultLogger;
+ (BOOL)createEmptyFileAtPath:(id)arg1;
- (id)initWithFilename:(id)arg1;
- (id)metricNameForShortName:(id)arg1;
- (id)shortNameForMetricNamed:(id)arg1;
- (id)getLoggingString;
- (void)logExceptionFromTemplate:(id)arg1;
- (void)logEventResponseWithTemplateShortName:(id)arg1 latencyInMs:(unsigned long long)arg2;
- (id)loggedEvents;
- (id)initWithInMemoryStore;
- (void)enumerateLoggedEvents:(CDUnknownBlockType)arg1;
- (void)updateAndScheduleDiskWrite;
- (BOOL)storeToDisk;
- (BOOL)resetLogs;
- (BOOL)sendLogsUsingRTC;
- (double)storeAge;
- (void)persistLogs;
- (void).cxx_destruct;
- (int)version;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

