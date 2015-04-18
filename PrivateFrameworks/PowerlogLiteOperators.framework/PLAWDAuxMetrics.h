//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, PLOperator;

@interface PLAWDAuxMetrics : NSObject
{
    PLOperator *_operator;
    NSMutableSet *_runningMetrics;
}

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;
+ (id)entryEventPointDefinitions;
- (BOOL)dropFirstEntryReceived:(id)arg1 usingFilter:(id)arg2 andStartTime:(id)arg3;
- (double)getRailEnergyWithEntry:(id)arg1 withFilter:(id)arg2 isRailForward:(BOOL)arg3;
- (BOOL)doesInterfereWithChargerWithStartDate:(id)arg1 withEndDate:(id)arg2;
@property(retain, nonatomic) NSMutableSet *runningMetrics; // @synthesize runningMetrics=_runningMetrics;
@property __weak PLOperator *operator; // @synthesize operator=_operator;
- (void)handleChargerChangeWithState:(BOOL)arg1 withDate:(id)arg2;
- (BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)stopMetricCollection:(id)arg1;
- (void)startMetricCollection:(id)arg1;
- (void)resetTableWithEntryKey:(id)arg1;
- (id)initWithOperator:(id)arg1;
- (void).cxx_destruct;

@end
