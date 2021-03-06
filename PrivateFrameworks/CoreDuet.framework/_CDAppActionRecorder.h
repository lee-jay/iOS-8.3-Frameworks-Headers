//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CDActivityEventRecording.h"
#import "_CDAppActionRecording.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface _CDAppActionRecorder : NSObject <_CDActivityEventRecording, _CDAppActionRecording>
{
    NSString *_previousActivityType;
    NSString *_previousTitle;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
}

+ (id)appActionRecorder;
@property(retain, nonatomic) NSString *previousTitle; // @synthesize previousTitle=_previousTitle;
@property(retain, nonatomic) NSString *previousActivityType; // @synthesize previousActivityType=_previousActivityType;
- (void)recordAppAction:(id)arg1;
- (void)recordUserActivityEvents:(id)arg1;
- (void)_recordUserActivityEvent:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)recordUserActivityEvent:(id)arg1;
- (void)createConnection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

