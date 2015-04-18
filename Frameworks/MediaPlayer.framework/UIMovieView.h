//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPVideoView.h>

@interface UIMovieView : MPVideoView
{
}

- (double)currentTime;
- (void)pause;
- (void)stop;
- (double)duration;
- (void)setCurrentTime:(double)arg1;
- (id)mpavController;
- (unsigned int)bufferingStatusMask;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned int)arg2;
- (unsigned int)playableContentType;
- (id)avPlayer;
- (void)play;
- (void)setRepeatMode:(unsigned int)arg1;
- (unsigned int)playbackState;

@end
