//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIPrintFormatter.h>

@class NSString, UIWebDocumentView, UIWebPaginationInfo;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter
{
    UIWebDocumentView *_webDocumentView;
    UIWebPaginationInfo *_paginationInfo;
    NSString *_markupText;
}

@property(copy, nonatomic) NSString *markupText; // @synthesize markupText=_markupText;
- (id)initWithMarkupText:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(int)arg2;
- (struct CGRect)rectForPageAtIndex:(int)arg1;
- (void)removeFromPrintPageRenderer;
- (int)_recalcPageCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
