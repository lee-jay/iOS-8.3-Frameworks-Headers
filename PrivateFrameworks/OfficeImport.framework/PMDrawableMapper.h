//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMDrawableMapper.h>

@class CMDrawingContext, OADShape;

@interface PMDrawableMapper : CMDrawableMapper
{
    OADShape *mShape;
    CMDrawingContext *mDrawingContext;
    BOOL mTopLevelMapper;
}

- (void)mapFreeForm:(id)arg1 orientedBounds:(id)arg2 transformedBounds:(struct CGRect *)arg3 state:(id)arg4;
- (struct CGRect)shapeTextBoxWithState:(id)arg1;
- (void)mapShapeAsBackgroundAt:(id)arg1 withState:(id)arg2;
- (void)mapRectangularShapeAt:(id)arg1 withState:(id)arg2;
- (BOOL)isTopLevelMapper;
- (void)setDrawingContext:(id)arg1;
- (void)setTopLevelMapper:(BOOL)arg1;
- (struct CGRect)slideRect;
- (void)mapChartAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)transformRectToPage:(struct CGRect)arg1;
- (void)mapBounds;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)drawingContext;
- (void)dealloc;

@end

