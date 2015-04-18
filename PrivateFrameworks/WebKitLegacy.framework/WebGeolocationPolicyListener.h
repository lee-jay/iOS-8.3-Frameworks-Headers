//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebAllowDenyPolicyListener.h"

@class NSString;

@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener>
{
    struct RefPtr<WebCore::Geolocation> _geolocation;
    struct RetainPtr<WebView *> _webView;
}

- (id)initWithGeolocation:(struct Geolocation *)arg1 forWebView:(id)arg2;
- (void)denyOnlyThisRequest;
- (BOOL)shouldClearCache;
- (void)deny;
- (void)allow;
- (void).cxx_destruct;
- (id).cxx_construct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
