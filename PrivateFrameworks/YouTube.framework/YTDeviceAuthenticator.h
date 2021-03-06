//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSData, NSMutableData, NSString, NSURLConnection;

@interface YTDeviceAuthenticator : NSObject <NSURLConnectionDelegate>
{
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSString *_token;
    double _timeTokenGranted;
    int _phase;
    NSData *_r1;
    NSData *_r1Hash;
    NSData *_r2;
    NSData *_hmac;
}

+ (id)sharedAuthenticator;
- (void)invalidateToken;
- (void)_succeeded;
- (BOOL)_authenticate2;
- (void)_connectionDidEnd;
- (void)_failWithErrorCode:(int)arg1;
- (BOOL)canAuthenticate;
- (BOOL)_authenticate1;
- (void)_clearNonces;
- (void)_loadStatusChanged;
- (void)_copyCertificateData:(id *)arg1 privateKey:(struct __SecKey **)arg2;
- (void)authenticate;
- (BOOL)isAuthenticating;
- (id)token;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

