//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DAWaiterWrapper : NSObject
{
    id <DADataclassLockWatcher> _waiter;
    int _dataclasses;
    CDUnknownBlockType _completionHandler;
    int _waiterNum;
}

@property(nonatomic) int dataclasses; // @synthesize dataclasses=_dataclasses;
@property(readonly, nonatomic) int waiterNum; // @synthesize waiterNum=_waiterNum;
@property(retain, nonatomic) id <DADataclassLockWatcher> waiter; // @synthesize waiter=_waiter;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

