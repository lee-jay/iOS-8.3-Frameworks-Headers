//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface _NMSDispatchQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_q;
    int _r;
}

- (id)initWithName:(id)arg1 attributes:(id)arg2;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)setTarget:(id)arg1;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic, getter=isSuspended) BOOL suspended;
- (void)sync:(CDUnknownBlockType)arg1;
- (void)async:(CDUnknownBlockType)arg1;

@end
