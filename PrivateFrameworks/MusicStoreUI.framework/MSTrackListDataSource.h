//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicStoreUI/MSStructuredPageTableDataSource.h>

@interface MSTrackListDataSource : MSStructuredPageTableDataSource
{
}

- (BOOL)canShowItemOfferButtonForItem:(id)arg1;
- (id)cellConfigurationForIndex:(int)arg1 item:(id)arg2;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (void)reloadCellContexts;
- (float)heightForPlaceholderCells;
- (BOOL)canDoubleTapIndexPath:(id)arg1;
- (void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2;
- (id)placeholderCellForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (id)_stylesheetString;
- (BOOL)canShowPreviewForItem:(id)arg1;
- (int)tableViewStyle;
- (id)headerViewForSection:(int)arg1;

@end
