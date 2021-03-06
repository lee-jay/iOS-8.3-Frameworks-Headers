//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSExpression.h>

@interface NSAggregateExpression : NSExpression
{
    id _collection;
}

+ (BOOL)supportsSecureCoding;
- (id)constantValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCollection:(id)arg1;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)predicateFormat;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)collection;
- (void)allowEvaluation;

@end

