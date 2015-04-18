//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKPaymentSetupPrivacyFooterViewDelegate.h"

@class ACAccountStore, NSArray, PKPaymentWebService;

@interface PKPaymentSetupViewController : UIViewController <PKPaymentSetupPrivacyFooterViewDelegate>
{
    ACAccountStore *_accountStore;
    PKPaymentWebService *_webService;
    id <PKPaymentSetupViewControllerDelegate> _delegate;
    NSArray *_eligibleCards;
    int _context;
}

- (void)_next:(id)arg1;
- (unsigned int)edgesForExtendedLayout;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(nonatomic) int context; // @synthesize context=_context;
@property(nonatomic) id <PKPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
@property(retain, nonatomic) NSArray *eligibleCards; // @synthesize eligibleCards=_eligibleCards;
- (void)dismissAboutView:(id)arg1;
- (void)_pushCardEntryViewController;
- (void)_pushCardDetailsViewControllerForCredential:(id)arg1;
- (void)_pushCardList:(id)arg1;
- (void)privacyFooterLinkTapped:(id)arg1;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
- (id)_contextSpecificStringForAggdKey:(id)arg1;
- (id)initWithPaymentWebService:(id)arg1 eligibleCards:(id)arg2 context:(int)arg3 delegate:(id)arg4;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;

@end
