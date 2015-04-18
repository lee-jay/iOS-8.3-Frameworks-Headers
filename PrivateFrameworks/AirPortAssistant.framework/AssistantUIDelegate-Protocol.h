//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol AssistantUIDelegate
- (void)doneWithAssistantResult:(long)arg1;
- (void)showUIConfigPromptForGuestNetConfigWithParamDict:(NSDictionary *)arg1;
- (void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(NSDictionary *)arg1;
- (void)connectionVerificationSucceededForSelector:(int)arg1;
- (void)showAskUserSwapCablingForStatus:(long)arg1 paramDict:(NSDictionary *)arg2;
- (void)showAskUserForPPPoECredentialsForStatus:(long)arg1 paramDict:(NSDictionary *)arg2;
- (void)showTellUserToResetBroadbandDeviceForStatus:(long)arg1 paramDict:(NSDictionary *)arg2;
- (void)showTellUserToPlugInEthernetForStatus:(long)arg1 paramDict:(NSDictionary *)arg2;
- (void)presentUIForSetupResult:(long)arg1 baseStationInfo:(NSDictionary *)arg2 withPrompt:(NSString *)arg3;
- (void)presentUIForSetupStatusWithRecommendationDict:(NSDictionary *)arg1;
- (void)presentUIForStepByStepResult:(long)arg1;
- (void)presentUIForStepByStepNextStep:(int)arg1 paramDict:(NSDictionary *)arg2;
- (void)presentUIForStepByStepStart;
- (void)presentUIForRecommendationResult:(long)arg1 paramDict:(NSDictionary *)arg2;
- (void)presentUIForRecommmendationTargetInfo:(NSDictionary *)arg1;
- (void)presentUIForRecommendationStatus;
- (void)assistantUpdateProgress:(NSString *)arg1 forState:(int)arg2;

@optional
- (void)showUIConfigPromptPostHook;
- (void)showUIConfigPromptPreHook;
@end
