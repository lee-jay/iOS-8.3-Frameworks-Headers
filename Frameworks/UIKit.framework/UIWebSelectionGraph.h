//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface UIWebSelectionGraph : NSObject
{
    NSMutableArray *_selectionNodes;
}

- (void)exploreFromNode:(id)arg1;
- (void)exploreFromNode:(id)arg1 outwards:(BOOL)arg2 maxDepth:(int)arg3;
- (id)addNodeFromSelection:(id)arg1;
- (void)clearNodes;
- (id)init;
- (void)dealloc;

@end
