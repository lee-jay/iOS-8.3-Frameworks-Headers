//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSConcreteMutableAttributedString.h"

@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString
{
    id _delegate;
}

+ (Class)_mutableStringClass;
- (void)endEditing;
- (void)beginEditing;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)edited:(unsigned int)arg1 range:(struct _NSRange)arg2 changeInLength:(int)arg3;

@end
