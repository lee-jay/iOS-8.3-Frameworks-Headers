//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStoryboardSegueTemplate.h>

@class NSString;

@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate
{
    NSString *_action;
}

- (id)_unwindExecutorForTarget:(id)arg1;
- (id)_unwindTargetForSelector:(SEL)arg1 withSender:(id)arg2;
- (void)_perform:(id)arg1;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

