//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSLocking.h"

@class NSString;

@interface NSRecursiveLock : NSObject <NSLocking>
{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)unlock;
- (void)lock;
@property(copy) NSString *name;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)isLocking;
- (BOOL)lockBeforeDate:(id)arg1;
- (BOOL)tryLock;

@end

