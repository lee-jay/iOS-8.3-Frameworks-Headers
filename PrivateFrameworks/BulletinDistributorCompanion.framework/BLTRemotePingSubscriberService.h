//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BLTPingService.h"
#import "NSXPCListenerDelegate.h"

@class NSString, NSXPCConnection, NSXPCListener;

@interface BLTRemotePingSubscriberService : NSObject <NSXPCListenerDelegate, BLTPingService>
{
    id <BLTPingSubscribing> _delegate;
    NSXPCConnection *_connectionToServer;
    NSXPCConnection *_connectionFromServer;
    NSXPCListener *_listener;
    NSString *_machServiceName;
}

- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_connect;
@property(retain, nonatomic) NSXPCConnection *connectionFromServer; // @synthesize connectionFromServer=_connectionFromServer;
@property(retain, nonatomic) NSXPCConnection *connectionToServer; // @synthesize connectionToServer=_connectionToServer;
- (void)_createXPCService;
@property(copy, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeWithMachServiceName:(id)arg1;
- (void)sendBulletinSummary:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2;
- (void)subscribeToSectionID:(id)arg1;
- (void)unsubscribeFromSectionID:(id)arg1;
- (void)pingWithBulletin:(id)arg1;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)arg1;
@property(nonatomic) __weak id <BLTPingSubscribing> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
