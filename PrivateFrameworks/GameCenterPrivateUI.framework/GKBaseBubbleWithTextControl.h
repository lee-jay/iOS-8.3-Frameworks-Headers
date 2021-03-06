//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKBubbleControl.h>

@class NSArray;

@interface GKBaseBubbleWithTextControl : GKBubbleControl
{
    float _referenceZPosition;
    NSArray *_labels;
    id _updateRasterizationScaleToken;
}

@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) id updateRasterizationScaleToken; // @synthesize updateRasterizationScaleToken=_updateRasterizationScaleToken;
- (id)_scaledTextStyle:(id)arg1;
- (BOOL)isFlipped;
- (void)updateTextFieldsFor3DScaling;
- (void)updateLabelRasterizationScaleForLabels;
@property(nonatomic) float referenceZPosition; // @synthesize referenceZPosition=_referenceZPosition;
- (void)didMoveToSuperview;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

