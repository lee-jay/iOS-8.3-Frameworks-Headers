//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessageUI/MFComposeHeaderView.h>

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UITextField;

@interface MFComposeSubjectView : MFComposeHeaderView <UITextFieldDelegate>
{
    unsigned int _delegateRespondsToTextChange:1;
    unsigned int _notifyButtonSelected:1;
    unsigned int _showNotifyButton:1;
    UITextField *_textField;
    UIButton *_notifyButton;
}

- (void)textFieldDidBecomeFirstResponder:(id)arg1;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)textChanged:(id)arg1;
- (BOOL)_canBecomeFirstResponder;
- (BOOL)endEditing:(BOOL)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)setText:(id)arg1;
- (id)text;
- (BOOL)becomeFirstResponder;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIButton *notifyButton; // @synthesize notifyButton=_notifyButton;
- (void)setNotifyButtonSelected:(BOOL)arg1;
- (BOOL)isNotifyButtonSelected;
- (void)setShowNotifyButton:(BOOL)arg1;
- (void)updateNotifyButton;
- (void)notifyButtonClicked:(id)arg1;
- (void)refreshPreferredContentSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

