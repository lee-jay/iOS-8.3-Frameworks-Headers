//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOMapRegion, NSMutableArray, NSString;

@interface GEORPCorrectedLabel : PBCodable <NSCopying>
{
    unsigned long long _uid;
    GEOLatLng *_coordinate;
    NSString *_correctedValue;
    NSMutableArray *_featureHandles;
    GEOMapRegion *_featureRegion;
    NSString *_originalValue;
    BOOL _localizedLabels;
    struct {
        unsigned int uid:1;
        unsigned int localizedLabels:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *featureHandles; // @synthesize featureHandles=_featureHandles;
@property(retain, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL localizedLabels; // @synthesize localizedLabels=_localizedLabels;
@property(retain, nonatomic) GEOMapRegion *featureRegion; // @synthesize featureRegion=_featureRegion;
@property(retain, nonatomic) NSString *correctedValue; // @synthesize correctedValue=_correctedValue;
@property(retain, nonatomic) NSString *originalValue; // @synthesize originalValue=_originalValue;
@property(nonatomic) BOOL hasLocalizedLabels;
@property(nonatomic) BOOL hasUid;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) BOOL hasFeatureRegion;
@property(readonly, nonatomic) BOOL hasCorrectedValue;
@property(readonly, nonatomic) BOOL hasOriginalValue;
- (id)featureHandleAtIndex:(unsigned int)arg1;
- (void)clearFeatureHandles;
- (unsigned int)featureHandlesCount;
- (void)addFeatureHandle:(id)arg1;
@property(readonly, nonatomic) BOOL hasCoordinate;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
