//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface HAPMetadataConstraints : NSObject
{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
    NSNumber *_minLength;
    NSNumber *_maxLength;
}

@property(retain, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) NSNumber *minLength; // @synthesize minLength=_minLength;
- (BOOL)isEqualToMetadataConstraints:(id)arg1;
@property(retain, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
- (id)description;

@end
