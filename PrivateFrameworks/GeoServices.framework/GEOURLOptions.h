//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOURLSerializable.h"
#import "NSCopying.h"

@class GEOURLCamera, GEOURLCenterSpan, GEOURLRouteHandle, NSString;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying>
{
    GEOURLCamera *_camera;
    GEOURLCenterSpan *_centerSpan;
    int _mapType;
    NSString *_referralIdentifier;
    GEOURLRouteHandle *_routeHandle;
    int _transportType;
    int _userTrackingMode;
    BOOL _enableTraffic;
    struct {
        unsigned int mapType:1;
        unsigned int transportType:1;
        unsigned int userTrackingMode:1;
        unsigned int enableTraffic:1;
    } _has;
}

@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) GEOURLCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) int userTrackingMode; // @synthesize userTrackingMode=_userTrackingMode;
@property(nonatomic) BOOL hasUserTrackingMode;
@property(nonatomic) BOOL hasEnableTraffic;
@property(nonatomic) BOOL hasMapType;
- (id)urlRepresentation;
@property(retain, nonatomic) NSString *referralIdentifier; // @synthesize referralIdentifier=_referralIdentifier;
@property(nonatomic) BOOL enableTraffic; // @synthesize enableTraffic=_enableTraffic;
@property(retain, nonatomic) GEOURLCenterSpan *centerSpan; // @synthesize centerSpan=_centerSpan;
- (id)initWithUrlRepresentation:(id)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(readonly, nonatomic) BOOL hasReferralIdentifier;
@property(readonly, nonatomic) BOOL hasCenterSpan;
@property(readonly, nonatomic) BOOL hasCamera;
@property(retain, nonatomic) GEOURLRouteHandle *routeHandle; // @synthesize routeHandle=_routeHandle;
@property(readonly, nonatomic) BOOL hasRouteHandle;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

