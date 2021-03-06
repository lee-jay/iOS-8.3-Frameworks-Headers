//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "SKStoreProductViewControllerDelegate.h"

@class NSArray, NSDictionary, NSString, NSURL, PKLinkedAppUserRatingView, SKStoreProductViewController, SSSoftwareLibraryItem, UIActivityIndicatorView, UIButton, UIColor, UIImageView, UILabel;

@interface PKLinkedAppView : UITableViewCell <SKStoreProductViewControllerDelegate>
{
    BOOL _lookupInitiated;
    BOOL _appInstalled;
    BOOL _appNotAvailable;
    NSArray *_storeIDs;
    NSDictionary *_foundStoreItem;
    SSSoftwareLibraryItem *_foundLibraryItem;
    UIImageView *_iconView;
    UILabel *_tapToOpen;
    UILabel *_appName;
    UIButton *_viewButton;
    UILabel *_appPublisher;
    PKLinkedAppUserRatingView *_userRatingView;
    UILabel *_price;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_loadingLabel;
    SKStoreProductViewController *_productViewController;
    NSURL *_appLaunchURL;
    UIColor *_mainLabelColor;
    UIColor *_subTextLabelColor;
}

- (void)productViewControllerDidFinish:(id)arg1;
@property(retain, nonatomic) UILabel *price; // @synthesize price=_price;
- (void)_layoutLoadingView;
@property(retain, nonatomic) NSURL *appLaunchURL; // @synthesize appLaunchURL=_appLaunchURL;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void)_buttonPressed:(id)arg1;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)reload;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
@property(retain, nonatomic) SKStoreProductViewController *productViewController; // @synthesize productViewController=_productViewController;
@property(retain, nonatomic) PKLinkedAppUserRatingView *userRatingView; // @synthesize userRatingView=_userRatingView;
@property(retain, nonatomic) UILabel *appPublisher; // @synthesize appPublisher=_appPublisher;
@property(retain, nonatomic) UIButton *viewButton; // @synthesize viewButton=_viewButton;
@property(retain, nonatomic) UILabel *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) UILabel *tapToOpen; // @synthesize tapToOpen=_tapToOpen;
- (BOOL)_itemArtNeedsShine:(id)arg1;
- (struct CGSize)_sizeFromImage:(id)arg1;
- (int)_bindingTypeForNewsstandItem:(id)arg1;
- (id)_imageForSize:(struct CGSize)arg1 fromArtwork:(id)arg2 requireStrictMatch:(BOOL)arg3;
@property(retain, nonatomic) SSSoftwareLibraryItem *foundLibraryItem; // @synthesize foundLibraryItem=_foundLibraryItem;
- (id)_priceForItem:(id)arg1;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
- (void)_cleanupViews;
- (void)_layoutLockupView;
@property(retain, nonatomic) NSDictionary *foundStoreItem; // @synthesize foundStoreItem=_foundStoreItem;
@property(nonatomic) BOOL lookupInitiated; // @synthesize lookupInitiated=_lookupInitiated;
- (void)_layoutNotAvailableView;
@property(nonatomic) BOOL appNotAvailable; // @synthesize appNotAvailable=_appNotAvailable;
- (int)_iconOptionsForItem:(id)arg1;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize)arg2;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize)arg2 requireStrictMatch:(BOOL)arg3;
- (struct CGSize)_desiredSizeForNewsstandItem:(id)arg1;
- (id)_newsstandArtworkForItem:(id)arg1;
- (BOOL)_itemIsNewsstandApp:(id)arg1;
- (int)_iconVariantForScale:(float)arg1 item:(id)arg2;
- (void)performStoreLookup;
@property(nonatomic) BOOL appInstalled; // @synthesize appInstalled=_appInstalled;
- (BOOL)_anyAppIsInstalled:(id)arg1;
@property(nonatomic) UIColor *subTextLabelColor; // @synthesize subTextLabelColor=_subTextLabelColor;
@property(nonatomic) UIColor *mainLabelColor; // @synthesize mainLabelColor=_mainLabelColor;
- (void)reloadWithDelay:(double)arg1;
@property(retain, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

