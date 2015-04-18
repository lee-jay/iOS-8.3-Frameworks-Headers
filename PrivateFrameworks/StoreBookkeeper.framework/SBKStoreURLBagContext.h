//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString, NSURL, SSURLBag;

@interface SBKStoreURLBagContext : NSObject <NSMutableCopying, NSCopying>
{
    BOOL _domainDisabled;
    NSString *_domain;
    NSURL *_syncRequestURL;
    NSURL *_pushKeyValueRequestURL;
    NSURL *_pullKeyValueRequestURL;
    NSURL *_pushAllKeyValueRequestURL;
    NSURL *_pullAllKeyValueRequestURL;
    SSURLBag *_bag;
    double _pollingIntervalInSeconds;
}

+ (id)ExtrasDomainIdentifier;
+ (id)UPPDomainIdentifier;
+ (void)enumerateRequestURLBagKeysWithBlock:(CDUnknownBlockType)arg1;
+ (void)_findFirstValueInBag:(id)arg1 keyEnumerator:(id)arg2 valueTransformer:(CDUnknownBlockType)arg3 defaultValue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)loadBagContextFromURLBag:(id)arg1 domain:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(retain) SSURLBag *bag; // @synthesize bag=_bag;
@property BOOL domainDisabled; // @synthesize domainDisabled=_domainDisabled;
@property(retain) NSURL *pullAllKeyValueRequestURL; // @synthesize pullAllKeyValueRequestURL=_pullAllKeyValueRequestURL;
@property(retain) NSURL *pushAllKeyValueRequestURL; // @synthesize pushAllKeyValueRequestURL=_pushAllKeyValueRequestURL;
@property(retain) NSURL *pullKeyValueRequestURL; // @synthesize pullKeyValueRequestURL=_pullKeyValueRequestURL;
@property(retain) NSURL *pushKeyValueRequestURL; // @synthesize pushKeyValueRequestURL=_pushKeyValueRequestURL;
@property(retain) NSURL *syncRequestURL; // @synthesize syncRequestURL=_syncRequestURL;
@property double pollingIntervalInSeconds; // @synthesize pollingIntervalInSeconds=_pollingIntervalInSeconds;
- (id)_initWithDomain:(id)arg1 syncRequestURL:(id)arg2 domainDisabled:(BOOL)arg3;
- (id)initWithBag:(id)arg1 domain:(id)arg2;
@property(copy) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end
