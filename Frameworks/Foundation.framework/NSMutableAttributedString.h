//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSMutableAttributedString : NSAttributedString
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)appendAttributedString:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)setAttributedString:(id)arg1;
- (void)endEditing;
- (void)beginEditing;
- (id)mutableString;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)addAttributesWeakly:(id)arg1 range:(struct _NSRange)arg2;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned int)arg2;

@end

