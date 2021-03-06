//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (Monotonic)
+ (id)monotonicDateWithTimeIntervalSinceNow:(double)arg1;
+ (id)monotonicDate;
+ (id)filenameDateStringWithStartDate:(id)arg1 endDate:(id)arg2;
+ (BOOL)dateIsMidnightLocalTime:(id)arg1;
+ (id)defaultDateFormatter;
+ (id)nearestMidnightAfterDate:(id)arg1;
+ (id)nearestMidnightBeforeDate:(id)arg1;
- (double)timeIntervalSinceMonitonicNow;
- (id)convertFromMonotonicToSystem;
- (id)convertFromSystemToMonotonic;
- (id)convertFromBasebandToMonotonic;
- (BOOL)isInMonotonicPastWithDistance:(double)arg1;
- (BOOL)isInMonotonicFutureWithDistance:(double)arg1;
- (id)convertFromMonotonicToBaseband;
- (BOOL)isInMonotonicFuture;
@end

