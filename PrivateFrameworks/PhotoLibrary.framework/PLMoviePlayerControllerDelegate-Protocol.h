//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, PLMoviePlayerController;

@protocol PLMoviePlayerControllerDelegate <NSObject>
- (void)moviePlayerHeadsetPreviousTrackPressed:(PLMoviePlayerController *)arg1;
- (void)moviePlayerHeadsetNextTrackPressed:(PLMoviePlayerController *)arg1;
- (void)moviePlayerHeadsetPlayPausePressed:(PLMoviePlayerController *)arg1;
- (NSDictionary *)moviePlayerRequestsPickedAirplayRoute:(PLMoviePlayerController *)arg1;
- (void)moviePlayerDidChangeExternalPlaybackType:(PLMoviePlayerController *)arg1;
- (BOOL)moviePlayerControllerShouldAllowExternalPlayback:(PLMoviePlayerController *)arg1;
- (BOOL)moviePlayerShouldNotifyOnPreparationError:(PLMoviePlayerController *)arg1;
- (void)moviePlayerEncounteredAuthenticationError:(PLMoviePlayerController *)arg1;
- (void)moviePlayerWasSuspendedDuringPlayback:(PLMoviePlayerController *)arg1;
- (void)moviePlayerUpdatedDestinationPlaceholder:(PLMoviePlayerController *)arg1;
- (void)moviePlayerDurationAvailable:(PLMoviePlayerController *)arg1;
- (void)moviePlayerPlaybackDidEnd:(PLMoviePlayerController *)arg1;
- (void)moviePlayerPlaybackRateDidChange:(PLMoviePlayerController *)arg1;
- (void)moviePlayerPlaybackStateDidChange:(PLMoviePlayerController *)arg1 fromPlaybackState:(unsigned int)arg2;
- (void)moviePlayerBufferingStateDidChange:(PLMoviePlayerController *)arg1;
- (void)moviePlayerReadyToDisplay:(PLMoviePlayerController *)arg1;
- (void)moviePlayerReadyToPlay:(PLMoviePlayerController *)arg1;
- (BOOL)moviePlayerExitRequest:(PLMoviePlayerController *)arg1 exitReason:(int)arg2;
- (void)moviePlayerControllerWillResignAsActiveController:(PLMoviePlayerController *)arg1;
- (void)moviePlayerControllerDidBecomeActiveController:(PLMoviePlayerController *)arg1;
@end

