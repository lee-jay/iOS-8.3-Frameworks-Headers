//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MFHeaderLabelView, NSString;

@interface MFComposeHeaderView : UIView
{
    id _delegate;
    MFHeaderLabelView *_labelView;
    UIView *_separator;
    NSString *_navTitle;
}

+ (id)defaultFont;
+ (float)preferredHeight;
+ (float)separatorHeight;
+ (float)_labelTopPaddingSpecification;
- (id)labelColor;
@property(copy, nonatomic) NSString *label; // @dynamic label;
- (BOOL)_canBecomeFirstResponder;
- (id)_automationID;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
- (void)refreshPreferredContentSize;
- (struct CGRect)titleLabelBaselineAlignmentRectForLabel:(id)arg1;
- (void)handleTouchesEnded;
- (float)labelTopPadding;
@property(readonly, nonatomic) MFHeaderLabelView *labelView; // @synthesize labelView=_labelView;

@end

