//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicQueryDataSource.h>

@class MPMediaLibrary, MPMediaPlaylist;

@interface MusicPlaylistSongsDataSource : MusicQueryDataSource
{
    MPMediaLibrary *_mediaLibrary;
}

- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (BOOL)showsEntityCountFooter;
- (id)entityCountFormat;
- (BOOL)entityIsSeedItemAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) MPMediaPlaylist *playlist;
- (id)initWithQuery:(id)arg1 entityType:(int)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)moveItemFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;

@end
