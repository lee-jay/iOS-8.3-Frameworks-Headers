//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString, NSTimeZone, NSURL;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying>
{
    BOOL _allDay;
    BOOL _tentative;
    BOOL _acknowledged;
    BOOL _isOffsetFromTravelTimeStart;
    BOOL _hasGeoLocationCoordinates;
    BOOL _hasOrganizerThatIsNotCurrentUser;
    NSString *_publisherBulletinID;
    NSString *_title;
    NSString *_location;
    NSDate *_eventDate;
    NSDate *_endDate;
    NSTimeZone *_eventTimeZone;
    NSURL *_action;
    NSURL *_entityID;
    int _proximity;
    NSString *_externalID;
    NSString *_dismissalID;
    NSString *_alarmID;
    NSString *_startLocationRouting;
    NSString *_organizerEmailAddress;
    id <EKTravelAdvice> _latestTravelAdvice;
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;
    NSDate *_firstDateAlertedForTravelAdvice;
    CDStruct_2c43369c _geoLocationCoordinates;
}

@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) BOOL allDay; // @synthesize allDay=_allDay;
@property(readonly, nonatomic) NSDate *eventDate; // @synthesize eventDate=_eventDate;
@property(readonly, nonatomic) NSString *recordID;
@property(readonly, nonatomic) NSString *location; // @synthesize location=_location;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *action; // @synthesize action=_action;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSDate *firstDateAlertedForTravelAdvice; // @synthesize firstDateAlertedForTravelAdvice=_firstDateAlertedForTravelAdvice;
@property(retain, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // @synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime;
@property(retain, nonatomic) id <EKTravelAdvice> latestTravelAdvice; // @synthesize latestTravelAdvice=_latestTravelAdvice;
@property(retain, nonatomic) NSString *organizerEmailAddress; // @synthesize organizerEmailAddress=_organizerEmailAddress;
@property(nonatomic) BOOL hasOrganizerThatIsNotCurrentUser; // @synthesize hasOrganizerThatIsNotCurrentUser=_hasOrganizerThatIsNotCurrentUser;
@property(retain, nonatomic) NSString *startLocationRouting; // @synthesize startLocationRouting=_startLocationRouting;
@property(nonatomic) CDStruct_2c43369c geoLocationCoordinates; // @synthesize geoLocationCoordinates=_geoLocationCoordinates;
@property(nonatomic) BOOL hasGeoLocationCoordinates; // @synthesize hasGeoLocationCoordinates=_hasGeoLocationCoordinates;
@property(readonly, nonatomic) BOOL isOffsetFromTravelTimeStart; // @synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart;
@property(readonly, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property(readonly, nonatomic) BOOL tentative; // @synthesize tentative=_tentative;
@property(readonly, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property(readonly, nonatomic) NSTimeZone *eventTimeZone; // @synthesize eventTimeZone=_eventTimeZone;
- (id)initWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(BOOL)arg6 tentative:(BOOL)arg7 publisherBulletinID:(id)arg8 entityID:(id)arg9 action:(id)arg10 proximity:(int)arg11 externalID:(id)arg12 acknowledged:(BOOL)arg13 dismissalID:(id)arg14 alarmID:(id)arg15 isOffsetFromTravelTimeStart:(BOOL)arg16;
@property(readonly, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
@property(readonly, nonatomic) int proximity; // @synthesize proximity=_proximity;
@property(readonly, nonatomic) BOOL acknowledged; // @synthesize acknowledged=_acknowledged;
@property(readonly, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, nonatomic) NSURL *entityID; // @synthesize entityID=_entityID;

@end

