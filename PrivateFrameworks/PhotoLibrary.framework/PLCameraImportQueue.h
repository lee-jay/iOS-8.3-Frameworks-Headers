//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PLCameraImportQueue : NSObject
{
    NSMutableArray *_items;
    unsigned int _index;
}

- (void)didCompleteItem:(id)arg1;
- (id)completedItems;
- (id)itemsNotCompleted;
- (id)currentItem;
- (id)initWithItems:(id)arg1;
- (void)setItems:(id)arg1;
- (id)items;
- (id)description;
- (void)dealloc;
- (BOOL)isCompleted;
- (void)_removeItem:(id)arg1;

@end

