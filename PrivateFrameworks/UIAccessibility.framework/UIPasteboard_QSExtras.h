//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIAccessibility/__UIPasteboard_QSExtras_super.h>

@interface UIPasteboard_QSExtras : __UIPasteboard_QSExtras_super
{
}

+ (void)_accessibilitySetUseQuickSpeakPasteBoard:(BOOL)arg1;
+ (id)_accessibilityQuickSpeakPasteboard;
+ (BOOL)_accessibilityUseQuickSpeakPasteBoard;
+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)generalPasteboard;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;
- (BOOL)_accessibilityShouldSwapReceiverWithQuickSpeakPasteboard;
- (id)colors;
- (id)URLs;
- (id)strings;
- (void)addItems:(id)arg1;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (BOOL)containsPasteboardTypes:(id)arg1;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (int)numberOfItems;
- (int)changeCount;
- (id)color;
- (id)URL;
- (void)setItems:(id)arg1;
- (id)items;
- (id)image;
- (id)images;
- (id)string;

@end

