//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ATIDSSocket, IDSDevice, MSVXPCTransaction;

@interface ATIDSConnectionInfo : NSObject
{
    MSVXPCTransaction *_xpcTransaction;
    IDSDevice *_device;
    int _priority;
    unsigned int _connectionState;
    unsigned int _failureCount;
    ATIDSSocket *_socket;
    double _wakeupTimestamp;
}

@property(retain, nonatomic) IDSDevice *device; // @synthesize device=_device;
@property(nonatomic) unsigned int failureCount; // @synthesize failureCount=_failureCount;
@property(nonatomic) unsigned int connectionState; // @synthesize connectionState=_connectionState;
@property(nonatomic) double wakeupTimestamp; // @synthesize wakeupTimestamp=_wakeupTimestamp;
- (void).cxx_destruct;
@property(nonatomic) int priority; // @synthesize priority=_priority;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) ATIDSSocket *socket; // @synthesize socket=_socket;

@end
