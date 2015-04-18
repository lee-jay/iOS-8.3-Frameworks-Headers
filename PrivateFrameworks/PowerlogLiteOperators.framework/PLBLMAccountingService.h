//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLService.h"

@class NSDate, NSMutableArray, NSMutableDictionary, PLEntryNotificationOperatorComposition, PLNSTimerOperatorComposition, PLQLAccountingQuery, PLXPCListenerOperatorComposition;

@interface PLBLMAccountingService : PLService
{
    NSMutableDictionary *_queries;
    NSMutableDictionary *_postAccoutingQueries;
    NSMutableDictionary *_postpostAccoutingQueries;
    PLEntryNotificationOperatorComposition *_ioreportCallback;
    PLEntryNotificationOperatorComposition *_processmonitorCallback;
    PLEntryNotificationOperatorComposition *_processnetworkCallback;
    PLEntryNotificationOperatorComposition *_wifiCallback;
    PLEntryNotificationOperatorComposition *_bbCallback;
    PLEntryNotificationOperatorComposition *_LTESleepStatsQueryCallback;
    PLXPCListenerOperatorComposition *_xpcListenerDuetEvent;
    NSDate *_lastQueryRunTime;
    PLNSTimerOperatorComposition *_runQueryTimer;
    NSMutableDictionary *_daemonRename;
    NSMutableArray *_registeredNotifications;
    NSMutableArray *_snapRails;
    PLQLAccountingQuery *_autoLockQuery;
    PLNSTimerOperatorComposition *_lteSleepStatsQueryTimer;
    double _lastSafeTimeForSnapping;
    double _APSOCBasePower;
    double _highBrightnessThreshold;
}

+ (id)daemonsAccounted;
+ (id)gizmoExtensions;
+ (BOOL)isWatchExtensionForNetworking:(id)arg1;
+ (id)BBVoiceRailsForCurrentDevice;
+ (id)BBOOSRailsForCurrentDevice;
+ (id)GPSRailsForCurrentDevice;
+ (id)aggregatedData;
+ (id)aggregateNameAppEnergyBreakdown;
+ (id)entryEventNoneQueryTime;
+ (id)entryEventNoneDefinitionLogging;
+ (id)gizmoIDSTopicTransformation;
+ (id)gizmoDaemonTransformation;
+ (id)appNameForNetworkingExtension:(id)arg1;
+ (id)BBRailsForCurrentDevice;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)railDefinitions;
+ (id)defaults;
+ (void)load;
@property(retain) PLNSTimerOperatorComposition *lteSleepStatsQueryTimer; // @synthesize lteSleepStatsQueryTimer=_lteSleepStatsQueryTimer;
@property(retain) NSMutableArray *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
@property(retain) NSMutableDictionary *postpostAccoutingQueries; // @synthesize postpostAccoutingQueries=_postpostAccoutingQueries;
@property(retain) NSMutableDictionary *postAccoutingQueries; // @synthesize postAccoutingQueries=_postAccoutingQueries;
@property(retain) NSMutableDictionary *queries; // @synthesize queries=_queries;
- (void)testSnapping;
- (void)testRailEnergy;
- (id)setupForeGroundGGQuery;
- (id)setupForeGroundQuery;
- (id)setupExampleQuery;
- (void)exampleUsageOfGenericCreate:(id)arg1 withRange:(struct _PLTimeIntervalRange)arg2;
- (BOOL)isAppPresentInFGDictionary:(id)arg1 app:(id)arg2;
- (void)completeSnapLogging:(id)arg1;
@property(retain) PLQLAccountingQuery *autoLockQuery; // @synthesize autoLockQuery=_autoLockQuery;
@property(readonly) double APSOCBasePower; // @synthesize APSOCBasePower=_APSOCBasePower;
@property(retain) PLEntryNotificationOperatorComposition *LTESleepStatsQueryCallback; // @synthesize LTESleepStatsQueryCallback=_LTESleepStatsQueryCallback;
- (void)storeAggregatedResult:(id)arg1 withValue:(double)arg2;
@property(readonly) double highBrightnessThreshold; // @synthesize highBrightnessThreshold=_highBrightnessThreshold;
- (id)WebAppRunningInRange:(struct _PLTimeIntervalRange)arg1;
- (id)daemonRenameWhileStorage:(id)arg1;
- (void)runPostPostAccountingQueriesForQueryID:(id)arg1 withAccountedBuckets:(id)arg2;
- (void)setAccountingEntitiesLastTime;
@property(retain) NSDate *lastQueryRunTime; // @synthesize lastQueryRunTime=_lastQueryRunTime;
- (void)computeForegroundBackgroundTimeInRange:(struct _PLTimeIntervalRange)arg1;
- (void)storeQueryResult:(id)arg1 withEntryKeyName:(id)arg2 withAggKey:(id)arg3 forQuery:(id)arg4;
- (void)runPostAccountingQueriesForQuery:(id)arg1 withAccountedBuckets:(id)arg2;
- (double)snapRails:(id)arg1 withLastSnapTime:(double)arg2 withLoggingArray:(id)arg3;
- (void)triggerAgents;
@property(retain) NSMutableArray *snapRails; // @synthesize snapRails=_snapRails;
@property double lastSafeTimeForSnapping; // @synthesize lastSafeTimeForSnapping=_lastSafeTimeForSnapping;
- (double)lastBoundedTimeForAccountingWithNow:(id)arg1 withLastDate:(id)arg2;
@property(readonly) NSMutableDictionary *daemonRename; // @synthesize daemonRename=_daemonRename;
- (void)initAccountingEntitiesLastTime;
- (void)registerForLTESleepStatsQueryNotifications;
- (void)registerForMavBBHwOtherNotifications;
- (void)registerForBatteryNotifications;
- (void)registerForTelephonyActivityNotifications;
- (void)registerForSleepWakeNotifications;
- (void)registerForDisplayNotifications;
- (void)setAPSOCBasePower:(id)arg1;
- (void)runQueries:(id)arg1;
- (void)setupAutoLockQuery;
- (void)setSnapRail;
- (void)buildDaemonRename;
- (void)setupPostAccountingQueries;
- (void)setupQueries;
@property(retain) PLXPCListenerOperatorComposition *xpcListenerDuetEvent; // @synthesize xpcListenerDuetEvent=_xpcListenerDuetEvent;
@property(retain) PLEntryNotificationOperatorComposition *bbCallback; // @synthesize bbCallback=_bbCallback;
@property(retain) PLEntryNotificationOperatorComposition *processnetworkCallback; // @synthesize processnetworkCallback=_processnetworkCallback;
@property(retain) PLEntryNotificationOperatorComposition *processmonitorCallback; // @synthesize processmonitorCallback=_processmonitorCallback;
@property(retain) PLEntryNotificationOperatorComposition *ioreportCallback; // @synthesize ioreportCallback=_ioreportCallback;
@property(retain) PLEntryNotificationOperatorComposition *wifiCallback; // @synthesize wifiCallback=_wifiCallback;
@property(retain) PLNSTimerOperatorComposition *runQueryTimer; // @synthesize runQueryTimer=_runQueryTimer;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (id)init;

@end
