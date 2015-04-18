//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SSTermsAndConditions, UIActivityIndicatorView, UITextView, UIView;

@interface MPTermsViewController : UIViewController
{
    BOOL _needToLoadTerms;
    SSTermsAndConditions *_termsAndConditions;
    id <MPTermsViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_activityIndicatorView;
    UIView *_topSpacerView;
    UIView *_bottomSpacerView;
    UITextView *_termsTextView;
}

- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
@property(nonatomic) __weak id <MPTermsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)_cancelAction:(id)arg1;
- (void)_setupViewForFailedToAcceptTerms;
- (void)_failedToAcceptTermsWithError:(id)arg1;
- (void)_setupViewForFailedToLoadTerms;
- (void)_setupViewForShowingTerms;
- (void)_failedToLoadTermsWithError:(id)arg1;
- (void)_loadedTerms:(id)arg1;
- (void)_acceptAction:(id)arg1;
@property(retain, nonatomic) UIView *bottomSpacerView; // @synthesize bottomSpacerView=_bottomSpacerView;
@property(retain, nonatomic) UIView *topSpacerView; // @synthesize topSpacerView=_topSpacerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UITextView *termsTextView; // @synthesize termsTextView=_termsTextView;
- (void)_userAcceptedTerms;
- (void)_startLoadingTerms;
- (void)_setupViewForLoadingTerms;

@end
