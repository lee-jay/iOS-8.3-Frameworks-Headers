//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSSet;

@interface ACDAccessPluginManager : NSObject
{
    NSSet *_accessPlugins;
    NSObject<OS_dispatch_queue> *_accessPluginQueue;
}

- (id)_authorizationPluginForAccountType:(id)arg1;
- (void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
- (id)init;

@end
