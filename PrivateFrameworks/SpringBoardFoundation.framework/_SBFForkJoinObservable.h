//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFObservable.h>

@class NSArray, NSMutableArray;

@interface _SBFForkJoinObservable : SBFObservable
{
    NSArray *_observables;
    NSMutableArray *_results;
    unsigned int _uncompletedObservableCount;
}

- (id)initWithWithObservables:(id)arg1;
- (void)_observableFinishedForObserver:(id)arg1;
- (void)_setResult:(id)arg1 atIndex:(unsigned int)arg2;
- (id)subscribe:(id)arg1;
- (void)dealloc;

@end

