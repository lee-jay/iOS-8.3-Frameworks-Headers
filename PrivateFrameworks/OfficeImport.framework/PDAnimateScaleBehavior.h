//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/PDAnimateBehavior.h>

@interface PDAnimateScaleBehavior : PDAnimateBehavior
{
    struct CGPoint mTo;
    struct CGPoint mFrom;
    struct CGPoint mBy;
}

- (void)setBy:(struct CGPoint)arg1;
- (struct CGPoint)by;
- (struct CGPoint)to;
- (void)setTo:(struct CGPoint)arg1;
- (struct CGPoint)from;
- (void)setFrom:(struct CGPoint)arg1;
- (id).cxx_construct;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end
