//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADAdSheetConnectionDelegate.h"
#import "ADAdSheetProxyDelegate.h"
#import "ADSession_RPC.h"

@class ADAdSheetConnection, NSMutableArray, NSString;

@interface ADSession : NSObject <ADSession_RPC, ADAdSheetProxyDelegate, ADAdSheetConnectionDelegate>
{
    BOOL _applicationCanReceiveBackgroundAds;
    NSMutableArray *_adSpaces;
    int _classicUnavailableToken;
    ADAdSheetConnection *_connection;
}

+ (id)sharedInstance;
@property(nonatomic) int classicUnavailableToken; // @synthesize classicUnavailableToken=_classicUnavailableToken;
@property(retain, nonatomic) NSMutableArray *adSpaces; // @synthesize adSpaces=_adSpaces;
@property(nonatomic) BOOL applicationCanReceiveBackgroundAds; // @synthesize applicationCanReceiveBackgroundAds=_applicationCanReceiveBackgroundAds;
- (void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2;
- (void)lookupAdConversionDetails:(CDUnknownBlockType)arg1;
- (void)determineAppInstallAttributionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unregisterAdSpace:(id)arg1;
- (void)registerAdSpace:(id)arg1;
- (void)adSheetConnectionLost;
- (void)adSheetConnectionEstablished;
- (BOOL)shouldConnectToAdSheet;
- (void)configureConnection:(id)arg1;
- (id)adSheetMachServiceName;
- (id)additionalAdSheetLaunchOptions;
- (id)_linkedOnVersion;
- (void)_remote_policyEngineDidIdleDisable;
- (void)_remote_heartbeatTokenDidChange:(id)arg1 expirationDate:(double)arg2 error:(id)arg3;
- (id)rpcProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)performWhenConnected:(CDUnknownBlockType)arg1;
- (BOOL)shouldLaunchAdSheet;
@property(readonly, nonatomic) id <ADSSession_RPC> rpcProxy;
- (void)_appDidBecomeActive;
- (void)_appWillResignActive;
@property(retain, nonatomic) ADAdSheetConnection *connection; // @synthesize connection=_connection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
