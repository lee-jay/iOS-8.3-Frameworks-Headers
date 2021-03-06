//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSMutableDictionary.h>

@class NSSharedKeySet;

@interface NSSharedKeyDictionary : NSMutableDictionary
{
    NSSharedKeySet *_keyMap;
    unsigned int _count;
    id *_values;
    CDUnknownFunctionPointerType _ifkIMP;
    NSMutableDictionary *_sideDic;
    unsigned long _mutations;
}

+ (id)sharedKeyDictionaryWithKeySet:(id)arg1;
- (void)finalize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)keySet;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)keyEnumerator;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeObjectForKey:(id)arg1;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)initWithKeySet:(id)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned int)arg3;

@end

