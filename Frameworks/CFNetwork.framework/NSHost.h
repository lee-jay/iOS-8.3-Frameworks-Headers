//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, __NSHostExtraIvars;

@interface NSHost : NSObject
{
    NSArray *names;
    NSArray *addresses;
    id reserved;
}

+ (id)currentHost;
+ (void)flushHostCache;
+ (void)setHostCacheEnabled:(BOOL)arg1;
+ (BOOL)isHostCacheEnabled;
+ (id)hostWithAddress:(id)arg1;
+ (id)hostWithName:(id)arg1;
@property(readonly, copy) NSArray *names;
@property(readonly, copy) NSString *localizedName;
@property(readonly, copy) NSString *name;
- (id)description;
- (void)dealloc;
@property(readonly, copy) NSString *address;
@property(readonly, copy) NSArray *addresses;
- (id)_thingToResolve;
- (BOOL)isEqualToHost:(id)arg1;
- (void)blockingResolveUntil:(int)arg1;
- (void)resolve:(CDUnknownBlockType)arg1;
- (void)resolveCurrentHostWithHandler:(CDUnknownBlockType)arg1;
- (void)__resolveWithFlags:(int)arg1 resultArray:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initToResolve:(id)arg1 as:(int)arg2;
@property(retain, nonatomic) __NSHostExtraIvars *reserved; // @synthesize reserved;

@end
