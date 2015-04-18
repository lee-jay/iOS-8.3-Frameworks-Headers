//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSMutableArray, NSPointerArray, NSString, UILabel;

@interface PUSearchResultsContentView : UIView
{
    NSAttributedString *_attributedTitle;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_auxSubtitleLabel;
    NSPointerArray *_images;
    NSMutableArray *_imageViews;
    UIView *_clippingView;
    NSAttributedString *_title;
    NSString *_subtitle;
    NSString *_auxSubtitle;
    unsigned int _maxImageCount;
    float _draggingOffsetX;
    float _clippingOffsetY;
    struct CGSize _imageSize;
    struct UIEdgeInsets _contentInsets;
}

+ (id)defaultAttributes;
+ (id)subtitleTextColor;
+ (id)highlightedAttributes;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (void)clearImages;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) float clippingOffsetY; // @synthesize clippingOffsetY=_clippingOffsetY;
@property(nonatomic) float draggingOffsetX; // @synthesize draggingOffsetX=_draggingOffsetX;
@property(nonatomic) unsigned int maxImageCount; // @synthesize maxImageCount=_maxImageCount;
@property(copy, nonatomic) NSString *auxSubtitle; // @synthesize auxSubtitle=_auxSubtitle;
- (void)setImage:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_updateImageContainers;
- (void)_updateSubviews;

@end
