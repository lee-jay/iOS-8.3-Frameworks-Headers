//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNAction.h>

@interface SCNActionScale : SCNAction
{
    struct SCNCActionScale *_mycaction;
}

+ (BOOL)supportsSecureCoding;
+ (id)scaleTo:(float)arg1 duration:(double)arg2;
+ (id)scaleBy:(float)arg1 duration:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
