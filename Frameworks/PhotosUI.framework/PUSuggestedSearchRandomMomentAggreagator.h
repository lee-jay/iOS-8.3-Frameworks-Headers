//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUSuggestedSearch.h>

@class NSMapTable, PLSearchIndexDateFormatter;

@interface PUSuggestedSearchRandomMomentAggreagator : PUSuggestedSearch
{
    NSMapTable *_searches;
    PLSearchIndexDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (id)init;
- (void)registerSearch:(id)arg1;
- (void)_inqRestart;

@end

