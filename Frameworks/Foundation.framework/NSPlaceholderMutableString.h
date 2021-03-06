//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSMutableString.h>

@interface NSPlaceholderMutableString : NSMutableString
{
}

- (oneway void)release;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 encoding:(unsigned int)arg3 freeWhenDone:(BOOL)arg4;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned int)arg2;
- (id)initWithUTF8String:(const char *)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)initWithString:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)initWithCapacity:(unsigned int)arg1;
- (unsigned int)length;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2 encoding:(unsigned int)arg3;
- (unsigned int)retainCount;
- (id)autorelease;
- (id)init;
- (void)dealloc;
- (id)retain;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(void *)arg3;

@end

