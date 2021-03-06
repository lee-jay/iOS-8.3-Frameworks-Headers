//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSUUID;

@interface MPUMarqueeView : UIView
{
    NSUUID *_currentAnimationID;
    long long _lastEnableOptions;
    BOOL _marqueeEnabled;
    float _contentGap;
    UIView *_contentView;
    id <MPUMarqueeViewDelegate> _delegate;
    struct CGSize _contentSize;
    double _marqueeDelay;
    double _marqueeScrollRate;
}

- (void)resetMarqueePosition;
- (void)setMarqueeEnabled:(BOOL)arg1 withOptions:(long long)arg2;
@property(nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled; // @synthesize marqueeEnabled=_marqueeEnabled;
@property(nonatomic) float contentGap; // @synthesize contentGap=_contentGap;
@property(nonatomic) double marqueeScrollRate; // @synthesize marqueeScrollRate=_marqueeScrollRate;
@property(nonatomic) double marqueeDelay; // @synthesize marqueeDelay=_marqueeDelay;
- (void)_tearDownMarqueeAnimation;
- (void)_createMarqueeAnimationIfNeededWithOptions:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MPUMarqueeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

