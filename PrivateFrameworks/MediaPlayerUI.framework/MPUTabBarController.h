//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

@class NSArray, NSString;

@interface MPUTabBarController : UITabBarController
{
    NSArray *_customizableViewControllerIdentifiers;
    Class _viewControllerFactoryClass;
    NSArray *_viewControllerIdentifiers;
}

+ (Class)_moreNavigationControllerClass;
@property(retain, nonatomic) Class viewControllerFactoryClass; // @synthesize viewControllerFactoryClass=_viewControllerFactoryClass;
@property(copy, nonatomic) NSArray *viewControllerIdentifiers; // @synthesize viewControllerIdentifiers=_viewControllerIdentifiers;
@property(copy, nonatomic) NSString *selectedViewControllerIdentifier;
@property(readonly, nonatomic) NSArray *filteredViewControllerIdentifiers;
@property(copy, nonatomic) NSArray *customizableViewControllerIdentifiers; // @synthesize customizableViewControllerIdentifiers=_customizableViewControllerIdentifiers;
- (void)reloadTabsPurgingExistingTabs:(BOOL)arg1;
- (void)reloadTabsAnimated:(BOOL)arg1;
- (BOOL)presentModalViewControllerIfAppropriate:(id)arg1;
- (id)_viewControllerForIdentifier:(id)arg1;
- (id)_identifierForViewController:(id)arg1;
- (void)setViewControllerIdentifiers:(id)arg1 animated:(BOOL)arg2;
- (id)_existingViewControllerForIdentifier:(id)arg1;
- (id)_identifierForViewControllerAtIndex:(unsigned int)arg1;
- (void)_reloadTabBarFromIdentifiersAnimated:(BOOL)arg1;
- (BOOL)shouldSelectViewController:(id)arg1;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <MPUTabBarControllerDelegate> delegate;

@end
