//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding>
{
    struct _NSRange _range;
    float _offsetInLine;
}

+ (id)restorableScrollPositionWithDictionary:(id)arg1;
+ (id)restorableScrollPositionWithRange:(struct _NSRange)arg1;
+ (id)restorableScrollPositionForTextView:(id)arg1;
- (float)offsetWithinLine;
- (id)initWithTextView:(id)arg1;
- (id)dictionaryRepresentation;
- (struct _NSRange)range;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
