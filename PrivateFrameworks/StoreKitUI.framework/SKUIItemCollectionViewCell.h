//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

#import "SKUICellLayoutParentView.h"

@class NSString, SKUIItemCellLayout;

@interface SKUIItemCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView>
{
    BOOL _layoutNeedsLayout;
}

- (void)setCellLayoutNeedsLayout;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
@property(readonly, nonatomic) SKUIItemCellLayout *layout;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

