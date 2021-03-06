//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccountUI/AAUIConfirmIdentityViewController.h>

#import "AAUIFamilySetupPage.h"

@class NSString;

@interface AAUIFamilySetupOrganizerViewController : AAUIConfirmIdentityViewController <AAUIFamilySetupPage>
{
    id <AAUIFamilySetupPageDelegate> _delegate;
}

- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (id)instructions;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id)_createCancelButton;
- (BOOL)shouldShowInviteeInstructions;
- (void)continueButtonWasTapped:(id)arg1;
- (id)titleForContinuebutton;
- (id)pageTitle;
- (void).cxx_destruct;
- (void)viewDidLoad;
@property(nonatomic) __weak id <AAUIFamilySetupPageDelegate> delegate; // @synthesize delegate=_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

