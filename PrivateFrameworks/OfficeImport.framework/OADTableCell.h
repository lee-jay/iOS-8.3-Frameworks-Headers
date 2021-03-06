//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADTableCellProperties, OADTextBody;

@interface OADTableCell : NSObject
{
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    BOOL mHorzMerge;
    BOOL mVertMerge;
    int mTopRow;
    int mLeftColumn;
}

- (void)setRowSpan:(int)arg1;
- (int)rowSpan;
- (void)setLeftColumn:(int)arg1;
- (int)leftColumn;
- (void)setTopRow:(int)arg1;
- (int)topRow;
- (int)spanAlongDir:(int)arg1;
- (void)setTextBody:(id)arg1;
- (void)setVertMerge:(BOOL)arg1;
- (void)setHorzMerge:(BOOL)arg1;
- (void)setGridSpan:(int)arg1;
- (id)textBody;
- (int)gridSpan;
- (BOOL)vertMerge;
- (BOOL)horzMerge;
- (BOOL)merge:(int)arg1;
- (id)properties;
- (void)setProperties:(id)arg1;
- (id)init;
- (void)dealloc;

@end

