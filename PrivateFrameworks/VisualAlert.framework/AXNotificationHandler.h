//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AXNotificationHandler : NSObject
{
    NSString *_notificationName;
    id _target;
    CDUnknownBlockType _dispatcher;
    unsigned int _observerIdentifier;
    BOOL _valid;
}

+ (id)_safelyGetObserverForIdentifier:(unsigned int)arg1;
+ (void)_safelyRemoveObserverForIdentifier:(unsigned int)arg1;
+ (unsigned int)_safelyRegisterObserver:(id)arg1;
- (void)_handleNotificationWithName:(id)arg1 object:(const void *)arg2 userInfo:(id)arg3;
@property(copy, nonatomic, setter=_setDispatcher:) CDUnknownBlockType _dispatcher;
- (void)_stopObserving;
- (void)_startObserving;
@property(retain, nonatomic, setter=_setNotificationName:) NSString *_notificationName; // @synthesize _notificationName;
- (id)_notificationTypeDescription;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(CDUnknownBlockType)arg3 startObserving:(BOOL)arg4;
- (void)processHandler:(SEL)arg1;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(CDUnknownBlockType)arg3;
@property(retain, nonatomic, setter=_setTarget:) id _target; // @synthesize _target;
@property(readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
- (void)invalidate;
- (id)description;
- (void)dealloc;

@end
