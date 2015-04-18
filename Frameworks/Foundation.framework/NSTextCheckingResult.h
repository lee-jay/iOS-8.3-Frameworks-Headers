//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)transitInformationCheckingResultWithRange:(struct _NSRange)arg1 components:(id)arg2;
+ (id)phoneNumberCheckingResultWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2;
+ (id)regularExpressionCheckingResultWithRanges:(struct _NSRange *)arg1 count:(unsigned int)arg2 regularExpression:(id)arg3;
+ (id)correctionCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3;
+ (id)correctionCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;
+ (id)replacementCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;
+ (id)dashCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;
+ (id)quoteCheckingResultWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;
+ (id)linkCheckingResultWithRange:(struct _NSRange)arg1 URL:(id)arg2;
+ (id)addressCheckingResultWithRange:(struct _NSRange)arg1 components:(id)arg2;
+ (id)dateCheckingResultWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
+ (id)dateCheckingResultWithRange:(struct _NSRange)arg1 date:(id)arg2;
+ (id)grammarCheckingResultWithRange:(struct _NSRange)arg1 details:(id)arg2;
+ (id)spellCheckingResultWithRange:(struct _NSRange)arg1;
+ (id)orthographyCheckingResultWithRange:(struct _NSRange)arg1 orthography:(id)arg2;
@property(readonly) unsigned long long resultType;
- (struct _NSRange)rangeAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfRanges;
- (id)components;
- (id)alternativeStrings;
- (id)timeZone;
- (id)phoneNumber;
@property(readonly) struct _NSRange range;
- (id)URL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)date;
- (double)duration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void *)underlyingResult;
- (id)regularExpression;
- (id)replacementString;
- (id)addressComponents;
- (id)grammarDetails;
- (id)orthography;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (struct _NSRange)decodeRangeWithCoder:(id)arg1;
- (void)encodeRangeWithCoder:(id)arg1;

@end
