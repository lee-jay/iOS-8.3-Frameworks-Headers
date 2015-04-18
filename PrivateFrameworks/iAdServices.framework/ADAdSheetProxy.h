//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface ADAdSheetProxy : NSObject
{
    id <ADAdSheetProxyDelegate> _delegate;
    BOOL _serviceLaunchThrottled;
    BOOL _waitingForAdSheet;
    BOOL _openApplicationInProgress;
    int _unexpectedTerminationCount;
    NSMutableSet *_launchAssertions;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    double _lastLaunchTimestamp;
    double _nextScheduledLaunch;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *launchAssertions; // @synthesize launchAssertions=_launchAssertions;
- (void)reportAdSheetUnexpectedTermination;
@property(nonatomic) BOOL waitingForAdSheet; // @synthesize waitingForAdSheet=_waitingForAdSheet;
@property(nonatomic) BOOL openApplicationInProgress; // @synthesize openApplicationInProgress=_openApplicationInProgress;
@property(nonatomic) double nextScheduledLaunch; // @synthesize nextScheduledLaunch=_nextScheduledLaunch;
@property(readonly, nonatomic) double remainingLaunchBackoff;
@property(nonatomic) double lastLaunchTimestamp; // @synthesize lastLaunchTimestamp=_lastLaunchTimestamp;
@property(nonatomic) int unexpectedTerminationCount; // @synthesize unexpectedTerminationCount=_unexpectedTerminationCount;
- (void)_considerLaunchingAdSheet;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *proxyQueue; // @synthesize proxyQueue=_proxyQueue;
- (void)_adSheetAvailable;
@property(readonly, nonatomic) BOOL serviceLaunchThrottled; // @synthesize serviceLaunchThrottled=_serviceLaunchThrottled;
- (void)releaseLaunchAssertion:(id)arg1;
- (void)takeLaunchAssertion:(id)arg1;
- (void)considerLaunchingAdSheet;
- (void)resetAdSheetThrottle;
@property(nonatomic) __weak id <ADAdSheetProxyDelegate> delegate;
- (id)init;

@end
