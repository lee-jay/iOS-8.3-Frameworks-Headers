//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, SKUIColorScheme, UIImage, UIImageView, UILabel;

@interface SKUIProductPageFeatureView : UIView
{
    UIImageView *_iconView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    SKUIColorScheme *_colorScheme;
}

@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) UIImage *icon;
@property(copy, nonatomic) NSString *title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;

@end
