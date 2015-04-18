//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MFMailComposeRecipientView, NSArray, NSMutableArray, NSMutableIndexSet, NSString, UITableView;

@interface MFMailComposeCorecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    NSMutableIndexSet *_selectedIndexes;
    NSMutableArray *_recipients;
    MFMailComposeRecipientView *_recipientView;
}

@property(retain, nonatomic) MFMailComposeRecipientView *recipientView; // @synthesize recipientView=_recipientView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
- (void)_dismissAndAddSelectedContacts;
- (void)_didTapDoneButton:(id)arg1;
- (id)initWithRecentComposeRecipients:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
