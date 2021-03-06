//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NSUndoManager : NSObject
{
    id _undoStack;
    id _redoStack;
    NSArray *_runLoopModes;
    unsigned long long _NSUndoManagerPrivate1;
    id _target;
    id _proxy;
    void *_NSUndoManagerPrivate2;
    void *_NSUndoManagerPrivate3;
}

+ (void)_endTopLevelGroupings;
+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)arg1;
- (void)finalize;
- (id)prepareWithInvocationTarget:(id)arg1;
@property(readonly, getter=isUndoing) BOOL undoing;
- (void)setActionName:(id)arg1;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (BOOL)_shouldCoalesceTypingForText:(id)arg1:(id)arg2;
@property(readonly) int groupingLevel;
- (void)_processEndOfEventNotification:(id)arg1;
- (void)endUndoGrouping;
- (void)beginUndoGrouping;
@property BOOL groupsByEvent;
- (void)disableUndoRegistration;
- (void)removeAllActions;
@property(readonly, getter=isUndoRegistrationEnabled) BOOL undoRegistrationEnabled;
- (void)redo;
- (void)undo;
@property(readonly, copy) NSString *undoMenuItemTitle;
@property(readonly, copy) NSString *redoMenuItemTitle;
@property(readonly) BOOL canRedo;
@property(readonly) BOOL canUndo;
- (id)init;
- (void)dealloc;
@property(readonly) BOOL redoActionIsDiscardable;
@property(readonly) BOOL undoActionIsDiscardable;
- (void)setActionIsDiscardable:(BOOL)arg1;
@property(copy) NSArray *runLoopModes;
@property unsigned int levelsOfUndo;
- (id)redoMenuTitleForUndoActionName:(id)arg1;
@property(readonly, copy) NSString *redoActionName;
- (id)undoMenuTitleForUndoActionName:(id)arg1;
@property(readonly, copy) NSString *undoActionName;
- (void)_setGroupIdentifier:(id)arg1;
- (void)_registerUndoObject:(id)arg1;
- (void)_cancelAutomaticTopLevelGroupEnding;
- (void)_postCheckpointNotification;
- (void)_prepareEventGrouping;
- (void)_scheduleAutomaticTopLevelGroupEnding;
- (void)_delayAutomaticTermination:(double)arg1;
- (void)_rollbackUndoGrouping;
- (void)_commitUndoGrouping;
- (void)undoNestedGroup;
- (BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)arg1;
- (id)_undoStack;
- (void)_forwardTargetInvocation:(id)arg1;
- (id)_methodSignatureForTargetSelector:(SEL)arg1;
- (void)removeAllActionsWithTarget:(id)arg1;
- (void)enableUndoRegistration;
@property(readonly, getter=isRedoing) BOOL redoing;

@end

