//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFContactsSearchConsumer.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MFContactsSearchManager, MFContactsSearchResultsModel, NSArray, NSNumber, NSString, UITableView, UIView;

@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate>
{
    void *_addressBook;
    id <SKUIGiftContactSearchDelegate> _delegate;
    NSArray *_results;
    MFContactsSearchResultsModel *_resultsModel;
    MFContactsSearchManager *_searchManager;
    UIView *_searchResultsView;
    NSNumber *_searchTaskIdentifier;
    UITableView *_tableView;
}

- (void)_finishSearchWithResults:(id)arg1;
- (void)_setResults:(id)arg1;
- (BOOL)cancelSearch;
- (void)resetSearch;
- (void)searchForText:(id)arg1;
- (id)initWithAddressBook:(void *)arg1;
@property(readonly, nonatomic) UIView *searchResultsView;
@property(readonly, nonatomic) int numberOfResults;
- (void).cxx_destruct;
- (id)_tableView;
@property(nonatomic) __weak id <SKUIGiftContactSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(unsigned int)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned int)arg2 taskID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

