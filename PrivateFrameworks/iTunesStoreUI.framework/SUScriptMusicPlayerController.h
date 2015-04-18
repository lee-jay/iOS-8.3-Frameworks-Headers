//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SUScriptMediaItem;

@interface SUScriptMusicPlayerController : SUScriptObject
{
    NSString *_playerType;
}

+ (id)scriptPlaybackStateForNativePlaybackState:(int)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(readonly) NSString *playbackStateStopped;
@property(readonly) NSString *playbackStateSeekingForward;
@property(readonly) NSString *playbackStateSeekingBackward;
@property(readonly) NSString *playbackStatePlaying;
@property(readonly) NSString *playbackStatePaused;
@property(readonly) NSString *playbackStateInterrupted;
@property(readonly) NSString *shuffleModeSongs;
@property(readonly) NSString *shuffleModeOff;
@property(readonly) NSString *shuffleModeDefault;
@property(readonly) NSString *shuffleModeAlbums;
@property(readonly) NSString *repeatModeOne;
@property(readonly) NSString *repeatModeNone;
@property(readonly) NSString *repeatModeDefault;
@property(readonly) NSString *repeatModeAll;
- (id)initWithPlayerType:(id)arg1;
@property(readonly) NSString *playerType;
- (id)attributeKeys;
@property(retain) NSNumber *volume;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)pause;
- (void)stop;
- (void)dealloc;
- (void)setQueueWithQuery:(id)arg1;
@property(copy) NSString *shuffleMode;
- (void)setQueueWithItemCollection:(id)arg1;
@property(readonly) SUScriptMediaItem *nowPlayingItem;
@property(readonly) double currentPlaybackTime;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)play;
@property(copy) NSString *repeatMode;
@property(readonly) NSString *playbackState;

@end
