//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSOrderedSet.h>

@interface __NSOrderedSetI : NSOrderedSet
{
    unsigned int _used:26;
    unsigned int _szidx:6;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)__new:(const id *)arg1:(unsigned int)arg2:(BOOL)arg3;
- (void)finalize;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned int)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;

@end

