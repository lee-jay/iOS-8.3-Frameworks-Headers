//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBarsSwipeTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
    NSNumber *inputBarOffset;
    NSNumber *inputTime;
}

+ (id)customAttributes;
- (id)outputImage;
@property(retain, nonatomic) NSNumber *inputTime; // @synthesize inputTime;
- (void)setDefaults;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) NSNumber *inputBarOffset; // @synthesize inputBarOffset;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
- (id)_kernel;

@end
