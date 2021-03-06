//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUPhotoEditToolController.h>

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSMutableArray, NSString, PUPhotoEditOverlayBadge, PURedeyeToolControllerSpec, UITapGestureRecognizer;

@interface PURedeyeToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate>
{
    PUPhotoEditOverlayBadge *_instructionLabel;
    NSArray *_instructionLabelConstraints;
    PUPhotoEditOverlayBadge *_failureLabel;
    NSArray *_failureLabelConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_knownCorrections;
    BOOL _failureAnimationIsInProgress;
    BOOL _isModelChangeLocal;
}

- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)localizedName;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_handleTapGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;
- (void)_animateFailureAppearance;
- (void)_animateInstructionAppearance;
- (struct CGPoint)_locationInCroppedImage:(struct CGPoint)arg1 YCoordinateIsFlipped:(BOOL)arg2;
- (void)_showChangeIndicatorAtPoint:(struct CGPoint)arg1 YCoordinateIsFlipped:(BOOL)arg2 isFailure:(BOOL)arg3;
- (void)_correctRedEyeAtPoint:(struct CGPoint)arg1;
- (BOOL)_removeCorrectionAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)_locationInOriginalImage:(struct CGPoint)arg1;
- (void)_loadCorrectionsFromModelAnimated:(BOOL)arg1;
- (void)photoEditModelDidChange;
- (void)_handleRedeyeButton:(id)arg1;
- (void)didBecomeActiveTool;
- (void)didResignActiveTool;
- (void)flashAutoRedEyeCorrections;
- (BOOL)wantsZoomAndPanEnabled;
- (id)selectedToolbarIcon;
- (id)toolbarIcon;
- (unsigned int)preferredRenderMode;
- (void)setLayoutOrientation:(int)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsSecondaryToolbarVisible;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) PURedeyeToolControllerSpec *spec;
@property(readonly) Class superclass;

@end

