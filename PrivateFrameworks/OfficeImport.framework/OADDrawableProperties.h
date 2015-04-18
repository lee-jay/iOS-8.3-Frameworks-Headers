//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADProperties.h>

@class NSString, OADHyperlink, OADOrientedBounds;

@interface OADDrawableProperties : OADProperties
{
    OADOrientedBounds *mOrientedBounds;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    NSString *mTitle;
    NSString *mDescription;
    unsigned int mHasAspectRatioLocked:1;
    unsigned int mAspectRatioLocked:1;
    unsigned int mHasWrdInline:1;
    unsigned int mWrdInline:1;
}

- (BOOL)hasOrientedBounds;
- (id)initWithDefaults;
- (void)removeUnnecessaryOverrides;
- (BOOL)hasAltDescription;
- (id)altDescription;
- (BOOL)hasAltTitle;
- (id)altTitle;
- (BOOL)isWrdInline;
- (BOOL)hasWrdInline;
- (BOOL)hasHoverHyperlink;
- (BOOL)hasClickHyperlink;
- (BOOL)isAspectRatioLocked;
- (BOOL)hasAspectRatioLocked;
- (void)setAltTitle:(id)arg1;
- (void)setWrdInline:(BOOL)arg1;
- (void)setAspectRatioLocked:(BOOL)arg1;
- (void)setHoverHyperlink:(id)arg1;
- (void)setClickHyperlink:(id)arg1;
- (id)hoverHyperlink;
- (void)setAltDescription:(id)arg1;
- (void)setOrientedBounds:(id)arg1;
- (id)orientedBounds;
- (id)clickHyperlink;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
