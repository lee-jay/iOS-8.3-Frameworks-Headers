//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LTEConferenceDelegate.h"

@class LTEVTPWrapper, NSArray, NSObject<OS_dispatch_queue>;

@interface LTEConferenceManager : NSObject <LTEConferenceDelegate>
{
    LTEVTPWrapper *_vtpWrapper;
    struct _opaque_pthread_mutex_t stateLock;
    NSArray *conferenceArray;
    NSObject<OS_dispatch_queue> *xpcQueue;
}

+ (void)addNSError:(id)arg1 toLTEConfXPCArgumentDictionary:(id)arg2;
+ (id)LTEConferenceManagerSingleton;
- (oneway void)release;
@property(readonly) LTEVTPWrapper *vtpWrapper;
- (void)stopVTP;
- (void)startVTP;
- (void)lteConference:(id)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)lteConferenceDidRTCPTimeOut:(id)arg1;
- (void)lteConferenceDidRTPTimeOut:(id)arg1;
- (void)lteConferenceDidStop:(id)arg1;
- (void)lteConference:(id)arg1 didStartSession:(BOOL)arg2 error:(id)arg3;
- (void)lteConference:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)pauseConferences:(BOOL)arg1;
- (void)registerBlocksForService;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (unsigned int)retainCount;
- (id)autorelease;
- (id)init;
- (void)dealloc;
- (id)retain;

@end
