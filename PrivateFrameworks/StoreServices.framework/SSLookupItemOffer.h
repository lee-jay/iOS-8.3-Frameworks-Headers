//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@interface SSLookupItemOffer : NSObject
{
    NSDictionary *_dictionary;
}

@property(readonly, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_dictionary;
- (id)initWithLookupDictionary:(id)arg1;
- (void)dealloc;
- (id)actionTextForType:(id)arg1;
@property(readonly, nonatomic) NSNumber *price;
@property(readonly, nonatomic) NSString *offerType;
@property(readonly, nonatomic) NSString *formattedPrice;
@property(readonly, nonatomic) NSString *buyParameters;

@end

