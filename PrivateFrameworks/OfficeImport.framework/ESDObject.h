//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ESDContainer;

@interface ESDObject : NSObject
{
    struct EshObject *mEshObject;
    ESDContainer *mParent;
    _Bool mIsChart;
}

- (id)parent;
- (id)pbInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (id)ebInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (void)writeToWriter:(struct OcWriter *)arg1;
- (id)initWithEshObject:(struct EshObject *)arg1;
- (int)shapeID;
- (void)setChart:(_Bool)arg1;
- (id)initFromReader:(struct OcReader *)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;
- (struct EshShape *)eshShape;
- (_Bool)isChart;
- (struct EshGroup *)eshGroup;
- (struct EshObject *)eshObject;
- (id)initWithType:(unsigned short)arg1;
- (void)dealloc;

@end

