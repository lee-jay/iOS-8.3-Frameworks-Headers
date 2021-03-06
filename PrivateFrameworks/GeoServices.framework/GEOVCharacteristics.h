//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOVCharacteristics : PBCodable <NSCopying>
{
    NSMutableArray *_pointCharacteristics;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *pointCharacteristics; // @synthesize pointCharacteristics=_pointCharacteristics;
- (id)pointCharacteristicAtIndex:(unsigned int)arg1;
- (void)clearPointCharacteristics;
- (unsigned int)pointCharacteristicsCount;
- (void)addPointCharacteristic:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

