//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CUIPSDImageRef.h"

@class NSArray;

@interface CTDPSDPreviewRef : CUIPSDImageRef
{
    struct _PSDImageInfo _imageInfo;
    int _layerCount;
    int _sliceCount;
    int _columnWidth;
    int _rowHeight;
    NSArray *_layerIndexLayout;
    int _sliceRowCount;
    int _sliceColumnCount;
    NSArray *_sliceRects;
}

- (int)indexOfDrawingLayerType:(int)arg1;
- (int)numberOfAlphaChannels;
- (int)numberOfGradientLayers;
- (BOOL)hasGradient;
- (BOOL)hasRegularSliceGrid;
- (void)evaluateSliceGrid;
- (int)sliceColumnCount;
- (int)sliceRowCount;
- (id)initWithPath:(id)arg1;
- (void)dealloc;

@end
