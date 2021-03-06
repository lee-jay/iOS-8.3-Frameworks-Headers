//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIStatusBarComposedData, UIStatusBarForegroundStyleAttributes, UIStatusBarLayoutManager;

@interface UIStatusBarForegroundView : UIView
{
    BOOL _usesVerticalLayout;
    char _itemIsEnabled[31];
    UIStatusBarLayoutManager *_layoutManagers[3];
    int _ignoreDataLevel;
    NSMutableArray *_actionAnimationStack;
    UIStatusBarComposedData *_pendedData;
    int _pendedActions;
    int _idiom;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property(nonatomic) int idiom; // @synthesize idiom=_idiom;
- (void)reflowItemViewsForgettingEitherSideItemHistory;
- (void)reflowItemViewsCrossfadingCenter:(id)arg1 duration:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 foregroundStyle:(id)arg2 usesVerticalLayout:(BOOL)arg3;
- (void)reflowItemViews:(BOOL)arg1;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (BOOL)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(float *)arg4 allowSwap:(BOOL)arg5 swappedItem:(id *)arg6;
- (float)edgePadding;
- (void)setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (void)_cleanUpAfterSimpleReflow;
- (id)_computeVisibleItemsPreservingHistory:(BOOL)arg1;
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)arg1;
- (void)stopIgnoringData:(BOOL)arg1;
- (void)_setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (BOOL)ignoringData;
- (void)_reflowItemViewsWithDuration:(double)arg1 preserveHistory:(BOOL)arg2;
- (void)_cleanUpAfterDataChange;
- (void)startIgnoringData;
@property(readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

