//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "IKAppNavigationController.h"
#import "MPUExtrasLoadingViewDelegate.h"

@class MPUExtrasContext, MPUExtrasLoadingView, MPUExtrasMainTemplateViewController, NSString, UIViewController;

@interface MPUExtrasNavigationController : UINavigationController <MPUExtrasLoadingViewDelegate, IKAppNavigationController>
{
    MPUExtrasLoadingView *_loadingView;
    UIViewController *_emptyViewController;
    MPUExtrasContext *_context;
    BOOL _clearStackOnPush;
}

- (void)removeDocument:(id)arg1;
- (void)popToRootDocument;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (id)documents;
- (void)setClearsStackOnNextPush;
- (void)finalizeMainTemplateOffset:(BOOL)arg1;
- (void)applyMainTemplateOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)loadingView:(id)arg1 documentDidUpdate:(id)arg2 options:(id)arg3;
- (void)_dismissViewController:(id)arg1;
- (void)_installBackButtonOnNavigationItem:(id)arg1 withTitle:(id)arg2;
- (id)_viewControllerForDocument:(id)arg1 index:(int *)arg2;
- (void)_presentDialogTemplate:(id)arg1;
- (void)_installDoneButtonOnNavigationItem:(id)arg1;
@property(readonly) MPUExtrasMainTemplateViewController *mainTemplateViewController;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidLoad;
@property(readonly, nonatomic) __weak MPUExtrasContext *context; // @synthesize context=_context;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

