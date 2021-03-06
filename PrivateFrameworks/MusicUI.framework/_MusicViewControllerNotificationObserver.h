//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _MusicViewControllerNotificationObserver : NSObject
{
    NSString *_notificationName;
    id _object;
    SEL _selector;
    id _target;
}

@property(readonly, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void)_didReceiveNotification:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 notificationName:(id)arg3 object:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void)dealloc;

@end

