//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIAlertControllerBackgroundView.h"

@class NSString;

@interface _UIBlendingHighlightView : UIView <UIAlertControllerBackgroundView>
{
    UIView *_colorBurnView;
    UIView *_plusDView;
}

+ (id)_blendingPressedView;
+ (id)_blendingSeparatorView;
- (id)initWithFrame:(struct CGRect)arg1 colorBurnColor:(id)arg2 plusDColor:(id)arg3;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
@property float cornerRadius;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

