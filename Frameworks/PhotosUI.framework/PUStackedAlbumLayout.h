//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSArray, NSMutableDictionary, PUAlbumListTransitionContext, UICollectionViewLayoutAttributes;

@interface PUStackedAlbumLayout : UICollectionViewLayout
{
    NSMutableDictionary *_visibleLayoutAttributesByIndexPath;
    NSMutableDictionary *_derivedLayoutAttributesByIndexPath;
    NSMutableDictionary *_zIndexByIndexPath;
    BOOL _isInteractive;
    UICollectionViewLayoutAttributes *_globalHeaderAttributes;
    NSArray *_visibleStackedItemLayoutAttributes;
    UICollectionViewLayoutAttributes *_referenceItemLayoutAttributes;
    float _yAdjust;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    struct CGPoint _referenceCenter;
    struct CGSize _contentSizeAdjust;
}

- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned int)arg3;
@property(nonatomic, setter=setInteractive:) BOOL isInteractive; // @synthesize isInteractive=_isInteractive;
- (void).cxx_destruct;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
@property(copy, nonatomic) UICollectionViewLayoutAttributes *referenceItemLayoutAttributes; // @synthesize referenceItemLayoutAttributes=_referenceItemLayoutAttributes;
- (id)_newAdjustedLayoutAttributes:(id)arg1 indexPath:(id)arg2;
@property(nonatomic) struct CGSize contentSizeAdjust; // @synthesize contentSizeAdjust=_contentSizeAdjust;
@property(nonatomic) float yAdjust; // @synthesize yAdjust=_yAdjust;
@property(nonatomic) struct CGPoint referenceCenter; // @synthesize referenceCenter=_referenceCenter;
@property(copy, nonatomic) NSArray *visibleStackedItemLayoutAttributes; // @synthesize visibleStackedItemLayoutAttributes=_visibleStackedItemLayoutAttributes;
- (int)zIndexForItemAtIndexPath:(id)arg1;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *globalHeaderAttributes; // @synthesize globalHeaderAttributes=_globalHeaderAttributes;
@property(retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext; // @synthesize albumListTransitionContext=_albumListTransitionContext;

@end
