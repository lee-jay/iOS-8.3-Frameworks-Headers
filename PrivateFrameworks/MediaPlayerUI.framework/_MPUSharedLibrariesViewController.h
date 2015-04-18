//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class MPMediaLibrary, NSArray;

@interface _MPUSharedLibrariesViewController : UITableViewController
{
    MPMediaLibrary *_connectingMediaLibrary;
    NSArray *_sharedMediaLibraries;
    BOOL _showsLocalLibrary;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void)_updateConnectionProgress;
- (void)_updateNavigationPrompt;
- (void)_reloadSharedLibraries;
- (void)_updateConnectionProgressForCell:(id)arg1;
- (id)_sharedMediaLibraries;
- (void)_mediaLibraryConnectionProgressDidChangeNotification:(id)arg1;
- (void)_availableMediaLibrariesDidChangeNotification:(id)arg1;
@property(nonatomic) BOOL showsLocalLibrary; // @synthesize showsLocalLibrary=_showsLocalLibrary;
- (void)_cancelConnectionAndDismiss;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;

@end
