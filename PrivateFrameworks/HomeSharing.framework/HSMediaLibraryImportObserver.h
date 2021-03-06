//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface HSMediaLibraryImportObserver : NSObject
{
    NSTimer *_updateTimer;
    unsigned int _consecutiveUpdateFailures;
    BOOL _stopped;
    BOOL _updating;
    id <HSMediaLibraryImportObserverDelegate> _delegate;
    double _updateInterval;
}

- (void)beginUpdating;
- (void)_updateImportStatus:(id)arg1;
- (void)stopUpdating;
- (void).cxx_destruct;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic) id <HSMediaLibraryImportObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic, getter=isUpdating) BOOL updating; // @synthesize updating=_updating;

@end

