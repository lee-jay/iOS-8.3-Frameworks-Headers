//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@class NSDate, NSNumber, NSUUID;

@interface CMNatalieData : CMLogItem
{
    int fRecordId;
    double fStartDate;
    int fSession;
    double fMets;
    double fNatalies;
    double fBasalNatalies;
    NSUUID *fSourceId;
}

+ (BOOL)supportsSecureCoding;
+ (id)maxNatalieEntries;
+ (id)sessionName:(int)arg1;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSUUID *sourceId;
@property(readonly, nonatomic) int recordId;
@property(readonly, nonatomic) int session;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSNumber *basalNatalies;
@property(readonly, nonatomic) NSNumber *natalies;
@property(readonly, nonatomic) NSNumber *mets;
- (id)initWithStartDate:(double)arg1 recordId:(int)arg2 session:(int)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 timestamp:(double)arg7 sourceId:(id)arg8;

@end
