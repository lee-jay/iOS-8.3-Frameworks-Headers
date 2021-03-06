//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADAdSpaceRemoteViewControllerDelegate.h"
#import "ADAdSpace_RPC.h"
#import "UIViewControllerTransitioningDelegate.h"

@class ADAdImpressionPublicAttributes, ADAdSpaceConfiguration, ADAdSpaceRemoteViewController, NSDictionary, NSSet, NSString, NSURL, _ADRemoteViewController, _UIAsyncInvocation;

@interface ADAdSpace : NSObject <UIViewControllerTransitioningDelegate, ADAdSpace_RPC, ADAdSpaceRemoteViewControllerDelegate>
{
    id <ADAdRecipient> _recipient;
    BOOL _visibilityCheckScheduled;
    BOOL _serviceAdSpaceRequestInProgress;
    BOOL _shouldPresentActionViewControllerWhenReady;
    BOOL _actionViewControllerReadyForPresentation;
    BOOL _actionViewControllerWantsDismissal;
    NSString *_identifier;
    NSURL *_serverURL;
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    NSSet *_context;
    ADAdImpressionPublicAttributes *_currentAdImpressionPublicAttributes;
    int _visibility;
    ADAdSpaceRemoteViewController *_creativeViewController;
    _UIAsyncInvocation *_remoteViewControllerRequestCancelationInvocation;
    _ADRemoteViewController *_remoteViewController;
    _ADRemoteViewController *_portraitOnlyViewController;
    NSDictionary *_adToLoad;
    double _lastSlowCheck;
}

@property(nonatomic) int visibility; // @synthesize visibility=_visibility;
@property(copy, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
- (void)setAdSpaceType:(int)arg1;
- (void)adSpaceRemoteViewControllerDidTerminateWithError:(id)arg1;
- (void)_remote_resumeBannerMedia;
- (void)_remote_pauseBannerMedia;
- (void)_remote_requestPortraitOnlyViewController;
- (void)_remote_actionViewControllerReadyForPresentation;
- (void)_remote_updateViewControllerSupportedOrientations:(unsigned int)arg1;
- (void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2;
- (void)_remote_openURL:(id)arg1;
- (void)_remote_creativeDidFailWithError:(id)arg1;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1;
- (void)_remote_creativeWillLoad;
@property(retain, nonatomic) _ADRemoteViewController *portraitOnlyViewController; // @synthesize portraitOnlyViewController=_portraitOnlyViewController;
- (void)_remote_dismissPortraitOnlyViewController;
@property(retain, nonatomic) _UIAsyncInvocation *remoteViewControllerRequestCancelationInvocation; // @synthesize remoteViewControllerRequestCancelationInvocation=_remoteViewControllerRequestCancelationInvocation;
@property(nonatomic) BOOL actionViewControllerReadyForPresentation; // @synthesize actionViewControllerReadyForPresentation=_actionViewControllerReadyForPresentation;
@property(nonatomic) BOOL actionViewControllerWantsDismissal; // @synthesize actionViewControllerWantsDismissal=_actionViewControllerWantsDismissal;
@property(nonatomic) BOOL shouldPresentActionViewControllerWhenReady; // @synthesize shouldPresentActionViewControllerWhenReady=_shouldPresentActionViewControllerWhenReady;
- (void)_considerPresentingActionViewController;
@property(nonatomic) double lastSlowCheck; // @synthesize lastSlowCheck=_lastSlowCheck;
@property(nonatomic) BOOL visibilityCheckScheduled; // @synthesize visibilityCheckScheduled=_visibilityCheckScheduled;
@property(retain, nonatomic) ADAdImpressionPublicAttributes *currentAdImpressionPublicAttributes; // @synthesize currentAdImpressionPublicAttributes=_currentAdImpressionPublicAttributes;
@property(retain, nonatomic) NSDictionary *adToLoad; // @synthesize adToLoad=_adToLoad;
- (void)_updateAllProperties;
- (void)_remote_dismissViewController;
- (void)_closeConnectionIfNecessary;
- (void)_remote_close;
@property(retain, nonatomic) ADAdSpaceRemoteViewController *creativeViewController; // @synthesize creativeViewController=_creativeViewController;
@property(nonatomic) BOOL serviceAdSpaceRequestInProgress; // @synthesize serviceAdSpaceRequestInProgress=_serviceAdSpaceRequestInProgress;
- (void)_clientApplicationDidEnterBackground;
- (void)_clientApplicationDidBecomeActive;
- (void)_requestServiceAdSpace;
@property(readonly, nonatomic) NSString *connectionAssertionIdentifier;
- (void)interstitialWasRemovedFromSuperview;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
- (void)loadAd:(id)arg1;
- (void)cancelBannerViewAction;
- (void)refuseBannerViewAction;
- (void)executeBannerViewActionFrom:(struct CGRect)arg1 withTapLocation:(struct CGPoint)arg2;
- (void)updateVisibility;
@property(readonly, nonatomic) id <ADSAdSpace_RPC><NSObject> serviceAdSpace;
- (id)initForRecipient:(id)arg1;
@property(readonly, nonatomic) ADAdSpaceConfiguration *configuration;
@property(retain, nonatomic) _ADRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)close;
- (void)viewServiceDidTerminateWithError:(id)arg1;
@property(copy, nonatomic) NSSet *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic) id <ADAdRecipient> recipient;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

