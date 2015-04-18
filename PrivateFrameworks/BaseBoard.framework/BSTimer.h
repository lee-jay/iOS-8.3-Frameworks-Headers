//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSDispatchSource, NSObject<OS_dispatch_queue>;

@interface BSTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    BSDispatchSource *_source;
    double _fireInterval;
    double _repeatInterval;
    double _leewayInterval;
}

+ (id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)schedule;
- (id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)cancel;

@end
