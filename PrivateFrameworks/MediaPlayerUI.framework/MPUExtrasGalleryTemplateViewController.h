//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>

@class MPUExtrasBannerController, MPUExtrasGridElementViewController;

@interface MPUExtrasGalleryTemplateViewController : MPUExtrasTemplateViewController
{
    MPUExtrasBannerController *_bannerController;
    MPUExtrasGridElementViewController *_gridViewController;
    unsigned int _selectedItemIndex;
}

- (id)templateElement;
@property(nonatomic) unsigned int selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
- (BOOL)showsPlaceholder;
- (void)_prepareLayout;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)contentScrollView;

@end

