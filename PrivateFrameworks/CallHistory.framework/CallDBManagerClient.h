//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CallDBManager.h>

@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager
{
    NSXPCConnection *_helperConnection;
    id _syncHelperReadyNotificationRef;
    int _retryCount;
}

@property int retryCount; // @synthesize retryCount=_retryCount;
@property(retain) id syncHelperReadyNotificationRef; // @synthesize syncHelperReadyNotificationRef=_syncHelperReadyNotificationRef;
- (BOOL)willMoveCallsFromTempDatabase;
- (void)createHelperConnection;
- (void)pokeSyncHelperToInitDB;
@property(retain) NSXPCConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
- (void)moveCallsFromTempDatabase;
- (void)createTemporary;
- (void)createPermanent;
- (id)tempDBLocation;
- (void)handlePermanentCreated;
- (id)permDBLocation;
- (void).cxx_destruct;
- (id)init;

@end

