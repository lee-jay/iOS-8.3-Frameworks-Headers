//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HelpKit/APDNavigationTableViewController.h>

#import "UISearchBarDelegate.h"

@class APDSearchBar, APDSearchModel, NSString, NSTimer, UILabel, UIView;

@interface APDSearchViewController : APDNavigationTableViewController <UISearchBarDelegate>
{
    BOOL _showSearchBarPending;
    BOOL _viewDidAppeared;
    BOOL _shouldHighlighViewingTopic;
    APDSearchModel *_searchModel;
    BOOL _searching;
    APDSearchBar *_searchBar;
    UILabel *_footerViewLabel;
    UIView *_footerView;
    UIView *_toolbarTopOverlapView;
    UIView *_topbarBottomStrokeView;
    NSTimer *_axSearchTimer;
}

@property(nonatomic) __weak UIView *topbarBottomStrokeView; // @synthesize topbarBottomStrokeView=_topbarBottomStrokeView;
@property(nonatomic) __weak UIView *toolbarTopOverlapView; // @synthesize toolbarTopOverlapView=_toolbarTopOverlapView;
@property(nonatomic) __weak UILabel *footerViewLabel; // @synthesize footerViewLabel=_footerViewLabel;
- (void)endSearch;
- (void)enableSearchBarCancelButton:(id)arg1;
@property(retain, nonatomic) NSTimer *axSearchTimer; // @synthesize axSearchTimer=_axSearchTimer;
- (void)announceResults;
- (void)updateTableViewData;
- (void)updateFooterLabel;
- (void)updateViewLayout;
- (void)updateLocalizedStrings;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic, getter=isSearching) BOOL searching; // @synthesize searching=_searching;
- (void).cxx_destruct;
@property(nonatomic) __weak APDSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)dismissKeyboard;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (int)positionForBar:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;
- (void)show;
- (void)hide;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <APDSearchViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
