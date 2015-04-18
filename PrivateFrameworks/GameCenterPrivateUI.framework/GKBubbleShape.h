//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GKBubbleShape : NSObject
{
    struct GKVertexCurve *_vertexCurves;
    unsigned int _vertexCount;
    float _vertexVariance;
    float _controlpointVariance;
    float _endpointVariance;
}

+ (id)standardBezierPathForSize:(struct CGSize)arg1;
+ (id)standardBubbleShape;
@property(nonatomic) unsigned int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(nonatomic) float endpointVariance; // @synthesize endpointVariance=_endpointVariance;
@property(nonatomic) float controlpointVariance; // @synthesize controlpointVariance=_controlpointVariance;
@property(nonatomic) float vertexVariance; // @synthesize vertexVariance=_vertexVariance;
@property(nonatomic) struct GKVertexCurve *vertexCurves; // @synthesize vertexCurves=_vertexCurves;
- (void)generateVertexCurves;
- (id)initWithVertexCount:(unsigned int)arg1 vertexVariance:(float)arg2 endpointVariance:(float)arg3 controlpointVariance:(float)arg4;
- (id)pathForSize:(struct CGSize)arg1;
- (void)dealloc;

@end
