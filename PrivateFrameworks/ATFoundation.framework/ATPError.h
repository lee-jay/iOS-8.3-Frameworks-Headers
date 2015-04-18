//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface ATPError : PBCodable <NSCopying>
{
    long long _domainCode;
    int _code;
    NSString *_domain;
    NSString *_errorDescription;
    struct {
        unsigned int domainCode:1;
        unsigned int code:1;
    } _has;
}

@property(readonly, nonatomic) BOOL hasDomain;
@property(nonatomic) int code; // @synthesize code=_code;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(readonly, nonatomic) BOOL hasErrorDescription;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) BOOL hasCode;
@property(nonatomic) long long domainCode; // @synthesize domainCode=_domainCode;
@property(nonatomic) BOOL hasDomainCode;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
