//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class IKViewElementStyle, NSSet, SKUIIndexBarEntryListViewElement;

@interface SKUIIndexBarLocaleStandardEntryListController : SKUIIndexBarEntryListController
{
    SKUIIndexBarEntryListViewElement *_entryListViewElement;
    NSSet *_requiredVisibilitySet;
    IKViewElementStyle *_style;
}

- (id)initWithSKUIIndexBarEntryListViewElement:(id)arg1;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(int)arg1 returningRelativeSectionIndex:(out int *)arg2;
- (int)numberOfEntryDescriptors;
- (id)entryDescriptorAtIndex:(int)arg1;
- (void)reloadViewElementData;
- (void).cxx_destruct;

@end

