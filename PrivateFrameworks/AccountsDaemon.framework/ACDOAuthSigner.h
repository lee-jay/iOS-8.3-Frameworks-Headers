//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACDOAuthSignerProtocol.h"

@class ACDClient, ACDClientAuthorizationManager, ACDDatabase, NSString;

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol>
{
    ACDDatabase *_database;
    ACDClient *_client;
    ACDClientAuthorizationManager *_authorizationManager;
    BOOL _shouldIncludeAppIdInRequest;
}

- (id)initWithClient:(id)arg1;
- (id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (BOOL)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;
- (id)csForAccountType:(id)arg1;
- (id)ckForAccountType:(id)arg1;
- (void)setClientBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)setShouldIncludeAppIdInRequest:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

