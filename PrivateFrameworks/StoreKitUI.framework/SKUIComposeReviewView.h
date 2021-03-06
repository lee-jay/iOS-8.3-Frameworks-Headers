//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SKUIComposeReviewHeaderDelegate.h"
#import "UITextContentViewDelegate.h"

@class NSString, SKUIComposeReviewHeaderView, SKUIReviewMetadata, SULoadingView, SUTextContentView, UIScrollView;

@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate>
{
    int _currentBodyLength;
    id <SKUIComposeReviewViewDelegate> _delegate;
    SKUIComposeReviewHeaderView *_headerView;
    struct CGRect _keyboardFrame;
    unsigned int _loading:1;
    SULoadingView *_loadingView;
    SKUIReviewMetadata *_review;
    UIScrollView *_scrollView;
    int _style;
    SUTextContentView *_textContentView;
}

- (BOOL)_isReviewTextOptional;
- (void)_delayedUpdateReviewLength;
- (id)_reviewPlaceholder;
- (void)_showLoadingView;
- (void)_layoutComposeView;
- (void)_layoutLoadingView;
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;
- (void)_showComposeView;
@property(readonly, nonatomic) int composeReviewStyle; // @synthesize composeReviewStyle=_style;
- (void)composeHeaderViewValuesDidChange:(id)arg1;
- (void)composeHeaderViewValidityDidChange:(id)arg1;
- (id)copyReview;
- (id)_body;
@property(nonatomic, getter=isLoading) BOOL loading;
- (void)setReview:(id)arg1;
- (void).cxx_destruct;
- (void)textContentViewDidChange:(id)arg1;
- (BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize)arg2;
- (BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (void)_updateContentSize;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(nonatomic) __weak id <SKUIComposeReviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)reloadData;
- (void)dealloc;
@property(nonatomic) float rating;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

