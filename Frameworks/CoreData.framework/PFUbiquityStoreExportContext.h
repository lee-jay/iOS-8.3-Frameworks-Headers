//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSSQLCore, NSSet, NSString, PFUbiquityLocation, PFUbiquitySwitchboardCacheWrapper;

@interface PFUbiquityStoreExportContext : NSObject
{
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    NSMutableSet *_transactionEntries;
    NSSQLCore *_store;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
}

- (id)description;
- (void)dealloc;
- (id)addTransactionEntryForGlobalID:(id)arg1 andTransactionType:(int)arg2;
@property(retain, nonatomic) NSSQLCore *store; // @synthesize store=_store;
- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 forLocalPeerID:(id)arg3;
@property(readonly, nonatomic) NSSet *transactionEntries; // @synthesize transactionEntries=_transactionEntries;
@property(retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper; // @synthesize cacheWrapper=_cacheWrapper;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;

@end
