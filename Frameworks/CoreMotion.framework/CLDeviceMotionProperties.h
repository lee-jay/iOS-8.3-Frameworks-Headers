//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CLDeviceMotionProperties : NSObject
{
    int fMode;
    _Bool fWantsPowerConservativeDeviceMotion;
}

@property(nonatomic) int mode; // @synthesize mode=fMode;
- (id)description;
@property(readonly, nonatomic) _Bool wantsPowerConservativeDeviceMotion; // @synthesize wantsPowerConservativeDeviceMotion=fWantsPowerConservativeDeviceMotion;
- (id)initWithMode:(int)arg1 andPowerConservation:(_Bool)arg2;

@end

