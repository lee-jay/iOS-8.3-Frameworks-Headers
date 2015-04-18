//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIViewServiceViewControllerOperatorDelegate.h"

@class NSLock, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, _UIAsyncInvocation;

@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    _UIAsyncInvocation *_invalidationInvocation;
    NSMutableDictionary *_connectionHandlers;
    NSLock *_connectionHandlersLock;
    NSMutableSet *_deputies;
    CDUnknownBlockType _terminationHandler;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    id _delegate;
}

+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1;
- (oneway void)release;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(CDUnknownBlockType)arg2;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(byref id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)checkDeputyForRotation:(id)arg1;
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (Class)_deputyClassForConnectionSelector:(SEL)arg1;
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (int)__automatic_invalidation_logic;
- (void)forwardInvocation:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)invalidate;
@property id delegate; // @synthesize delegate=_delegate;
- (unsigned int)retainCount;
- (id)init;
- (void)dealloc;
- (id)retain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
