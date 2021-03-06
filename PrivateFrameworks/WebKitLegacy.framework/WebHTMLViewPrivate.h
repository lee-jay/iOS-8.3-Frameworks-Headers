//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSTimer, WAKView, WebDataSource, WebEvent, WebPluginController;

@interface WebHTMLViewPrivate : NSObject
{
    BOOL closed;
    BOOL ignoringMouseDraggedEvents;
    BOOL printing;
    BOOL paginateScreenContent;
    WAKView *layerHostingView;
    BOOL drawingIntoLayer;
    WebEvent *mouseDownEvent;
    BOOL handlingMouseDownEvent;
    WebEvent *keyDownEvent;
    BOOL exposeInputContext;
    struct CGPoint lastScrollPosition;
    BOOL inScrollPositionChanged;
    WebPluginController *pluginController;
    NSString *toolTip;
    id trackingRectOwner;
    void *trackingRectUserData;
    NSTimer *autoscrollTimer;
    WebEvent *autoscrollTriggerEvent;
    NSArray *pageRects;
    BOOL transparentBackground;
    struct WebHTMLViewInterpretKeyEventsParameters *interpretKeyEventsParameters;
    WebDataSource *dataSource;
    SEL selectorForDoCommandBySelector;
}

+ (void)initialize;
- (void)finalize;
- (void)clear;
- (id).cxx_construct;
- (void)dealloc;

@end

