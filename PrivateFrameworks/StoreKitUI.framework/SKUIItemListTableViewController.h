//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "SKUIItemCollectionDelegate.h"

@class NSMutableIndexSet, NSOperationQueue, NSString, SKUIClientContext, SKUIItemArtworkContext, SKUIItemCollectionController, SKUIItemList, SKUIResourceLoader, SKUIStyledImageDataConsumer, SKUIUber, SSVLoadURLOperation;

@interface SKUIItemListTableViewController : UITableViewController <SKUIItemCollectionDelegate>
{
    SKUIClientContext *_clientContext;
    id <SKUIItemListTableDelegate> _delegate;
    BOOL _delegateWantsCanRemove;
    BOOL _delegateWantsDidRemove;
    BOOL _delegateWantsWillDisplay;
    BOOL _didLoadMore;
    NSMutableIndexSet *_hiddenIconIndexSet;
    struct CGSize _imageBoundingSize;
    SKUIItemArtworkContext *_artworkContext;
    SKUIItemCollectionController *_itemCollectionController;
    SKUIItemList *_itemList;
    SSVLoadURLOperation *_loadMoreOperation;
    BOOL _loadsMoreItems;
    NSOperationQueue *_operationQueue;
    float _rowHeight;
    int _selectionStyle;
    int _separatorStyle;
    BOOL _suspended;
    SKUIUber *_uber;
    BOOL _requestedLoadMore;
}

@property(nonatomic) BOOL loadsMoreItems; // @synthesize loadsMoreItems=_loadsMoreItems;
@property(retain, nonatomic) SKUIItemList *itemList; // @synthesize itemList=_itemList;
- (void)itemTableView:(id)arg1 didRemoveCell:(id)arg2;
@property(readonly, nonatomic) NSString *visibleMetricsImpressions;
- (void)setItemArtworkContext:(id)arg1;
- (void)deleteRowsAtIndexPaths:(id)arg1;
- (void)_finishLoadMoreOperationWithItems:(id)arg1 error:(id)arg2;
- (id)_itemListCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)_loadRemainingItemsWithPriority:(int)arg1;
@property(retain, nonatomic) SKUIResourceLoader *artworkLoader;
- (void)unhideIcons;
- (void)setItemCellClass:(Class)arg1;
- (id)popIconImageViewForItemAtIndex:(int)arg1;
@property(retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
- (void)loadNextPageOfArtworkWithReason:(int)arg1;
- (id)_loadMoreCellForTableView:(id)arg1 indexPath:(id)arg2;
- (struct CGRect)frameForItemAtIndex:(int)arg1;
@property(nonatomic) struct CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;
- (void)itemTableView:(id)arg1 didConfirmItemOfferForTableViewCell:(id)arg2;
- (BOOL)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1;
- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;
- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(int)arg2;
@property(retain, nonatomic) SKUIItemArtworkContext *artworkContext; // @synthesize artworkContext=_artworkContext;
- (id)_itemCollectionController;
@property(retain, nonatomic) SKUIUber *uber; // @synthesize uber=_uber;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
- (void).cxx_destruct;
- (void)addItems:(id)arg1;
@property(nonatomic) int selectionStyle; // @synthesize selectionStyle=_selectionStyle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) __weak id <SKUIItemListTableDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
@property(nonatomic) float rowHeight; // @synthesize rowHeight=_rowHeight;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

