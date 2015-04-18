//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLService.h"

@class NSDictionary, PLNSNotificationOperatorComposition, PLNSTimerOperatorComposition, PLXPCResponderOperatorComposition;

@interface PLBLDService : PLService
{
    PLXPCResponderOperatorComposition *_xpcResponderUIBattery;
    PLXPCResponderOperatorComposition *_xpcResponderUIBatteryForModels;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    NSDictionary *_nonAppBundleIDsWhitelist;
    PLNSTimerOperatorComposition *_runLoggingTimer;
    double _appBreakdownThresholdPercent;
}

+ (id)entryEventPointBUILogging;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
@property(retain) PLNSTimerOperatorComposition *runLoggingTimer; // @synthesize runLoggingTimer=_runLoggingTimer;
@property(retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // @synthesize dailyTaskNotification=_dailyTaskNotification;
@property(retain) PLXPCResponderOperatorComposition *xpcResponderUIBatteryForModels; // @synthesize xpcResponderUIBatteryForModels=_xpcResponderUIBatteryForModels;
@property(retain) PLXPCResponderOperatorComposition *xpcResponderUIBattery; // @synthesize xpcResponderUIBattery=_xpcResponderUIBattery;
- (void)qualifierTesting;
- (id)TestQuery:(id)arg1;
- (id)getEntryForBundleName:(id)arg1 inAppArray:(id)arg2;
- (double)totalEnergyReturned:(id)arg1;
- (void)fetchAggregateResultsInRange:(struct _PLTimeIntervalRange)arg1;
@property(readonly) double appBreakdownThresholdPercent; // @synthesize appBreakdownThresholdPercent=_appBreakdownThresholdPercent;
- (id)getBatteryDrainInRange:(struct _PLTimeIntervalRange)arg1;
- (void)logEventPointBUIForBLDRetail:(BOOL)arg1;
- (void)trimQualifiers:(id)arg1 removeQualifier:(id)arg2 ifQualifierPresent:(id)arg3;
- (void)trimQualifiers:(id)arg1 combineOne:(id)arg2 combineTwo:(id)arg3 combineInto:(id)arg4;
- (id)combineAndTrimAppQualifiersArray:(id)arg1;
- (BOOL)setQualifier:(int)arg1 onBundle:(id)arg2;
- (BOOL)qualifierThresholdPass:(id)arg1 withQualifierRules:(id)arg2 forQualifierEntryKey:(id)arg3;
- (BOOL)isStringAValidName:(id)arg1;
@property(readonly) NSDictionary *nonAppBundleIDsWhitelist; // @synthesize nonAppBundleIDsWhitelist=_nonAppBundleIDsWhitelist;
- (BOOL)isStringAValidBundleName:(id)arg1;
- (void)addToDaemonTransformationForGizmo:(id)arg1;
- (void)addToDaemonTransformation:(id)arg1 withPluginEntry:(id)arg2;
- (double)getAppBreakdownThreshold;
- (id)reviseAppEnergyBreakdown:(id)arg1 withSumOfEnergyPercent:(int)arg2;
- (void)setQualifiersForAppArray:(id)arg1 withTotalEnergy:(double)arg2;
- (id)deletedAppNameForBundleID:(id)arg1;
- (BOOL)shouldAppBeDisplayed:(int)arg1 forQuery:(int)arg2;
- (int)appTypeForBundleID:(id)arg1 withValidBundles:(id)arg2 withDeletedApps:(id)arg3 withWebApps:(id)arg4;
- (id)reaccountExchangeEntries:(id)arg1;
- (id)combineEntitiesInArray:(id)arg1 withTransformation:(id)arg2;
- (BOOL)isALSON;
- (id)bldRetailResponseForRange:(struct _PLTimeIntervalRange)arg1 withArgs:(id)arg2 withValidBundle:(id)arg3 withDeletedApps:(id)arg4 withWebApps:(id)arg5 withDaemonTransformation:(id)arg6;
- (void)storeBLDRetailResponse:(struct _PLTimeIntervalRange)arg1 withArgs:(id)arg2 withKey:(id)arg3 withValidBundle:(id)arg4 withDeletedApps:(id)arg5 withWebApps:(id)arg6 withDaemonTransformation:(id)arg7;
- (id)aggregateStatsResultWithBucketLength:(double)arg1 inTimeIntervalRange:(struct _PLTimeIntervalRange)arg2;
- (void)bldRetailResponse:(id)arg1 withValidBundle:(id)arg2 withDeletedApps:(id)arg3 withWebApps:(id)arg4 withDaemonTransformation:(id)arg5;
- (void)logEventPointBUIWithUIData:(id)arg1 forBLDRetailData:(BOOL)arg2;
- (id)aggregateResult:(id)arg1 withBucketLength:(double)arg2 inTimeIntervalRange:(struct _PLTimeIntervalRange)arg3 queryType:(int)arg4 withValidBundle:(id)arg5 withDeletedApps:(id)arg6 withWebApps:(id)arg7 withDaemonTransformation:(id)arg8;
- (id)daemonTransformation;
- (id)webAppSet;
- (id)deletedAppSet;
- (id)recommendSetting:(double)arg1 inTimeIntervalRange:(struct _PLTimeIntervalRange)arg2;
- (id)UIQueryResponseForModels:(id)arg1;
- (id)UIQueryResponse:(id)arg1;
- (void)logEventPointBUI;
- (void)initNonAppBundleIDsWhitelist;
- (id)screenLock:(id)arg1;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (id)init;

@end
