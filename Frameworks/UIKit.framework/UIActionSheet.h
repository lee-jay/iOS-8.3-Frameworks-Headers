//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPopoverControllerDelegate.h"

@class NSMutableArray, NSString, UIAlertController, _UIAlertControllerShimPresenter, _UIWeakRef;

@interface UIActionSheet : UIView <UIPopoverControllerDelegate>
{
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    NSMutableArray *_actions;
    int _cancelIndex;
    int _firstOtherButtonIndex;
    int _destructiveButtonIndex;
    int _actionSheetStyle;
    id _context;
    BOOL _hasPreparedAlertActions;
    BOOL _isPresented;
    BOOL _alertControllerShouldDismiss;
    BOOL _handlingAlertActionShouldDismiss;
    BOOL _dismissingAlertController;
    _UIWeakRef *_weakDelegate;
}

+ (Class)_popoverControllerClass;
+ (BOOL)_isAlertControllerShimClass;
- (id)_addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (void)_setContentView:(id)arg1;
- (id)_attributedTitleString;
- (void)_setAttributedTitleString:(id)arg1;
- (void)setSelectedButtonGlyphHighlightedImage:(id)arg1;
- (void)setSelectedButtonGlyphImage:(id)arg1;
- (id)_indexesOfSelectedButtons;
- (void)_toggleButtonSelectionAtIndex:(unsigned int)arg1;
- (void)_setIndexesOfSelectedButtons:(id)arg1;
- (BOOL)useThreeColumnsButtonsLayout;
- (void)setUseThreeColumnsButtonsLayout:(BOOL)arg1;
- (void)setInPopover:(BOOL)arg1;
- (void)presentSheetInContentView:(id)arg1;
- (id)_relinquishPopoverController;
- (void)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned int)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(int)arg5 animated:(BOOL)arg6;
- (void)presentFromBarButtonItem:(id)arg1 direction:(unsigned int)arg2 allowInteractionWithViews:(id)arg3 backgroundStyle:(int)arg4 animated:(BOOL)arg5;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)showFromTabBar:(id)arg1;
- (void)showFromToolbar:(id)arg1;
@property(nonatomic) int destructiveButtonIndex;
@property(nonatomic) int actionSheetStyle;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)setIndexOfSelectedButton:(int)arg1;
- (void)showFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)_showFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned int)arg3 animated:(BOOL)arg4;
- (void)_didPresent;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (BOOL)_isSBAlert;
- (int)numberOfLinesInTitle;
- (void)setDimsBackground:(BOOL)arg1;
- (void)setDimView:(id)arg1;
- (void)setTitleMaxLineCount:(int)arg1;
- (void)presentSheetInView:(id)arg1;
- (id)buttonTitleAtIndex:(int)arg1;
- (id)_buttonAtIndex:(int)arg1;
- (id)buttonAtIndex:(int)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (void)setTaglineText:(id)arg1;
- (id)bodyText;
- (void)setBodyText:(id)arg1;
- (void)_setIsPresented:(BOOL)arg1;
@property(readonly, nonatomic) int numberOfButtons;
- (void)_prepareAlertActions;
- (void)_performPresentationDismissalWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (id)_alertController;
@property(retain, nonatomic) _UIWeakRef *weakDelegate; // @synthesize weakDelegate=_weakDelegate;
- (id)_preparedAlertActionAtIndex:(unsigned int)arg1;
- (BOOL)_prepareToDismissForTappedIndex:(int)arg1;
- (void)_dismissForTappedIndex:(int)arg1;
- (void)_setFirstOtherButtonIndex:(int)arg1;
@property(readonly, nonatomic) int firstOtherButtonIndex;
- (void)setDefaultButtonIndex:(int)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
- (void)setMessage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)showInView:(id)arg1;
- (id)subtitle;
- (id)_titleLabel;
- (id)message;
- (void)setContext:(id)arg1;
- (id)context;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) int cancelButtonIndex;
- (int)addButtonWithTitle:(id)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
@property(nonatomic) id <UIActionSheetDelegate> delegate;
- (id)_contentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

