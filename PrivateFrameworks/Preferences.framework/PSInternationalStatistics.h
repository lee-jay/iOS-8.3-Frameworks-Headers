//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSInternationalStatistics : NSObject
{
}

+ (void)logInternationalStatistics;
+ (void)decrementScalarForKey:(id)arg1;
+ (void)substractScalarValue:(int)arg1 forKey:(id)arg2;
+ (void)addScalarValue:(int)arg1 forKey:(id)arg2;
+ (id)keyForLocaleLanguageMatching;
+ (id)keyForDeviceLanguage:(id)arg1;
+ (id)keyForCalendar:(id)arg1;
+ (id)keyForTopLanguage:(id)arg1 AndLocale:(id)arg2;
+ (id)keyForLanguageCount;
+ (void)setBoolean:(BOOL)arg1 forKey:(id)arg2;
+ (id)keyForLanguageUsed:(id)arg1;
+ (void)setScalarValue:(int)arg1 forKey:(id)arg2;
+ (void)incrementScalarForKey:(id)arg1;
+ (id)keyForReplaceLanguageViaOtherLanguageSelection;
+ (id)keyForReplaceLanguageViaDeviceLanguageSelection;
+ (void)clearScalar:(id)arg1;

@end
