//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/PBSlideBase.h>

@interface PBSlideMaster : PBSlideBase
{
}

+ (void)flattenPlaceholderTextStylesIntoLayout:(id)arg1 layoutType:(int)arg2 masterStyleMap:(id)arg3;
+ (void)readSlideMasterStyles:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)setCannedOtherTextListStyle:(id)arg1;
+ (void)flattenMasterStyleType:(int)arg1 baseType:(int)arg2 masterStyleMap:(id)arg3;
+ (void)flattenBaseMasterStyleType:(int)arg1 masterStyleMap:(id)arg2;
+ (void)readSlideLayout:(id)arg1 slideHolder:(id)arg2 layoutType:(int)arg3 state:(id)arg4;
+ (void)readMasterDrawables:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)flattenTextStyle:(id)arg1 intoTextBox:(id)arg2;
+ (int)textTypeFor:(int)arg1 placeholderType:(int)arg2;
+ (id)textBodyForPlaceholderType:(int)arg1 slideLayout:(id)arg2;
+ (void)setFont:(id)arg1 fromCharacterProperties:(id)arg2;
+ (void)padMissingLevels:(id)arg1;
+ (id)createMasterStyleMap:(id)arg1 state:(id)arg2;

@end

