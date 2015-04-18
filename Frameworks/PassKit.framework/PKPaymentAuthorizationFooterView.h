//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString, PKGlyphView, PKPaymentAuthorizationLayout, UIButton, UILabel;

@interface PKPaymentAuthorizationFooterView : UIView
{
    NSString *_title;
    UILabel *_labelView;
    PKGlyphView *_glyphView;
    UILabel *_passbookPaymentDetailsView;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorLeftConstraint;
    NSLayoutConstraint *_payWithPasscodeCenterYConstraint;
    NSLayoutConstraint *_overallHeightConstraint;
    int _state;
    UIButton *_payWithPasscodeButton;
    PKPaymentAuthorizationLayout *_layout;
}

- (void)_prepareConstraints;
@property(nonatomic) PKPaymentAuthorizationLayout *layout; // @synthesize layout=_layout;
- (void)updateConstraints;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_titleLabelAttributedString:(id)arg1;
- (id)_titleAttributedStringForState:(int)arg1;
- (void)setState:(int)arg1 string:(id)arg2 animated:(BOOL)arg3;
@property(readonly, nonatomic) UIButton *payWithPasscodeButton; // @synthesize payWithPasscodeButton=_payWithPasscodeButton;
- (void)_createSubviews;

@end
