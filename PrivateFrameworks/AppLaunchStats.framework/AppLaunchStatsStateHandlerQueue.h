//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DuetLoggerProtocol.h"

@class NSMutableArray;

@interface AppLaunchStatsStateHandlerQueue : NSObject <DuetLoggerProtocol>
{
    NSMutableArray *bgDataReadHandlerQueue;
    NSMutableArray *dataReadHandlerQueue;
    NSMutableArray *dataBudgetHandlerQueue;
    NSMutableArray *powerFetchBudgetHandlerQueue;
    NSMutableArray *powerPushBudgetHandlerQueue;
    NSMutableArray *bgNDISCDataReadHandlerQueue;
    NSMutableArray *appForecastHandlerQueue;
    NSMutableArray *dataForecastHandlerQueue;
    NSMutableArray *powerForecastHandlerQueue;
    NSMutableArray *queryHandlerQueue;
    NSMutableArray *trendHandlerQueue;
    NSMutableArray *ok2LaunchHandlerQueue;
    NSMutableArray *scoreHandlerQueue;
    NSMutableArray *databaseAgeHandlerQueue;
    NSMutableArray *noprewarmListHandlerQueue;
}

@property(readonly, nonatomic) NSMutableArray *dataBudgetHandlerQueue; // @synthesize dataBudgetHandlerQueue;
- (void)enQueue:(id)arg1 withQueue:(id)arg2;
@property(readonly, nonatomic) NSMutableArray *bgNDISCDataReadHandlerQueue; // @synthesize bgNDISCDataReadHandlerQueue;
@property(readonly, nonatomic) NSMutableArray *bgDataReadHandlerQueue; // @synthesize bgDataReadHandlerQueue;
@property(readonly, nonatomic) NSMutableArray *powerPushBudgetHandlerQueue; // @synthesize powerPushBudgetHandlerQueue;
@property(readonly, nonatomic) NSMutableArray *powerFetchBudgetHandlerQueue; // @synthesize powerFetchBudgetHandlerQueue;
@property(readonly, nonatomic) NSMutableArray *dataReadHandlerQueue; // @synthesize dataReadHandlerQueue;
@property(readonly, nonatomic) NSMutableArray *trendHandlerQueue; // @synthesize trendHandlerQueue;
@property(readonly, nonatomic) NSMutableArray *powerForecastHandlerQueue; // @synthesize powerForecastHandlerQueue;
@property(readonly, nonatomic) NSMutableArray *appForecastHandlerQueue; // @synthesize appForecastHandlerQueue;
@property(readonly, nonatomic) NSMutableArray *dataForecastHandlerQueue; // @synthesize dataForecastHandlerQueue;
@property(readonly, nonatomic) NSMutableArray *queryHandlerQueue; // @synthesize queryHandlerQueue;
@property(readonly, nonatomic) NSMutableArray *ok2LaunchHandlerQueue; // @synthesize ok2LaunchHandlerQueue;
@property(readonly, nonatomic) NSMutableArray *scoreHandlerQueue; // @synthesize scoreHandlerQueue;
@property(readonly, nonatomic) NSMutableArray *noprewarmListHandlerQueue; // @synthesize noprewarmListHandlerQueue;
- (id)deQueue:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *databaseAgeHandlerQueue; // @synthesize databaseAgeHandlerQueue;
- (void)logLight:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void).cxx_destruct;
- (id)init;

@end
