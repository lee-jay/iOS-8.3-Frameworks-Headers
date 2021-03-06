//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKBCacheableView.h"

@class CALayer, NSString;

@interface UIKBThemedView : UIView <UIKBCacheableView>
{
    CALayer *_borders;
    CALayer *_background;
    BOOL _lightKeyboard;
    BOOL _active;
    BOOL _usePersistentCaching;
    int _style;
    struct UIEdgeInsets _cacheInsets;
}

@property(nonatomic) BOOL usePersistentCaching; // @synthesize usePersistentCaching=_usePersistentCaching;
- (id)traitsForCurrentStyle;
- (BOOL)_hasInsets;
- (id)borderFilterTypeForCurrentStyle;
- (void)_popuplateLayer:(id)arg1 withContents:(id)arg2;
@property(nonatomic) struct UIEdgeInsets cacheInsets; // @synthesize cacheInsets=_cacheInsets;
@property(readonly, nonatomic) BOOL keepNonPersistent;
@property(readonly, nonatomic) BOOL cacheDeferable;
- (void)drawContentsOfRenderers:(id)arg1;
- (id)cacheKeysForRenderFlags:(id)arg1;
@property(readonly, nonatomic) float cachedWidth;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)displayLayer:(id)arg1;
@property(nonatomic) BOOL active; // @synthesize active=_active;
- (void)_setRenderConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
@property(nonatomic) int style; // @synthesize style=_style;
- (BOOL)_canDrawContent;
- (void)layoutSubviews;
- (void)didMoveToWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

