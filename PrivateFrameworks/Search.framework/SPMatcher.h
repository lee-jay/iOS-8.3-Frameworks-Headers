//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPMatcher : NSObject
{
    void *_matcher;
}

+ (id)transcriptionForString:(id)arg1 withLanguage:(id)arg2;
- (unsigned int)wordCount;
- (BOOL)matches:(id)arg1;
- (BOOL)matchesUTF8String:(const char *)arg1 outMatchBits:(unsigned long long *)arg2;
- (BOOL)matches:(id)arg1 outMatchBits:(unsigned long long *)arg2;
- (BOOL)matchesUTF8String:(const char *)arg1;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(unsigned int)arg3;
- (void)dealloc;

@end
