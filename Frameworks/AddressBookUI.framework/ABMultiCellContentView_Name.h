//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABMultiCellContentView_Rows.h>

@interface ABMultiCellContentView_Name : ABMultiCellContentView_Rows
{
}

+ (unsigned int)rowsForPropertyGroup:(id)arg1 info:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)reload;
- (void)reloadFromModelIncludingRows:(BOOL)arg1;
- (id)keyboardSettingsForKey:(id)arg1;
- (void)entryField:(id)arg1 valueDidChange:(id)arg2 forKey:(id)arg3;
- (void)reloadLabelFromModel;
- (id)displayTextColor;
- (id)labelTextColorWhenEditing:(BOOL)arg1;
- (void)reloadFromModel;

@end
