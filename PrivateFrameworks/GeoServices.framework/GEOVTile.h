//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOVConnectivity, NSData, NSMutableArray;

@interface GEOVTile : PBCodable <NSCopying>
{
    NSMutableArray *_coastlines;
    GEOVConnectivity *_connectivity;
    NSMutableArray *_labelLanguages;
    NSData *_labels;
    NSMutableArray *_lines;
    int _minZ;
    NSMutableArray *_points;
    NSMutableArray *_polygons;
    unsigned int _sectionDeltaLengthBits;
    unsigned int _vertexBits;
    NSData *_vertices;
    int _zBits;
    struct {
        unsigned int minZ:1;
        unsigned int sectionDeltaLengthBits:1;
        unsigned int vertexBits:1;
        unsigned int zBits:1;
    } _has;
}

@property(retain, nonatomic) NSData *labels; // @synthesize labels=_labels;
- (void)addLine:(id)arg1;
@property(retain, nonatomic) NSData *vertices; // @synthesize vertices=_vertices;
@property(retain, nonatomic) NSMutableArray *points; // @synthesize points=_points;
@property(retain, nonatomic) NSMutableArray *coastlines; // @synthesize coastlines=_coastlines;
- (unsigned int)coastlinesCount;
@property(retain, nonatomic) NSMutableArray *polygons; // @synthesize polygons=_polygons;
- (unsigned int)polygonsCount;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
- (unsigned int)linesCount;
@property(nonatomic) int minZ; // @synthesize minZ=_minZ;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *labelLanguages; // @synthesize labelLanguages=_labelLanguages;
@property(nonatomic) int zBits; // @synthesize zBits=_zBits;
@property(retain, nonatomic) GEOVConnectivity *connectivity; // @synthesize connectivity=_connectivity;
@property(nonatomic) BOOL hasSectionDeltaLengthBits;
@property(nonatomic) unsigned int sectionDeltaLengthBits; // @synthesize sectionDeltaLengthBits=_sectionDeltaLengthBits;
@property(nonatomic) BOOL hasVertexBits;
@property(nonatomic) unsigned int vertexBits; // @synthesize vertexBits=_vertexBits;
@property(nonatomic) BOOL hasZBits;
@property(nonatomic) BOOL hasMinZ;
@property(readonly, nonatomic) BOOL hasConnectivity;
@property(readonly, nonatomic) BOOL hasLabels;
- (id)labelLanguageAtIndex:(unsigned int)arg1;
- (void)clearLabelLanguages;
- (unsigned int)labelLanguagesCount;
- (id)coastlinesAtIndex:(unsigned int)arg1;
- (void)clearCoastlines;
- (id)pointAtIndex:(unsigned int)arg1;
- (void)clearPoints;
- (unsigned int)pointsCount;
- (id)polygonAtIndex:(unsigned int)arg1;
- (void)clearPolygons;
- (id)lineAtIndex:(unsigned int)arg1;
- (void)clearLines;
- (void)addLabelLanguage:(id)arg1;
- (void)addCoastlines:(id)arg1;
- (void)addPolygon:(id)arg1;
@property(readonly, nonatomic) BOOL hasVertices;
- (id)dictionaryRepresentation;
- (void)addPoint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

