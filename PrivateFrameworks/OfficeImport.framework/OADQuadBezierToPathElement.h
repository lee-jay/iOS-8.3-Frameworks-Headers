//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADPathElement.h>

@interface OADQuadBezierToPathElement : OADPathElement
{
    struct OADAdjustPoint mControlPoint;
    struct OADAdjustPoint mToPoint;
}

- (id)initWithControlPoint:(struct OADAdjustPoint)arg1 toPoint:(struct OADAdjustPoint)arg2;
- (struct OADAdjustPoint)controlPoint;
- (struct OADAdjustPoint)toPoint;
- (id).cxx_construct;

@end

