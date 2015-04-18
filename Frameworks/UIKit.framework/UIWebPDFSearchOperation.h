//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSMutableArray, NSObject<UIWebPDFSearchOperationDelegate>, NSString, UIPDFDocument;

@interface UIWebPDFSearchOperation : NSOperation
{
    NSMutableArray *_results;
    unsigned int _pageIndex;
    unsigned int _numberOfResultsToSkip;
    unsigned int _totalResultsCount;
    unsigned int _currentPageResultCount;
    BOOL _complete;
    unsigned int startingPageIndex;
    UIPDFDocument *documentToSearch;
    NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate;
    float documentScale;
    NSString *searchString;
    unsigned int resultLimit;
}

@property(nonatomic) unsigned int numberOfResultsToSkip; // @synthesize numberOfResultsToSkip=_numberOfResultsToSkip;
@property NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate; // @synthesize searchDelegate;
@property(nonatomic) unsigned int startingPageIndex; // @synthesize startingPageIndex;
@property(readonly, nonatomic) unsigned int currentPageResultCount; // @synthesize currentPageResultCount=_currentPageResultCount;
- (void)_notifyDelegateOfStatus;
- (void)_search;
- (id)sanitizedAttributedStringForAttributedString:(id)arg1;
@property(retain) UIPDFDocument *documentToSearch; // @synthesize documentToSearch;
- (struct __CTFont *)_fontWithPDFFont:(struct CGPDFFont *)arg1 size:(float)arg2;
- (BOOL)_hitSearchLimit;
@property(nonatomic) unsigned int resultLimit; // @synthesize resultLimit;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString;
@property(readonly, nonatomic) unsigned int currentPageIndex; // @synthesize currentPageIndex=_pageIndex;
@property(nonatomic) float documentScale; // @synthesize documentScale;
- (void)main;
- (id)init;
- (void)dealloc;
- (void)cancel;

@end
