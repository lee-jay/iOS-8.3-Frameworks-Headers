//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSArray, NSDateFormatter, NSMutableIndexSet, SKUIClientContext, SKUIColorScheme, SKUILayoutCache, SKUIProductPageTableExpandableHeaderView;

@interface SKUIProductPageTableUpdateHistorySection : SKUIProductPageTableSection
{
    SKUIClientContext *_clientContext;
    NSMutableIndexSet *_expandedIndexSet;
    int _firstStringIndex;
    SKUIProductPageTableExpandableHeaderView *_headerView;
    NSArray *_releaseNotes;
    SKUILayoutCache *_textLayoutCache;
    SKUIColorScheme *_colorScheme;
    NSDateFormatter *_dateFormatter;
}

@property(nonatomic) int firstStringIndex; // @synthesize firstStringIndex=_firstStringIndex;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)_reloadHeaderView;
@property(copy, nonatomic) NSArray *releaseNotes; // @synthesize releaseNotes=_releaseNotes;
@property(retain, nonatomic) SKUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;
- (id)headerViewForTableView:(id)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (int)numberOfRowsInSection;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (id)initWithClientContext:(id)arg1;
- (void).cxx_destruct;
- (void)setExpanded:(BOOL)arg1;

@end

