//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKGameCenterViewController.h>

@interface GKAchievementViewController : GKGameCenterViewController
{
    id <GKAchievementViewControllerDelegate> _achievementDelegate;
}

@property(nonatomic) id <GKAchievementViewControllerDelegate> achievementDelegate; // @synthesize achievementDelegate=_achievementDelegate;
- (void)notifyDelegateOnWillFinish;
- (id)init;
- (void)dealloc;

@end

