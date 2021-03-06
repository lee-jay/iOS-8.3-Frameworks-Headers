//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString, UIBezierPath, UIKBHandwritingBoxcarFilterPointFIFO, UIKBHandwritingQuadCurvePointFIFO, UIKBHandwritingStrokePointFIFO, UIKBHandwritingStrokeView;

@interface UIKBHandwritingView : UIKBKeyView <UIGestureRecognizerDelegate>
{
    UIKBHandwritingStrokeView *_strokeView;
    float _inkWidth;
    struct CGColor *_inkColor;
    struct CGImage *_inkMask;
    NSMutableArray *_interpolatedPaths;
    UIBezierPath *_currentPath;
    UIKBHandwritingStrokePointFIFO *_strokeFIFO;
    UIKBHandwritingBoxcarFilterPointFIFO *_smoothingFIFO;
    UIKBHandwritingQuadCurvePointFIFO *_interpolatingFIFO;
}

- (void)addInkPoint:(struct CGPoint)arg1;
@property(retain, nonatomic) UIBezierPath *currentPath; // @synthesize currentPath=_currentPath;
@property(nonatomic) struct CGColor *inkColor; // @synthesize inkColor=_inkColor;
@property(retain, nonatomic) UIKBHandwritingStrokePointFIFO *strokeFIFO; // @synthesize strokeFIFO=_strokeFIFO;
@property(retain, nonatomic) UIKBHandwritingBoxcarFilterPointFIFO *smoothingFIFO; // @synthesize smoothingFIFO=_smoothingFIFO;
@property(retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) UIKBHandwritingStrokeView *strokeView; // @synthesize strokeView=_strokeView;
@property(retain, nonatomic) NSMutableArray *interpolatedPaths; // @synthesize interpolatedPaths=_interpolatedPaths;
- (void)updateInkColor;
@property(nonatomic) float inkWidth; // @synthesize inkWidth=_inkWidth;
@property(nonatomic) struct CGImage *inkMask; // @synthesize inkMask=_inkMask;
- (void)deleteStrokesAtIndexes:(id)arg1;
- (BOOL)shouldCache;
- (void)clearAndNotify:(BOOL)arg1;
- (void)send;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)log;
- (BOOL)cancelTouchTracking;
- (void)setRenderConfig:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

