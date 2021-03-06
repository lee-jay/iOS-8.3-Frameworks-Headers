//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSYDeviceSyncStateObserver.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface PSYSyncRestrictionProvider : NSObject <PSYDeviceSyncStateObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasReceivedStartSync;
    NSURL *_pairingDataURL;
    NSURL *_serviceDirectory;
    struct _opaque_pthread_mutex_t _serviceDirectoryLock;
    id <PSYSyncRestrictionProviderDelegate> _delegate;
    NSString *_serviceName;
    unsigned int _syncRestriction;
}

- (void)registerForFirstKeybagUnlockNotification;
- (void)keybagStateChanged;
- (id)serviceDirectory;
- (void)unregisterForFirstKeybagUnlockNotification;
- (void)_didUpdatePairingDataStoreURL:(id)arg1;
- (unsigned int)_restrictionForCurrentState;
- (void)_reloadPersistentData;
- (void)_createPairingDataDirectoryIfNeeded;
- (void)_setServiceDirectory:(id)arg1;
- (id)_pairingDataURL;
- (id)_dataFileName;
- (id)_serviceDirectory;
- (void)_updateSyncRestrictionIfNeeded;
- (id)pairingDataURL;
- (void)pairingUpdated;
- (void)_reloadPairingStorePath;
- (void)deviceSyncStateDidChange:(unsigned int)arg1;
@property unsigned int syncRestriction; // @synthesize syncRestriction=_syncRestriction;
- (void)serviceHasReceivedStartSync;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)registerForNotifications;
- (void)unregisterForNotifications;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PSYSyncRestrictionProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

