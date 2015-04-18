//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPUFoundation/MPUUserActivityContext.h>

@class NSArray, NSMutableArray;

@interface MPUMutableUserActivityContext : MPUUserActivityContext
{
    NSMutableArray *_containerItems;
}

- (void)removeContainerItem:(id)arg1;
- (void)insertContainerItem:(id)arg1 afterContainerItem:(id)arg2;
- (void)addContainerItem:(id)arg1;
@property(copy, nonatomic) NSArray *containerItems;
@property(nonatomic) int originatorVersion;
@property(nonatomic) int originatorType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
