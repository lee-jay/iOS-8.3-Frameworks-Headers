//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMOdometerProxy;

@interface CMOdometer : NSObject
{
    id <CMOdometerDelegate> _delegate;
    CMOdometerProxy *_odometerProxy;
}

+ (BOOL)isOdometerAvailableForActivity:(int)arg1;
@property(nonatomic) id <CMOdometerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
- (void)stopOdometerUpdates;
- (void)startOdometerUpdatesForActivity:(int)arg1 withHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) CMOdometerProxy *odometerProxy; // @synthesize odometerProxy=_odometerProxy;

@end

