//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class GKGame, GKRemoteViewController;

@interface GKHostedViewController : UIViewController
{
    BOOL _presentingRemoteViewController;
    BOOL _shouldPresentRemoteViewController;
    BOOL _isRequestingRemoteViewController;
    BOOL _gkIsDisappearing;
    GKGame *_game;
    GKRemoteViewController *_remoteViewController;
    CDUnknownBlockType _remoteViewReadyHandler;
}

@property(nonatomic) BOOL isRequestingRemoteViewController; // @synthesize isRequestingRemoteViewController=_isRequestingRemoteViewController;
@property(copy, nonatomic) CDUnknownBlockType remoteViewReadyHandler; // @synthesize remoteViewReadyHandler=_remoteViewReadyHandler;
@property(nonatomic) BOOL shouldPresentRemoteViewController; // @synthesize shouldPresentRemoteViewController=_shouldPresentRemoteViewController;
- (void)resetRemoteViewController;
- (void)donePressed:(id)arg1;
@property(nonatomic) BOOL presentingRemoteViewController; // @synthesize presentingRemoteViewController=_presentingRemoteViewController;
@property(nonatomic) BOOL gkIsDisappearing; // @synthesize gkIsDisappearing=_gkIsDisappearing;
- (void)requestRemoteViewControllerIfNeeded;
- (void)didGetRemoteViewController;
- (id)_presentingViewController;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (void)presentRemoteViewControllerIfNeeded;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)dealloc;

@end

