//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CLFloor, CLLocationMatchInfo, NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) CDStruct_7a56d1c9 clientLocation;
@property(readonly, nonatomic) double course;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) double altitude;
- (double)distanceFromLocation:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
@property(readonly, nonatomic) NSString *iso6709Notation;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
@property(readonly, nonatomic) double verticalAccuracy;
@property(readonly, nonatomic) double horizontalAccuracy;
@property(readonly, nonatomic) unsigned int integrity;
- (void)setHorizontalAccuracy:(double)arg1;
- (id)shortDescription;
@property(readonly, nonatomic) double speed;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int type;
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, copy, nonatomic) NSString *description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly, copy, nonatomic) CLFloor *floor;
@property(readonly, nonatomic) double rawCourse;
- (id)initWithClientLocation:(CDStruct_7a56d1c9)arg1 matchInfo:(id)arg2;
@property(readonly, nonatomic) CLLocationMatchInfo *matchInfo;
- (id)snapToResolution:(double)arg1;
- (id)initWithClientLocation:(CDStruct_7a56d1c9)arg1;
- (id)propagateLocationToTime:(double)arg1;
- (double)getDistanceFrom:(id)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee rawCoordinate;
- (id)_initWithCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 floor:(int)arg8;

@end
