//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AirPortAssistantController : NSObject
{
    id _delegate;
    id _viewController;
    id _context;
    NSString *_configuredSSID;
    NSDictionary *_unconfiguredWACDevices;
}

+ (BOOL)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(BOOL)arg3;
+ (id)uniqueBaseStationName:(id)arg1 withBssid:(id)arg2;
+ (id)unconfiguredDeviceName:(id)arg1;
+ (BOOL)isUnconfiguredDevice:(id)arg1;
+ (BOOL)isGenericMFiAccessory:(id)arg1;
+ (BOOL)isSTAOnlyDevice:(id)arg1;
+ (BOOL)isAirPlayDevice:(id)arg1;
+ (void)cancelAirPortAssistantController;
+ (id)assistantUIViewControllerWithParameters:(id)arg1;
+ (BOOL)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(BOOL)arg3 viewController:(id)arg4;
+ (void)downloadAssetsIfNeeded;
+ (void)downloadAssetsCancel;
+ (id)sharedInstance;
@property(retain) NSString *configuredSSID; // @synthesize configuredSSID=_configuredSSID;
- (long)configureUIViewControllerWithParameters:(id)arg1;
- (void)stop2_4WiFiScan;
- (long)start2_4WiFiScan;
@property(retain) NSDictionary *unconfiguredWACDevices; // @synthesize unconfiguredWACDevices=_unconfiguredWACDevices;
- (id)WACDeviceFromScanInfo:(id)arg1;
- (void)updateWACListeners;
- (void)assistantCompleteWithResult:(long)arg1;
- (void)wirelessScanDone:(id)arg1;
@property(retain) id viewController; // @synthesize viewController=_viewController;
@property(retain) id context; // @synthesize context=_context;
@property(nonatomic) id <AirPortAssistantControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end

