//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RUSearchViewControllerDelegate.h"
#import "RUStationTreeViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, RUMetricsController, RUSearchViewController, RUStationTreeViewController, UISearchDisplayController;

@interface RUCreateStationViewController : UIViewController <RUSearchViewControllerDelegate, RUStationTreeViewControllerDelegate, UIScrollViewDelegate>
{
    RUMetricsController *_metricsController;
    NSMutableArray *_queuedMetricsOperations;
    UISearchDisplayController *_searchDisplayController;
    RUSearchViewController *_searchResultsViewController;
    BOOL _shouldScrollSearchBar;
    BOOL _shouldUseSearchingInsetsForSearchBar;
    RUStationTreeViewController *_stationTreeViewController;
    id <RUCreateStationViewControllerDelegate> _delegate;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (void)_addStationWithDictionary:(id)arg1;
- (void)_updateSearchBarContentInset;
- (void)_doneAction:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)_searchBarSearchingFrame;
- (void)_updateSearchBarFrameForced:(BOOL)arg1;
- (struct UIEdgeInsets)_searchBarContentInset;
- (void)_statusBarHeightChangedNotification:(id)arg1;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (id)_searchDisplayController;
- (void)searchViewControllerWillEndSearching:(id)arg1;
- (void)searchViewControllerDidEndSearching:(id)arg1;
- (void)searchViewControllerWillBeginSearching:(id)arg1;
- (void)searchViewControllerDidBeginSearching:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectStation:(id)arg2;
- (id)metricsPageTypeForSearchViewController:(id)arg1;
- (id)metricsPageDescriptionForSearchViewController:(id)arg1;
- (void)stationTreeViewController:(id)arg1 didSelectStationTreeNode:(id)arg2;
- (void)stationTreeViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)_updateViewForHorizontalSizeClassChange;
- (void)removeAddingIndicator;
- (void)_addMetricsControllerOperationBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets)_contentInset;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic) __weak id <RUCreateStationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

