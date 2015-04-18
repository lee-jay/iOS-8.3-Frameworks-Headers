//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _UIAlertManager : NSObject
{
}

+ (void)alertPopoutCompleted;
+ (void)showDimmingViewAnimated:(BOOL)arg1;
+ (void)applyClientWindowTransform:(struct CGAffineTransform)arg1;
+ (struct CGAffineTransform)_alertTranslationForInterfaceOrientation:(int)arg1 andTranslation:(float)arg2;
+ (BOOL)cancelAlertsAnimated:(BOOL)arg1;
+ (void)createAlertWindowIfNeeded:(BOOL)arg1 deferDisplay:(BOOL)arg2;
+ (void)hideDimmingViewAnimated:(BOOL)arg1;
+ (void)alertWindowAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
+ (void)applyInternalWindowTransform:(struct CGAffineTransform)arg1;
+ (void)_applyAlertTransforms;
+ (struct CGAffineTransform)calculatedAlertTransform;
+ (BOOL)cancelTopMostAlertAnimated:(BOOL)arg1;
+ (void)removeFromStack:(id)arg1;
+ (id)topMostAlert;
+ (void)createAlertWindowIfNeeded:(BOOL)arg1;
+ (void)addToStack:(id)arg1 dontDimBackground:(BOOL)arg2;
+ (void)sizeAlertWindowForCurrentOrientation;
+ (void)tellSpringboardHidingAlert:(id)arg1 animated:(BOOL)arg2 forSpringBoardAlertTransition:(BOOL)arg3;
+ (BOOL)stackContainsAlert:(id)arg1;
+ (BOOL)hideTopMostAlertAnimated:(BOOL)arg1;
+ (void)tellSpringboardShowingAlert:(id)arg1 animated:(BOOL)arg2 forSpringBoardAlertTransition:(BOOL)arg3;
+ (void)reorientAlertWindowTo:(int)arg1 animated:(BOOL)arg2 keyboard:(id)arg3;
+ (id)visibleAlert;
+ (void)showTopmostMiniAlertWithSynchronizationPort:(unsigned int)arg1;
+ (void)hideTopmostMiniAlert;
+ (void)noteOrientationChangingTo:(int)arg1 animated:(BOOL)arg2;
+ (void)initialize;
+ (void)hideAlertsForTermination;
+ (void)noteOrientationChangingTo:(int)arg1;
- (void)_didHideDimmingView:(id)arg1 finished:(id)arg2;

@end
