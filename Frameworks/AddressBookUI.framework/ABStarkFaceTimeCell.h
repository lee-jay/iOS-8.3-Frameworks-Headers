//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABContactCell.h>

@class ABTransportButton, NSDictionary, UILabel;

@interface ABStarkFaceTimeCell : ABContactCell
{
    id <ABPropertyCellDelegate> _delegate;
    NSDictionary *_labelTextAttributes;
    UILabel *_faceTimeLabel;
    ABTransportButton *_transportIcon;
}

+ (BOOL)requiresConstraintBasedLayout;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)tintColorDidChange;
@property(nonatomic) id <ABPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
@property(retain, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
- (void)transportButtonClicked:(id)arg1;
@property(copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
- (id)constantConstraints;
@property(readonly, nonatomic) ABTransportButton *transportIcon; // @synthesize transportIcon=_transportIcon;
- (void)performDefaultAction;

@end

