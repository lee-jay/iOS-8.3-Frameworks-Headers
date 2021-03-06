//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBKAlertDialog : NSObject
{
    NSString *_title;
    NSString *_message;
    NSString *_cancelButtonTitle;
    CDUnknownBlockType _completionHandler;
    NSString *_acceptButtonTitle;
}

@property(copy) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 acceptButtonTitle:(id)arg4;
@property(copy) NSString *acceptButtonTitle; // @synthesize acceptButtonTitle=_acceptButtonTitle;
- (void)_runAsCFUserNotificationDisplayAlert;
- (BOOL)_runAsUIAlertView;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
@property(copy) NSString *message; // @synthesize message=_message;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(copy) NSString *title; // @synthesize title=_title;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

