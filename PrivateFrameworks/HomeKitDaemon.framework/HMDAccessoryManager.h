//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HAPAccessoryServerBrowserDelegate.h"
#import "HAPAccessoryServerDelegate.h"

@class HAPAccessoryServerBrowserBTLE, HAPAccessoryServerBrowserIP, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface HMDAccessoryManager : NSObject <HAPAccessoryServerBrowserDelegate, HAPAccessoryServerDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMapTable *_delegates;
    NSMutableSet *_pairedAccessories;
    NSMutableSet *_unpairedAccessories;
    NSHashTable *_currentlyPairingAccessories;
    NSHashTable *_unpairedSecondaryHAPAccessories;
    NSMapTable *_addAccessoryCompletionHandlersForAccessoryServers;
    NSHashTable *_removeAccessoryInProgressForHMDAccessories;
    NSMapTable *_pairingRetryTimersForAccessoryServers;
    NSMapTable *_retrievalCompletionTuplesForAccessories;
    NSMutableArray *_accessoryServerBrowsers;
    HAPAccessoryServerBrowserIP *_ipAccessoryServerBrowser;
    HAPAccessoryServerBrowserBTLE *_btleAccessoryServerBrowser;
    NSObject<OS_dispatch_source> *_reachabilityTimerForBTLE;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HAPAccessoryServerBrowserBTLE *btleAccessoryServerBrowser; // @synthesize btleAccessoryServerBrowser=_btleAccessoryServerBrowser;
@property(retain, nonatomic) HAPAccessoryServerBrowserIP *ipAccessoryServerBrowser; // @synthesize ipAccessoryServerBrowser=_ipAccessoryServerBrowser;
@property(retain, nonatomic) NSMutableArray *accessoryServerBrowsers; // @synthesize accessoryServerBrowsers=_accessoryServerBrowsers;
@property(retain, nonatomic) NSMapTable *retrievalCompletionTuplesForAccessories; // @synthesize retrievalCompletionTuplesForAccessories=_retrievalCompletionTuplesForAccessories;
@property(retain, nonatomic) NSMapTable *pairingRetryTimersForAccessoryServers; // @synthesize pairingRetryTimersForAccessoryServers=_pairingRetryTimersForAccessoryServers;
@property(retain, nonatomic) NSHashTable *removeAccessoryInProgressForHMDAccessories; // @synthesize removeAccessoryInProgressForHMDAccessories=_removeAccessoryInProgressForHMDAccessories;
@property(retain, nonatomic) NSMapTable *addAccessoryCompletionHandlersForAccessoryServers; // @synthesize addAccessoryCompletionHandlersForAccessoryServers=_addAccessoryCompletionHandlersForAccessoryServers;
@property(retain, nonatomic) NSHashTable *unpairedSecondaryHAPAccessories; // @synthesize unpairedSecondaryHAPAccessories=_unpairedSecondaryHAPAccessories;
@property(retain, nonatomic) NSHashTable *currentlyPairingAccessories; // @synthesize currentlyPairingAccessories=_currentlyPairingAccessories;
@property(retain, nonatomic) NSMutableSet *pairedAccessories; // @synthesize pairedAccessories=_pairedAccessories;
@property(retain, nonatomic) NSMapTable *delegates; // @synthesize delegates=_delegates;
- (void)_enqueueRetrievalCompletionTuple:(id)arg1 forAccessory:(id)arg2;
- (BOOL)_isRetrievalInProgressForAccessory:(id)arg1;
- (void)_retrieveHAPAccessoryForHMDAccessory:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendRemoveCompletionStatusForHMDAccessories:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_notifyDelegatesOfPairedAccessories:(id)arg1 removedFromBridgeAccessory:(id)arg2;
- (void)_notifyDelegatesOfPairedAccessories:(id)arg1 addedToBridgeAccessory:(id)arg2;
- (id)_createNewlyPairedSecondaryAccessoriesWithIdentifier:(id)arg1;
- (id)_allAccessories;
- (void)_updatePairedAccessoriesForServer:(id)arg1;
- (void)_createPairedAccessoriesForUnpairedAccessory:(id)arg1 server:(id)arg2;
- (void)_disablePairedAccessoriesForServer:(id)arg1 error:(id)arg2;
- (id)_unpairedAccessoryForServer:(id)arg1;
- (void)_updatePairingRetryTimerForServer:(id)arg1 delay:(int)arg2;
- (void)_addUnpairedAccessoryForServer:(id)arg1;
- (id)_dequeueAllRetrievalCompletionTuplesForAccessory:(id)arg1;
- (id)_pairedAccessoriesForServer:(id)arg1;
- (BOOL)_accessoryServerIsBlocked:(id)arg1;
- (void)_promptForPairingPasswordForServer:(id)arg1;
- (id)_primaryAccessoryForServer:(id)arg1;
- (void)_sendPairingCompletionStatusForServer:(id)arg1 accessories:(id)arg2 error:(id)arg3;
- (void)_removeReachableAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeAccessoriesForPrimaryAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_pairAccessory:(id)arg1 home:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reachabilityTimerForBTLE; // @synthesize reachabilityTimerForBTLE=_reachabilityTimerForBTLE;
- (void)_removeUnpairedAccessory:(id)arg1;
- (void)_notifyDelegatesOfRemovedNewAccessory:(id)arg1;
- (void)_notifyDelegatesOfNewAccessory:(id)arg1;
- (void)_setBTLEPowerChangeCompletionHandler;
- (void)_startDiscoveringPairedAccessories;
- (void)addPairedAccessories:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)allPairedAccessories;
- (void)stopDiscoveringAccessories;
- (void)startDiscoveringAccessories;
- (void)_stopDiscoveringAccessories;
- (void)_startDiscoveringAccessories;
- (id)allUnpairedAccessories;
- (void)resetConfiguration;
- (void)retrieveHAPAccessoryForHMDAccessory:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)btleAccessoryReachabilityProbeTimer:(BOOL)arg1;
- (void)removePairingOnPrimaryAccessory:(id)arg1 forController:(id)arg2 publicKey:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addPairingOnPrimaryAccessory:(id)arg1 forController:(id)arg2 publicKey:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)pairAccessory:(id)arg1 home:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)accessoryWithUUID:(id)arg1;
@property(retain, nonatomic) NSMutableSet *unpairedAccessories; // @synthesize unpairedAccessories=_unpairedAccessories;
- (id)initWithPairedAccessories:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServer:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;
- (void)accessoryServer:(id)arg1 promptUserForPasswordWithType:(unsigned int)arg2;
- (void)accessoryServer:(id)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(int)arg2;
- (void)accessoryServer:(id)arg1 requestUserPermissionForUnauthenticatedAccessory:(id)arg2;
- (void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2;
- (void)accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
- (void)accessoryServer:(id)arg1 didDiscoverAccessoriesWithError:(id)arg2;
- (void)accessoryServerDidUpdateHasPairings:(id)arg1;
- (void)accessoryServer:(id)arg1 isBlockedWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

