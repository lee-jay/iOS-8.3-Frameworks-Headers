//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKPlayerPickerViewController.h>

@class GKChallenge, GKChallengesPickerDataSource;

@interface GKChallengesPickerViewController : GKPlayerPickerViewController
{
    GKChallenge *_challenge;
    GKChallengesPickerDataSource *_challengesPickerDataSource;
}

@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) GKChallengesPickerDataSource *challengesPickerDataSource; // @synthesize challengesPickerDataSource=_challengesPickerDataSource;
- (id)splitingDataSource;
- (id)initWithChallenge:(id)arg1 selectedPlayers:(id)arg2;
- (void)didBecomeReadyToDisplayData;
- (void)configureDataSource;
- (void)viewDidLoad;
- (void)dealloc;

@end

