//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface NFMDataLogger : NSObject
{
    BOOL _recordingTelemetry;
    NSOperationQueue *_activityQueue;
    NSOperationQueue *_accelerationQueue;
}

+ (id)sharedLogger;
@property(retain, nonatomic) NSOperationQueue *accelerationQueue; // @synthesize accelerationQueue=_accelerationQueue;
@property(retain, nonatomic) NSOperationQueue *activityQueue; // @synthesize activityQueue=_activityQueue;
@property(nonatomic) BOOL recordingTelemetry; // @synthesize recordingTelemetry=_recordingTelemetry;
- (void)recordLeashBroke;
- (void)recordLeashed;
- (void)recordUserResponse:(int)arg1;
- (void)recordRequestedUserResponse;
- (void)recordRSSIStrength:(float)arg1;
- (void)endRecordingTelemetry;
- (void)beginRecordingTelemetry;
- (void).cxx_destruct;

@end

