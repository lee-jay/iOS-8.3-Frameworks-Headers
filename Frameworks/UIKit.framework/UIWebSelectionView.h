//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIWebDocumentView, UIWebSelection, UIWebSelectionGraph, UIWebSelectionHandle, UIWebSelectionNode, UIWebSelectionOutline, UIWebTextRangeView;

@interface UIWebSelectionView : UIView
{
    UIView *_center;
    struct CGRect _selectionFrame;
    UIWebSelectionHandle *_top;
    UIWebSelectionHandle *_right;
    UIWebSelectionHandle *_bottom;
    UIWebSelectionHandle *_left;
    UIWebSelectionOutline *_outline;
    UIWebTextRangeView *_textRangeView;
    UIWebDocumentView *_documentView;
    UIWebSelectionNode *_selectionNode;
    UIWebSelectionGraph *_selectionGraph;
    float _growThreshold;
    float _shrinkThreshold;
    struct {
        UIWebSelectionHandle *scrollingHandle;
        double startTime;
        int direction;
        NSTimer *timer;
    } _autoscrollData;
    struct {
        UIWebSelectionHandle *activeHandle;
        struct CGPoint handleCenterStart;
        float handleOffset;
    } _blockSelectionData;
    struct {
        UIWebSelectionHandle *start;
        UIWebSelectionHandle *end;
        struct CGSize startingOffset;
        char anchorAtStart;
        struct {
            char flipPossible;
            char rectsChanged;
            struct CGRect originalSelectionRect;
        } flipData;
    } _rangedSelectionData;
    BOOL _creatingSelection;
    int _nestedLayoutCalls;
    BOOL _calloutBarIsHiddenBeforeRotation;
    BOOL _rotating;
    int _selectionInFixedPosition;
}

- (BOOL)canFlip;
- (void)touchChanged:(id)arg1 forHandleInText:(id)arg2;
- (void)setSelectionFrame:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)calloutBar:(id)arg1 selectedCommand:(id)arg2;
- (void)updateForChangedLayoutWhileManipulatingBlockSelectionHandle;
- (BOOL)activelyManipulatingBlockSelectionHandle;
- (void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;
- (BOOL)activelyManipulatingTextSelectionHandle;
- (id)activeHandle;
- (void)updateFrameAndHandlesWithAnimation:(BOOL)arg1;
- (id)nodeInPristineGraphAtPoint:(struct CGPoint)arg1;
- (void)resetSelection;
- (void)shiftWebRangeSelectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)touchChanged:(id)arg1 forHandle:(id)arg2;
- (void)autoscrollTimerFired:(id)arg1;
- (int)autoscrollDirectionsForHandle:(id)arg1;
@property(retain, nonatomic) UIWebSelectionNode *selectionNode; // @synthesize selectionNode=_selectionNode;
- (BOOL)isHorizontalWritingMode;
- (void)animateSloppyReleaseOfHandleInText:(id)arg1 withMagnifier:(id)arg2;
- (void)switchToBlockModeForHandle:(id)arg1;
- (BOOL)shouldSwitchToBlockModeForHandle:(id)arg1;
- (void)setOrientationOfMagnifier:(id)arg1 forHandleInText:(id)arg2;
- (void)considerFlipping;
- (void)stopAnyAutoscrolling;
- (void)updateAutoscrollForHandle:(id)arg1;
- (void)switchToTextModeForHandle:(id)arg1;
- (void)contractForActiveHandle;
- (BOOL)shouldContractForActiveHandle;
- (void)expandForActiveHandle;
- (BOOL)shouldExpandForActiveHandle;
- (void)computeExpandAndContractThresholdsForActiveHandle;
- (struct CGRect)desiredBox;
@property(nonatomic) struct CGRect selectionFrame;
- (struct CGRect)fetchSelectionBoundingRect;
- (struct CGRect)fetchSelectionBoundingTextSelectionRect;
- (void)setHandleCenters;
- (void)hideCopyCallout;
- (id)handles;
- (void)showCopyCalloutWithAnimation:(BOOL)arg1;
- (void)updateTextRangeViewSelectionRects;
- (void)onAfterScrollOrZoomShowingSelection:(BOOL)arg1;
- (void)onBeforeScrollOrZoomHidingSelection:(BOOL)arg1;
- (BOOL)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;
- (id)handleWithPosition:(int)arg1;
- (id)tintView;
- (void)showControlsAfterRotation;
- (void)hideControlsBeforeRotation;
- (void)endSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)updateSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)startSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)hideControls;
- (id)initWithWebDocumentView:(id)arg1;
- (id)scroller;
- (void)showControls;
- (void)didEndScrollingOrZoomingPage;
- (void)willStartScrollingOrZoomingPage;
- (void)scaleChanged;
- (void)didEndScrollingOverflow;
- (void)willStartScrollingOverflow;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (void)clearSelection;
- (struct CGRect)visibleRect;
- (void)selectionChanged;
- (void)updateSelectionRects;
@property(readonly, nonatomic) UIWebSelection *selection;
- (void)_didScroll;
- (void)_subscribeToScrollNotificationsIfNecessary:(id)arg1;
- (void)removeFromSuperview;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end
