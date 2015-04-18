//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIDatePickerMode.h>

@class NSString;

@interface _UIDatePickerMode_Date : _UIDatePickerMode
{
    float _dateYearWidth;
    float _dateMonthWidth;
    float _dateDayWidth;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_dayFormat;
}

+ (unsigned int)extractableCalendarUnits;
+ (int)datePickerMode;
- (BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned int)arg3;
- (int)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(int)arg3 currentRow:(int)arg4;
- (id)_dateForYearRow:(int)arg1;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (int)numberOfRowsForCalendarUnit:(unsigned int)arg1;
- (id)localizedFormatString;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (id)dateFormatForCalendarUnit:(unsigned int)arg1;
- (void)_shouldReset:(id)arg1;
- (void)resetComponentWidths;
- (int)displayedCalendarUnits;
- (void)noteCalendarChanged;
- (void)dealloc;

@end
