//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate>
{
    NSString *_requiredComplianceClass;
    NSArray *_httpPorts;
    NSArray *_httpsPorts;
    NSString *_httpServiceString;
    NSString *_httpsServiceString;
    NSString *_wellKnownPath;
    NSArray *_potentialContextPaths;
    NSMutableArray *_discoveries;
    BOOL _didReceiveAuthenticationError;
    BOOL _shouldBailEarly;
    id <CoreDAVAccountInfoProvider> _discoveredAccountInfo;
}

@property(retain, nonatomic) NSArray *potentialContextPaths; // @synthesize potentialContextPaths=_potentialContextPaths;
@property(retain, nonatomic) NSString *wellKnownPath; // @synthesize wellKnownPath=_wellKnownPath;
@property(nonatomic) BOOL didReceiveAuthenticationError; // @synthesize didReceiveAuthenticationError=_didReceiveAuthenticationError;
- (id)cleanedStringsFromResponseHeaders:(id)arg1 forHeader:(id)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPaths:(id)arg7 requiredComplianceClass:(id)arg8;
- (void)optionsTask:(id)arg1 error:(id)arg2;
- (void)addToDiscoveryArray:(id *)arg1 discovery:(id)arg2;
@property(nonatomic) BOOL shouldBailEarly; // @synthesize shouldBailEarly=_shouldBailEarly;
@property(retain, nonatomic) id <CoreDAVAccountInfoProvider> discoveredAccountInfo; // @synthesize discoveredAccountInfo=_discoveredAccountInfo;
- (void)getDiscoveryStatus:(id)arg1 priorFailed:(id *)arg2 subsequentFailed:(id *)arg3 priorIncomplete:(id *)arg4 subsequentIncomplete:(id *)arg5 priorSuccess:(id *)arg6 subsequentSuccess:(id *)arg7;
- (void)startOptionsTask:(id)arg1;
- (void)completeOptionsTask:(id)arg1 error:(id)arg2;
- (void)srvLookupTask:(id)arg1 error:(id)arg2;
- (id)extractPrincipalURLFromPropFindTask:(id)arg1 error:(id *)arg2;
- (void)propFindTaskFinished:(id)arg1;
- (void)noteDefinitiveAuthFailureFromTask:(id)arg1;
- (void)startWellKnownFallbackHeadTask:(id)arg1 withURL:(id)arg2;
- (id)propFindProperties;
- (void)completeDiscovery:(id)arg1 error:(id)arg2;
- (id)allDiscoveryPaths:(id)arg1;
- (void)startPropfindTask:(id)arg1;
- (id)setupDiscoveries:(id)arg1 withSchemes:(id)arg2;
- (void)startWellKnownLocationTask:(id)arg1 withURL:(id)arg2;
- (id)allDiscoveryPorts:(id)arg1 withScheme:(id)arg2;
- (void)startSRVLookup:(id)arg1 serviceString:(id)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPath:(id)arg7 potentialContextPaths:(id)arg8 requiredComplianceClass:(id)arg9;
- (void)syncAway;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVDiscoveryTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
