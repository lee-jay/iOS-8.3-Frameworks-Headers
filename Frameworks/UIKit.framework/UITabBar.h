//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "_UIBackdropViewGraphicsQualityChangeDelegate.h"
#import "_UIShadowedView.h"

@class NSArray, NSMutableArray, NSString, UIColor, UIImage, UITabBarItem, _UIBackdropView, _UITabBarAppearanceStorage, _UITabBarBackgroundView;

@interface UITabBar : UIView <_UIBackdropViewGraphicsQualityChangeDelegate, _UIShadowedView>
{
    UIView *_customizeView;
    _UITabBarBackgroundView *_backgroundView;
    _UIBackdropView *_adaptiveBackdrop;
    UIView *_shadowView;
    id <UITabBarDelegate> _delegate;
    NSArray *_items;
    UITabBarItem *_selectedItem;
    NSArray *_customizationItems;
    int _barOrientation;
    struct {
        unsigned int alertShown:1;
        unsigned int wasEnabled:1;
        unsigned int customized:1;
        unsigned int downButtonSentAction:1;
        unsigned int isLocked:1;
        unsigned int backgroundIsPattern:1;
        unsigned int hasCustomBackgroundView:1;
        unsigned int barStyle:3;
        unsigned int barTranslucence:3;
        unsigned int backgroundNeedsUpdate:1;
    } _tabBarFlags;
    NSArray *_buttonItems;
    struct __CFArray *_hiddenItems;
    _UITabBarAppearanceStorage *_appearanceStorage;
    BOOL _dividerImagesChangeWithSelection;
    BOOL _dividerImagesAreInvalid;
    BOOL _hidesShadow;
    BOOL _showsHighlightedState;
    float _nextSelectionSlideDuration;
    NSMutableArray *_dividerImageViews;
    int _itemPositioning;
    float _itemDimension;
    float _itemSpacing;
    int _barMetrics;
    int _imageStyle;
    int _tabBarSizing;
    UIView *_accessoryView;
    NSString *_backdropViewLayerGroupName;
}

