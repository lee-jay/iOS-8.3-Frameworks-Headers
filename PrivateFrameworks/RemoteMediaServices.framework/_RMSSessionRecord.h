//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RMSPowerAssertion, RMSRunAssertion;

@interface _RMSSessionRecord : NSObject
{
    int _refreshCount;
    int _timeout;
    id _session;
    RMSPowerAssertion *_powerAssertion;
    RMSRunAssertion *_runAssertion;
}

@property(retain, nonatomic) RMSRunAssertion *runAssertion; // @synthesize runAssertion=_runAssertion;
@property(nonatomic) int refreshCount; // @synthesize refreshCount=_refreshCount;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) RMSPowerAssertion *powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(retain, nonatomic) id session; // @synthesize session=_session;
- (void).cxx_destruct;

@end

