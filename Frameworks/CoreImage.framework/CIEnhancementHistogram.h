//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CIEnhancementHistogram : NSObject
{
    float hist[256];
}

+ (id)histogramFromDoubleData:(const double *)arg1;
+ (id)histogramFromFloatData:(const float *)arg1;
+ (id)histogramFromData:(const float *)arg1;
- (const float *)values;

@end

