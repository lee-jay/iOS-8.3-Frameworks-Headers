//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable
{
    void *_addressBook;
    NSMutableDictionary *_addressBookCache;
}

+ (id)get;
@property void *addressBook; // @synthesize addressBook=_addressBook;
@property(retain) NSMutableDictionary *addressBookCache; // @synthesize addressBookCache=_addressBookCache;
- (void)performQuery_sync:(CDUnknownBlockType)arg1;
- (void)revertAddressBook:(BOOL)arg1;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)arg1;
- (void)createAddressBook;
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;

@end

