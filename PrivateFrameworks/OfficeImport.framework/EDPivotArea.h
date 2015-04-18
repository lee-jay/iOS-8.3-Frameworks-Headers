//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDCollection, EDReference;

@interface EDPivotArea : NSObject
{
    _Bool mGrandCol;
    _Bool mGrandRow;
    _Bool mOutline;
    int mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}

+ (id)pivotArea;
- (void)setOutline:(_Bool)arg1;
- (_Bool)outline;
- (void)setGrandCol:(_Bool)arg1;
- (_Bool)grandCol;
- (void)setGrandRow:(_Bool)arg1;
- (_Bool)grandRow;
- (id)references;
- (id)offset;
- (void)setOffset:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;

@end
