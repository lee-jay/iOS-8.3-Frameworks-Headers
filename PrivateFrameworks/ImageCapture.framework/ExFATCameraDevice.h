//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ImageCapture/ICCameraDevice.h>

@interface ExFATCameraDevice : ICCameraDevice
{
    void *_exFATCameraProperties;
}

- (void)finalize;
- (unsigned int)itemsInFolder:(id)arg1;
- (BOOL)eject;
- (void)enumerateContent;
- (id)initWithVolumePath:(id)arg1 mediaPaths:(id)arg2;
- (void)dealloc;

@end
