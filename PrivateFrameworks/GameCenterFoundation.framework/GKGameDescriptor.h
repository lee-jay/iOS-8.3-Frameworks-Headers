//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSNumber, NSString;

@interface GKGameDescriptor : GKInternalRepresentation
{
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_adamID;
    NSNumber *_externalVersion;
}

+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 adamID:(id)arg3;
+ (id)gameDescriptorWithBundleID:(id)arg1 adamID:(id)arg2;
+ (id)gameDescriptorWithBundleID:(id)arg1;
+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
- (void)setDictionary:(id)arg1;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
- (id)initWithPushDictionary:(id)arg1;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (void)dealloc;

@end
