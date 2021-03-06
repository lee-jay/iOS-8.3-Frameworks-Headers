//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNTransaction : NSObject
{
}

+ (void)setAnimationTimingFunction:(id)arg1;
+ (void)begin;
+ (double)animationDuration;
+ (void)commit;
+ (void)setDisableActions:(BOOL)arg1;
+ (BOOL)disableActions;
+ (unsigned int)currentState;
+ (void)unlock;
+ (void)lock;
+ (void)setAnimationDuration:(double)arg1;
+ (void)flush;
+ (void)setCompletionBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)completionBlock;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (id)valueForKey:(id)arg1;
+ (id)animationTimingFunction;
+ (void)postCommandWithContext:(void *)arg1 object:(id)arg2 applyBlock:(CDUnknownBlockType)arg3;
+ (void)postCommandWithContext:(void *)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(CDUnknownBlockType)arg4;
+ (id)SCNJSExportProtocol;
+ (void)setImmediateMode:(BOOL)arg1;
+ (BOOL)immediateMode;
- (void)setAnimationTimingFunction:(id)arg1;
- (void)begin;
- (double)animationDuration;
- (void)commit;
- (void)setDisableActions:(BOOL)arg1;
- (BOOL)disableActions;
- (void)unlock;
- (void)lock;
- (void)setAnimationDuration:(double)arg1;
- (void)flush;
- (id)animationTimingFunction;

@end

