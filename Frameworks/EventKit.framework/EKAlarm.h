//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import "NSCopying.h"

@class EKCalendarItem, EKObjectToOneRelation, EKStructuredLocation, NSArray, NSDate, NSString;

@interface EKAlarm : EKObject <NSCopying>
{
    EKObjectToOneRelation *_locationRelation;
}

+ (double)defaultGeofencedReminderRadius;
+ (BOOL)areLocationsCurrentlyEnabled;
+ (BOOL)areLocationsAllowed;
+ (id)alarmWithAbsoluteDate:(id)arg1;
+ (BOOL)areLocationsAvailable;
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)arg1;
+ (int)_currentAuthorizationStatus;
+ (id)alarmWithRelativeOffset:(double)arg1;
- (BOOL)validate:(id *)arg1;
@property(retain, nonatomic) EKCalendarItem *owner; // @dynamic owner;
@property(readonly, nonatomic) NSString *UUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) EKObjectToOneRelation *locationRelation; // @synthesize locationRelation=_locationRelation;
@property(readonly, nonatomic) BOOL isSnoozedAlarm;
- (void)removeSnoozedAlarm:(id)arg1;
- (void)addSnoozedAlarm:(id)arg1;
@property(copy, nonatomic) NSArray *snoozedAlarms;
@property(nonatomic, getter=isDefaultAlarm) BOOL defaultAlarm;
- (id)ownerUUID;
@property(copy, nonatomic) NSDate *acknowledgedDate;
@property(nonatomic) int proximity;
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;
@property(retain, nonatomic) EKAlarm *originalAlarm;
- (id)_snoozedAlarmsRelation;
- (id)_originalAlarmRelation;
- (id)_locationRelation;
@property(copy, nonatomic) NSDate *absoluteDate;
- (id)initWithRelativeOffset:(double)arg1;
- (id)initWithAbsoluteDate:(id)arg1;
- (BOOL)rebase;
@property(nonatomic) double relativeOffset;
@property(readonly) BOOL isAbsolute;
- (id)lazyLoadRelationForKey:(id)arg1;
@property(readonly, nonatomic) NSString *externalID;

@end

