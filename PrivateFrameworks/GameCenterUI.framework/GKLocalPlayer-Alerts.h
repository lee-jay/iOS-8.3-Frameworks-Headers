//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKLocalPlayer.h"

@interface GKLocalPlayer (Alerts)
- (BOOL)alertUserInStoreDemoModeEnabled;
- (void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2;
- (void)showSignInAccountRestrictedAlert;
- (void)showEditAccountRestrictedAlert;
- (void)showCreateAccountRestrictedAlert;
- (void)showLoginFailedAlert;
- (void)_showActionRestrictedAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showAlertForTag:(unsigned int)arg1;
- (void)showCancelledAlertForPlayer:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
@end

