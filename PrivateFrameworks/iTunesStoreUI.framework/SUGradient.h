//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSLock, NSMutableArray;

@interface SUGradient : NSObject <NSCoding, NSCopying>
{
    NSMutableArray *_colorStops;
    NSLock *_lock;
    struct SUGradientPoint _p0;
    struct SUGradientPoint _p1;
    BOOL _sorted;
    int _type;
}

+ (id)gradientWithColor:(id)arg1;
@property(readonly) NSArray *colorStopOffsets;
@property(readonly) struct SUGradientPoint p0;
- (struct CGGradient *)copyCGGradient;
@property(readonly) int gradientType;
- (id)newPatternColorWithSize:(struct CGSize)arg1 opaque:(BOOL)arg2;
- (id)initWithPoint0:(struct SUGradientPoint)arg1 point1:(struct SUGradientPoint)arg2 type:(int)arg3;
- (struct CGShading *)copyShading;
- (void)addColorStopWithOffset:(float)arg1 color:(struct CGColor *)arg2;
@property(readonly) NSArray *colorStopColors;
@property(readonly) int numberOfColorStops;
@property(readonly) struct SUGradientPoint p1;
- (id)initWithType:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;

@end
