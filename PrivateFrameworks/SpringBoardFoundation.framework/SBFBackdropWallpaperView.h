//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class CABackdropLayer, SBFBackdropStatisticsProvider;

@interface SBFBackdropWallpaperView : SBFWallpaperView
{
    SBFBackdropStatisticsProvider *_statisticsProvider;
    CABackdropLayer *_layer;
}

+ (BOOL)_allowsParallax;
- (id)_computeAverageColor;
@property(nonatomic) BOOL colorSamplingEnabled;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

