//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInvocation.h"

@interface NSInvocation (GKProxyHelpers)
- (void)_gkClearArgumentAtIndex:(unsigned int)arg1;
- (void)__gkPrepareForFakeCallbackWithNoData:(BOOL)arg1 orError:(id)arg2;
- (void)_gkPrintBlockSignature;
- (void)_gkClearTarget;
- (void)_gkPrepareForCallWithError:(id)arg1;
- (void)_gkInvokeOnce;
- (void)_gkClearCopiedArguments;
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;
- (id)_gkReplyHandlerInvocation;
- (void)_gkCopyArguments;
- (void)_gkInvokeOnceWithTarget:(id)arg1;
@end
