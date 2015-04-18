//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationLegacySupport.h"
#import "NEConfigurationValidating.h"
#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface NEIPv4Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    BOOL _overridePrimary;
    int _configMethod;
    NSString *_address;
    NSString *_subnetMask;
    NSString *_router;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property BOOL overridePrimary; // @synthesize overridePrimary=_overridePrimary;
@property(copy) NSString *router; // @synthesize router=_router;
@property(copy) NSString *subnetMask; // @synthesize subnetMask=_subnetMask;
@property int configMethod; // @synthesize configMethod=_configMethod;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;

@end
