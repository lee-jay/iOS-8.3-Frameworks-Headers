//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLService.h"

@class NSMutableDictionary, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition;

@interface PLBLMDebugService : PLService
{
    PLXPCListenerOperatorComposition *_xpcListenerBLMDebugTrigger;
    PLXPCResponderOperatorComposition *_xpcResponderBLMDebugQuery;
    PLEntryNotificationOperatorComposition *_ioreportCallback;
    PLEntryNotificationOperatorComposition *_processmonitorCallback;
    PLEntryNotificationOperatorComposition *_processnetworkCallback;
    PLEntryNotificationOperatorComposition *_wifiCallback;
    PLEntryNotificationOperatorComposition *_bbCallback;
    NSMutableDictionary *_triggers;
}

+ (id)entryEventNoneDefinitionBLMDebug;
+ (id)entryEventNoneDefinitions;
+ (void)load;
@property(retain) PLXPCResponderOperatorComposition *xpcResponderBLMDebugQuery; // @synthesize xpcResponderBLMDebugQuery=_xpcResponderBLMDebugQuery;
@property(retain) PLXPCListenerOperatorComposition *xpcListenerBLMDebugTrigger; // @synthesize xpcListenerBLMDebugTrigger=_xpcListenerBLMDebugTrigger;
- (id)Testservice:(id)arg1;
- (id)logRailData:(id)arg1 withTriggerName:(id)arg2 inTimeRange:(struct _PLTimeIntervalRange)arg3;
@property(retain) PLEntryNotificationOperatorComposition *bbCallback; // @synthesize bbCallback=_bbCallback;
@property(retain) PLEntryNotificationOperatorComposition *processnetworkCallback; // @synthesize processnetworkCallback=_processnetworkCallback;
@property(retain) PLEntryNotificationOperatorComposition *processmonitorCallback; // @synthesize processmonitorCallback=_processmonitorCallback;
@property(retain) PLEntryNotificationOperatorComposition *ioreportCallback; // @synthesize ioreportCallback=_ioreportCallback;
@property(retain) PLEntryNotificationOperatorComposition *wifiCallback; // @synthesize wifiCallback=_wifiCallback;
- (id)respondBLMDDebugQuery:(id)arg1;
- (void)triggerSelectorAtDate:(id)arg1 withSelector:(SEL)arg2 withUseInfo:(id)arg3;
- (void)triggerLoggersNow:(id)arg1;
- (void)registerTrigger:(id)arg1;
- (void)initOperatorDependancies;
@property(retain) NSMutableDictionary *triggers; // @synthesize triggers=_triggers;
- (void).cxx_destruct;
- (id)init;

@end
