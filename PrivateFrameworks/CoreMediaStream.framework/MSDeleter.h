//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMediaStream/MSCupidStateMachine.h>

#import "MSDeleteStreamsProtocolDelegate.h"
#import "MSDeleter.h"

@class MSDeleteStreamsProtocol, MSMediaStreamDaemon, MSObjectQueue, NSMutableArray, NSString;

@interface MSDeleter : MSCupidStateMachine <MSDeleter, MSDeleteStreamsProtocolDelegate>
{
    MSDeleteStreamsProtocol *_protocol;
    int _state;
    MSObjectQueue *_deleteQueue;
    NSMutableArray *_requestedDeleteWrappers;
    int _batchSize;
    int _maxErrorCount;
    id <MSDeleterDelegate> _delegate;
    MSMediaStreamDaemon *_daemon;
}

+ (void)forgetPersonID:(id)arg1;
+ (id)_clearInstantiatedDeletersByPersonID;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (void)abortAllActivities;
+ (void)stopAllActivities;
+ (id)existingDeleterForPersonID:(id)arg1;
+ (id)deleterForPersonID:(id)arg1;
+ (BOOL)isInRetryState;
+ (id)personIDsWithOutstandingActivities;
+ (id)nextActivityDate;
- (void)abort;
@property(nonatomic) int batchSize; // @synthesize batchSize=_batchSize;
- (void)deleteProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)deleteProtocol:(id)arg1 didFinishSuccessfulCollections:(id)arg2 failedCollections:(id)arg3 error:(id)arg4;
- (void)_sendDeleteRequest;
- (BOOL)_isAllowedToDelete;
- (void)_forget;
- (void)_abort;
- (id)_abortedError;
- (void)_updateMasterManifest;
- (BOOL)_isInRetryState;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)performOutstandingActivities;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
- (void)_stop;
- (void).cxx_destruct;
- (void)deactivate;
- (void)stop;
@property(nonatomic) id <MSDeleterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)deleteAssetCollections:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

