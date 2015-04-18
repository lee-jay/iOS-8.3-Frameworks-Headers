//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIMirror : CIFilter
{
    CIImage *inputImage;
    CIVector *inputPoint;
    NSNumber *inputAngle;
}

+ (id)customAttributes;
- (id)outputImage;
@property(retain, nonatomic) CIVector *inputPoint; // @synthesize inputPoint;
- (void)setDefaults;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (struct Rectangle)computeDOD:(struct vec2)arg1 tst:(struct vec3)arg2 off:(struct vec4)arg3 mtx:(struct vec4)arg4;
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
- (id)_kernel;

@end
