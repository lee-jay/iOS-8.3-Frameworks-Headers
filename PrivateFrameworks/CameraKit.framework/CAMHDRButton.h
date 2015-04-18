//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CAMExpandableMenuButton.h>

@class CAMButtonLabel;

@interface CAMHDRButton : CAMExpandableMenuButton
{
    BOOL _allowsAutomaticHDR;
    CAMButtonLabel *__headerLabel;
}

- (int)numberOfMenuItems;
@property(readonly, nonatomic) CAMButtonLabel *_headerLabel; // @synthesize _headerLabel=__headerLabel;
@property(nonatomic) BOOL allowsAutomaticHDR; // @synthesize allowsAutomaticHDR=_allowsAutomaticHDR;
- (int)indexForMode:(int)arg1;
- (int)modeForIndex:(int)arg1;
- (void)_commonCAMHDRButtonInitialization;
- (id)hiddenIndexesWhileCollapsed;
- (id)titleForMenuItemAtIndex:(int)arg1;
- (id)initWithExpansionOrientation:(int)arg1;
- (void)updateToContentSize:(id)arg1;
- (void).cxx_destruct;
- (id)headerView;
- (void)reloadData;
@property(nonatomic) int HDRMode;

@end
