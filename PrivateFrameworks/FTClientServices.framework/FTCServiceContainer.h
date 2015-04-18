//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject
{
    FTCServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property(retain, nonatomic) FTCServiceMonitor *monitor; // @synthesize monitor=_monitor;
- (BOOL)removeListenerID:(id)arg1;
- (BOOL)addListenerID:(id)arg1;
- (BOOL)hasListenerID:(id)arg1;
@property(readonly, retain, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;
- (void)dealloc;
- (id)initWithServiceType:(int)arg1;

@end
