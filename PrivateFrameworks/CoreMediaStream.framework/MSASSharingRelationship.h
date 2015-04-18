//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDate, NSString;

@interface MSASSharingRelationship : NSObject <NSCopying>
{
    BOOL _isMine;
    NSString *_GUID;
    NSString *_albumGUID;
    NSString *_email;
    NSArray *_emails;
    NSArray *_phones;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_personID;
    NSDate *_subscriptionDate;
    int _state;
}

+ (id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(retain, nonatomic) NSArray *emails; // @synthesize emails=_emails;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property(nonatomic) BOOL isMine; // @synthesize isMine=_isMine;
@property(retain, nonatomic) NSDate *subscriptionDate; // @synthesize subscriptionDate=_subscriptionDate;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (BOOL)isEqualToSharingRelationship:(id)arg1;
- (id)_fullName;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int state; // @synthesize state=_state;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
