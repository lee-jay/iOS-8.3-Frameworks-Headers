//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OAVDrawable : NSObject
{
}

+ (struct CGRect)readCoordBounds:(struct _xmlNode *)arg1;
+ (id)readDrawablesFromParent:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;
+ (void)readFromDrawable:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (struct _xmlDoc *)vmlDocumentFromPart:(id)arg1;
+ (id)readDrawableFromNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;

@end

