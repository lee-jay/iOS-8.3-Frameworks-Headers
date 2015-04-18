//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@class NSCharacterSet;

@interface APFormatter : NSFormatter
{
    NSCharacterSet *_characterSet;
    NSCharacterSet *_invertedCharacterSet;
    unsigned int _maxLength;
}

+ (id)pogoPasswordSet;
+ (id)asciiFormatter:(unsigned int)arg1;
+ (id)phoneNumberFormatter:(unsigned int)arg1;
+ (id)nonZeroNumberOnly:(unsigned int)arg1;
+ (id)maxLengthFormatter:(unsigned int)arg1;
+ (id)multipleIPFormatter:(unsigned int)arg1;
+ (id)sharedMultipleIPFormatter;
+ (id)ipFormatter:(unsigned int)arg1;
+ (id)romanFormatter:(unsigned int)arg1;
+ (id)hexSet;
+ (id)asciiSet;
+ (id)phoneNumberSet;
+ (id)portRangeSet;
+ (id)multipleIpAddressesSet;
+ (id)ipv4AddressWithPrefixSet;
+ (id)ipv6AddressSet;
+ (id)ipv4AddressSet;
+ (id)romanSet;
+ (id)portRangeFormatter:(unsigned int)arg1;
+ (id)sharedPhoneNumberFormatter;
+ (id)sharedIPv4PrefixFormatter;
+ (id)ipOctetFormatter:(unsigned int)arg1;
+ (id)sharedIPv6Formatter;
+ (id)sharedIPFormatter;
+ (id)numberOnlyFormatter:(unsigned int)arg1;
+ (id)hexFormatter:(unsigned int)arg1;
+ (id)formatterForBSFormatter:(int)arg1 withMaxLen:(long)arg2;
@property(nonatomic) unsigned int maxLength; // @synthesize maxLength=_maxLength;
- (id)characterSet;
- (void)setCharacterSet:(id)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)initWithStringOfValidCharacters:(id)arg1 withMaxLength:(unsigned int)arg2;
- (id)initWithMaxLength:(unsigned int)arg1;
- (id)invertedCharacterSet;
- (void)setInvertedCharacterSet:(id)arg1;
- (id)initWithCharacterSet:(id)arg1 withMaxLength:(unsigned int)arg2;
- (id)stringForObjectValue:(id)arg1;
- (void)dealloc;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;

@end
