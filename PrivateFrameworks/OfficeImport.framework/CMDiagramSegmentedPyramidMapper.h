//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramSegmentedPyramidMapper : CMDiagramShapeMapper
{
}

- (unsigned int)pointCount;
- (unsigned int)layerCount;
- (id)_suggestedBoundsForPyramidLayerWithIndex:(unsigned int)arg1 inLayer:(unsigned int)arg2 andSlice:(unsigned int)arg3;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned int)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
