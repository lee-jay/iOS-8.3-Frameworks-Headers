//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CNFInternalSettingsUtilities : NSObject
{
}

+ (void)signOutAllAccounts;
+ (void)setIDSEnvironment:(id)arg1;
+ (id)IDSEnvironment;
+ (void)setCurrentInternalSettingsBundle:(id)arg1;
+ (void)killMobileSMS;
+ (void)killMobilePhone;
+ (void)killFaceTime;
+ (void)syncImagentLogSettings;
+ (void)setViceroyLoggingEnabled:(BOOL)arg1;
+ (BOOL)isViceroyLoggingEnabled;
+ (void)killEverything;
+ (void)nukeKeychain;
+ (void)killMediaServerd;
+ (void)killImavagent;
+ (void)killImagent;
+ (id)currentInternalSettingsBundle;

@end
