//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSProtocolChecker.h>

@class NSObject, Protocol;

@interface NSConcreteProtocolChecker : NSProtocolChecker
{
    NSObject *_target;
    Protocol *_protocol;
}

- (id)protocol;
- (id)target;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;

@end
