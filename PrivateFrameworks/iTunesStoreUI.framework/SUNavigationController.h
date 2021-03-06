//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "SUScriptNativeObject.h"

@class NSString, SUClientInterface, SUSection;

@interface SUNavigationController : UINavigationController <SUScriptNativeObject>
{
    BOOL _canBeWeakScriptReference;
    SUClientInterface *_clientInterface;
    BOOL _loading;
    SUSection *_section;
    int _storeBarStyle;
}

- (id)copyScriptViewController;
- (void)_loadingDidChangeNotification:(id)arg1;
- (BOOL)clearsWeakScriptReferences;
- (id)_sectionForViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)initWithSection:(id)arg1 rootViewController:(id)arg2;
- (id)copyArchivableContext;
- (void)_setStoreBarStyle:(int)arg1 clientInterface:(id)arg2;
- (int)ITunesStoreUIBarStyle;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (id)initWithSection:(id)arg1;
@property(retain, nonatomic) SUSection *section; // @synthesize section=_section;
- (void)setViewControllers:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (void)setToolbarHidden:(BOOL)arg1;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (void)removeChildViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)addChildViewController:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

