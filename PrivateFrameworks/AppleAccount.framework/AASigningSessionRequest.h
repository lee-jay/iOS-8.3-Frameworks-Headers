//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class NSData;

@interface AASigningSessionRequest : AARequest
{
    NSData *_sessionInfoRequestData;
}

+ (Class)responseClass;
- (id)urlRequest;
- (id)initWithURLString:(id)arg1 sessionInfoRequestData:(id)arg2;
- (void).cxx_destruct;

@end
