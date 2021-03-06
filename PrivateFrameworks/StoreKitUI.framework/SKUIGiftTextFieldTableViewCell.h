//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSAttributedString, NSString, UIControl, UILabel, UITextField, UIView;

@interface SKUIGiftTextFieldTableViewCell : UITableViewCell
{
    UILabel *_label;
    UITextField *_textField;
    UIView *_topBorderView;
}

@property(nonatomic) id <UITextFieldDelegate> textFieldDelegate;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSString *label;
@property(nonatomic) int keyboardType;
@property(copy, nonatomic) NSString *value;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

