//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSDictionary, UIBarButtonItem, UIButton, UIToolbar;

@interface PUCloudPhotoSettingsViewController : UITableViewController
{
    _Bool _isAutorefreshingStatistics;
    UIButton *_resetStatisticsButton;
    UIToolbar *_statisticsPeriodToolbar;
    UIBarButtonItem *_playPauseToolbarButton;
    NSDictionary *_latestStatisticsSnapshot;
    struct __CFNotificationCenter *_updateNotificationsCtr;
    int _statisticsPeriod;
}

+ (id)settingsMenuActionHandler;
- (void).cxx_destruct;
- (void)loadView;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)autoupdatesEnabled;
- (void)reloadStatistics;
- (void)setStatisticsPeriod:(int)arg1;
- (void)highlightActiveStatisticsPeriodButton:(id)arg1;
- (void)setStatisticsPeriodAsWeek:(id)arg1;
- (void)setStatisticsPeriodAsDay:(id)arg1;
- (void)setStatisticsPeriodAsHour:(id)arg1;
- (void)setStatisticsPeriodAsMinute:(id)arg1;
- (void)resetStatistics;
- (void)playPauseNavigationButton;

@end
