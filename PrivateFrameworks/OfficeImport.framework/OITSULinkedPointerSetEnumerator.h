//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class OITSULinkedPointerSetEntry;

@interface OITSULinkedPointerSetEnumerator : NSEnumerator
{
    OITSULinkedPointerSetEntry *mHead;
    OITSULinkedPointerSetEntry *mLastUsed;
}

- (id)initWithFirstEntry:(id)arg1;
- (id)nextObject;

@end

