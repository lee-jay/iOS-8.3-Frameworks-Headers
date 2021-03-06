//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSCopying.h"

@class NSString;

@interface BSMachPort : NSObject <NSCopying, BSXPCCoding>
{
    unsigned int _port;
    unsigned int _sendRights;
    unsigned int _recvRights;
    BOOL _invalidated;
    unsigned int _portNumber;
    NSString *_debugDescription;
}

+ (id)bootstrapLookUpPortWithName:(id)arg1;
+ (id)taskNamePortForPID:(int)arg1;
+ (id)createReceiveRight;
+ (id)createSendRight;
+ (id)wrapSendRight:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1 withRights:(CDUnknownBlockType)arg2;
- (void)_addRight:(int)arg1;
- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(BOOL)arg2;
- (id)initWithRight:(int)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
@property(readonly, nonatomic) unsigned int port; // @synthesize port=_port;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isUsable;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

