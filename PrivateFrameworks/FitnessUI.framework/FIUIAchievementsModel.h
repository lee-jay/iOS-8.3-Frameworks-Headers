//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKExtendedHealthStore, NSArray, NSObject<OS_dispatch_queue>;

@interface FIUIAchievementsModel : NSObject
{
    HKExtendedHealthStore *_extendedHealthStore;
    NSObject<OS_dispatch_queue> *_achievementsLock;
    BOOL _loadingAchievements;
    NSArray *_achievements;
    id <FIUIAchievementsModelDelegate> _delegate;
}

- (id)achievements;
- (void)fetchAchievementsOnDay:(id)arg1 inCalendar:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <FIUIAchievementsModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

@end

