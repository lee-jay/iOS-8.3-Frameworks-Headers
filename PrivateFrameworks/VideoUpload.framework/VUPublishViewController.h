//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UIPickerViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, PLTableViewEditableCell, UIAlertView, UIImageView, UIPickerView, UITableView, UITableViewCell, UIView, VUCategory, VUCategoryCell, VUFooterContainerView;

@interface VUPublishViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDelegate, UIAlertViewDelegate>
{
    UITableView *_tableView;
    UIPickerView *_picker;
    UIView *_pickerContainer;
    BOOL _viewShrunk;
    BOOL _showingPicker;
    UIImageView *_headerImageView;
    PLTableViewEditableCell *_titleCell;
    PLTableViewEditableCell *_descriptionCell;
    float _descriptionHeight;
    PLTableViewEditableCell *_optionCells[2];
    NSMutableArray *_tagCells;
    VUCategoryCell *_categoryCell;
    NSArray *_accessCells;
    unsigned int _accessRow;
    UITableViewCell *_accountCell;
    VUFooterContainerView *_footerContainer;
    UIAlertView *_authenticationAlert;
    UIAlertView *_accountAlert;
    UIAlertView *_authenticationFailedAlert;
    struct {
        int title;
        int hd;
        int tags;
        int category;
        int access;
        int account;
    } _sectionIndices;
    BOOL _showHDSection;
    BOOL _enableHDSection;
    id <VUPublishViewControllerDelegate> _delegate;
    int _selectedOption;
    long long _SDSize;
    long long _HDSize;
}

@property(readonly, nonatomic) NSString *videoDescription;
@property(nonatomic) long long HDSize; // @synthesize HDSize=_HDSize;
@property(nonatomic) long long SDSize; // @synthesize SDSize=_SDSize;
@property(nonatomic) BOOL enableHDSection; // @synthesize enableHDSection=_enableHDSection;
@property(nonatomic) BOOL showHDSection; // @synthesize showHDSection=_showHDSection;
@property(readonly, nonatomic) VUCategory *videoCategory;
@property(readonly, nonatomic) NSArray *videoTags;
@property(readonly, nonatomic) NSString *videoTitle;
- (void)resignResponder;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;
- (int)_indexOfBlankTagCellOtherThan:(id)arg1;
- (id)accountAlert;
- (void)orderOutKeyboard;
- (id)termsOfUseString;
- (id)termsOfUseURL;
- (void)_shrinkView;
- (void)_unshrinkView;
- (BOOL)_isAuthenticated;
- (id)accountString;
- (BOOL)checkParametersAndWarn;
- (void)authReturnKeyPressed:(id)arg1;
- (void)_footerFrameDidChangeWithSplitKeyboard:(BOOL)arg1;
- (void)_termsButtonPressed:(id)arg1;
- (void)_addNewTagCell;
- (id)accessCells;
- (void)_updateAccountCell;
- (id)headerLogo;
- (void)_authenticatorFailed:(id)arg1;
- (void)_authenticatorStateChanged:(id)arg1;
- (void)_updatePublishButton;
- (void)_automaticKeyboardDidHide:(id)arg1;
- (void)_automaticKeyboardDidShow:(id)arg1;
- (void)editableTagCellEndOfTagCharacterPressed:(id)arg1;
- (void)editableCell:(id)arg1 textChanged:(id)arg2;
- (void)editableCellReturnPressed:(id)arg1;
- (void)editableCellDidBeginEditing:(id)arg1;
@property(readonly, nonatomic) int selectedOption; // @synthesize selectedOption=_selectedOption;
- (void)_hidePicker;
- (void)_showPicker;
- (void)_publish;
- (void)_cancel;
- (void).cxx_destruct;
- (id)categories;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
@property(nonatomic) __weak id <VUPublishViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)init;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)dealloc;
- (id)authenticator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
