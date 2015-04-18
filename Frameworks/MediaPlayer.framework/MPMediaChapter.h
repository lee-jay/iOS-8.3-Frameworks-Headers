//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMediaLibraryArtworkDataSource, MPMediaLibraryArtworkRequest;

@interface MPMediaChapter : NSObject
{
    int _chapterType;
    unsigned int _indexInChaptersWithAnyType;
    unsigned int _indexInChaptersWithSameType;
    double _playbackDuration;
    double _playbackTime;
    id _value;
    CDUnknownBlockType _valueLoader;
    MPMediaLibraryArtworkRequest *_artworkRequest;
    MPMediaLibraryArtworkDataSource *_artworkDataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (id)title;
- (double)duration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) MPMediaLibraryArtworkRequest *artworkRequest; // @synthesize artworkRequest=_artworkRequest;
@property(copy, nonatomic) CDUnknownBlockType valueLoader; // @synthesize valueLoader=_valueLoader;
@property(nonatomic) unsigned int indexInChaptersWithSameType; // @synthesize indexInChaptersWithSameType=_indexInChaptersWithSameType;
@property(nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) unsigned int indexInChaptersWithAnyType; // @synthesize indexInChaptersWithAnyType=_indexInChaptersWithAnyType;
@property(nonatomic) int chapterType; // @synthesize chapterType=_chapterType;
@property(nonatomic) __weak MPMediaLibraryArtworkDataSource *artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
- (int)_sortByChapterIndex:(id)arg1;
- (id)artworkCatalog;

@end
