//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject
{
}

+ (unsigned int)nativeMediaTypesForScriptMediaTypes:(id)arg1;
+ (id)copyScriptMediaTypesForNativeMediaTypes:(unsigned int)arg1;
+ (id)scriptMediaTypeForNativeMediaType:(unsigned int)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(readonly, nonatomic) MPMediaItem *nativeItem;
- (id)imageURLWithWidth:(id)arg1 height:(id)arg2;
- (id)_className;
- (id)valueForProperty:(id)arg1;

@end
