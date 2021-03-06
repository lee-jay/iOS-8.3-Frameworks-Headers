//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocation, NSString;

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying>
{
    double _transactionLocationAge;
    double _transactionTimestamp;
    NSString *_merchantCode;
    NSString *_paymentNetwork;
    NSString *_rawMerchantCode;
    GEOLocation *_transactionLocation;
    struct {
        unsigned int transactionLocationAge:1;
        unsigned int transactionTimestamp:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSString *rawMerchantCode; // @synthesize rawMerchantCode=_rawMerchantCode;
@property(nonatomic) double transactionLocationAge; // @synthesize transactionLocationAge=_transactionLocationAge;
@property(retain, nonatomic) GEOLocation *transactionLocation; // @synthesize transactionLocation=_transactionLocation;
@property(nonatomic) double transactionTimestamp; // @synthesize transactionTimestamp=_transactionTimestamp;
@property(retain, nonatomic) NSString *merchantCode; // @synthesize merchantCode=_merchantCode;
@property(retain, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(readonly, nonatomic) BOOL hasRawMerchantCode;
@property(nonatomic) BOOL hasTransactionLocationAge;
@property(readonly, nonatomic) BOOL hasTransactionLocation;
@property(nonatomic) BOOL hasTransactionTimestamp;
@property(readonly, nonatomic) BOOL hasMerchantCode;
@property(readonly, nonatomic) BOOL hasPaymentNetwork;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