+ (id)_tabBarForView:(id)arg1;
+ (float)_buttonGap;
+ (id)_unselectedTabTintColorForView:(id)arg1;
+ (void)_initializeForIdiom:(int)arg1;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)_isHidden:(id)arg1;
- (void)_configureItems:(id)arg1;
- (void)_updateAppearanceCustomizationIfNecessaryForItem:(id)arg1;
- (void)_customizeDoneButtonAction:(id)arg1;
- (void)_finishCustomizeAnimation:(id)arg1;
- (void)_adjustButtonSelection:(id)arg1;
- (void)_alertDidHide;
- (void)_alertWillShow:(BOOL)arg1 duration:(float)arg2;
- (void)dismissCustomizeSheet:(BOOL)arg1;
- (void)_tabBarFinishedAnimating;
@property(nonatomic) int itemPositioning; // @synthesize itemPositioning=_itemPositioning;
@property(retain, nonatomic, setter=_setDividerImageViews:) NSMutableArray *_dividerImageViews; // @synthesize _dividerImageViews;
@property(nonatomic, setter=_setDividerImagesAreInvalid:) BOOL _dividerImagesAreInvalid; // @synthesize _dividerImagesAreInvalid;
@property(nonatomic, setter=_setDividerImagesChangeWithSelection:) BOOL _dividerImagesChangeWithSelection; // @synthesize _dividerImagesChangeWithSelection;
@property(nonatomic, setter=_setNextSelectionSlideDuration:) float _nextSelectionSlideDuration; // @synthesize _nextSelectionSlideDuration;
- (void)_makeCurrentButtonFirstResponder;
- (BOOL)endCustomizingAnimated:(BOOL)arg1;
@property(nonatomic, setter=_setBarOrientation:) int _barOrientation;
@property(nonatomic, setter=_setInterTabButtonSpacing:) float _interTabButtonSpacing;
@property(nonatomic, setter=_setTabButtonWidth:) float _tabButtonWidth;
@property(nonatomic, setter=_setTabBarSizing:) int _tabBarSizing; // @synthesize _tabBarSizing;
- (void)_effectiveBarTintColorDidChange;
- (void)_updateTintedImages:(id)arg1 selected:(BOOL)arg2;
@property(nonatomic) UITabBarItem *selectedItem;
- (void)_dismissCustomizeSheet:(BOOL)arg1;
- (void)_customizeWithAvailableItems:(id)arg1;
@property(nonatomic, setter=_setBackgroundNeedsUpdate:) BOOL _backgroundNeedsUpdate;
- (struct CGRect)_tabAreaLayoutBounds;
- (int)_effectiveBarOrientation;
- (void)_hideItemsAnimated:(BOOL)arg1;
- (void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(id)arg3;
@property(nonatomic, setter=_setImageStyle:) int _imageStyle; // @synthesize _imageStyle;
- (void)_showItemsAnimated:(BOOL)arg1;
- (void)_animateSelectionChangeFromView:(id)arg1 toView:(id)arg2 duration:(float)arg3;
- (void)_updateDividerImagesIfNecessary;
- (void)_invalidateDividerImages;
- (id)_topmostDividerImageView;
- (void)_doCommonTabBarInit;
- (void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg1;
@property(nonatomic, setter=_setBarMetrics:) int _barMetrics; // @synthesize _barMetrics;
@property(nonatomic) float itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) float itemWidth; // @synthesize itemWidth=_itemDimension;
- (void)_setLabelShadowOffset:(struct CGSize)arg1;
- (void)_setLabelShadowColor:(id)arg1;
- (void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)_setLabelFont:(id)arg1;
- (void)_setSelectionIndicatorImage:(id)arg1;
- (void)_setBackgroundImage:(id)arg1;
- (void)_positionTabBarButtons:(id)arg1 ignoringItem:(id)arg2;
- (void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 dragging:(BOOL)arg3 swapping:(BOOL)arg4;
@property(nonatomic, setter=_setShowsHighlightedState:) BOOL _showsHighlightedState; // @synthesize _showsHighlightedState;
@property(retain, nonatomic) UIColor *selectedImageTintColor;
@property(retain, nonatomic) UIImage *selectionIndicatorImage;
- (id)_dividerImageForLeftButtonState:(unsigned int)arg1 rightButtonState:(unsigned int)arg2;
- (void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned int)arg2 rightButtonState:(unsigned int)arg3;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_cleanupAdaptiveBackdrop;
- (void)setButtonItems:(id)arg1;
- (id)buttonItems;
- (void)setBadgeAnimated:(BOOL)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) UIImage *backgroundImage;
- (BOOL)isCustomizing;
- (void)beginCustomizingItems:(id)arg1;
- (BOOL)_isTranslucent;
@property(nonatomic, setter=_setAccessoryView:) UIView *_accessoryView; // @synthesize _accessoryView;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(int)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(int)arg2;
@property(retain, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *backdropViewLayerGroupName; // @synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName;
@property(retain, nonatomic) UIColor *barTintColor;
@property(nonatomic, setter=_setHidesShadow:) BOOL _hidesShadow; // @synthesize _hidesShadow;
- (void)_accessibilityButtonShapesParametersDidChange;
@property(nonatomic, getter=isTranslucent) BOOL translucent;
@property(nonatomic) int barStyle;
- (BOOL)_wantsAdaptiveBackdrop;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
@property(copy, nonatomic) NSArray *items;
@property(nonatomic, getter=isLocked) BOOL locked;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)_updateBackgroundImage;
- (id)_effectiveBarTintColor;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
- (id)_shadowView;
- (id)_appearanceStorage;
@property(retain, nonatomic) UIImage *shadowImage;
- (BOOL)_subclassImplementsDrawRect;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)canBecomeFocused;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (BOOL)_canDrawContent;
- (id)preferredFocusedItem;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (void)_setVisualAltitude:(float)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
@property(nonatomic) id <UITabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

