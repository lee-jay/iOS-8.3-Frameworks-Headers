//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface BRFieldUserIdentity : PBCodable <NSCopying>
{
    NSString *_displayName;
    NSString *_firstName;
    NSString *_lastName;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)initWithCKUserIdentity:(id)arg1;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) BOOL hasDisplayName;
@property(readonly, nonatomic) BOOL hasLastName;
@property(readonly, nonatomic) BOOL hasFirstName;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)userFormattedName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
