//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUIShelfViewElement : SKUIViewElement
{
    int _numberOfRows;
    NSString *_slideshowTitle;
}

@property(readonly, nonatomic) NSString *slideshowTitle; // @synthesize slideshowTitle=_slideshowTitle;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (int)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) int numberOfRows; // @synthesize numberOfRows=_numberOfRows;

@end

