//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSVURLDataConsumer.h"

@class NSSet;

@interface SKUILoadMoreDataConsumer : SSVURLDataConsumer
{
    NSSet *_unavailableItemIdentifiers;
}

- (id)_itemsWithDictionary:(id)arg1;
@property(copy, nonatomic) NSSet *unavailableItemIdentifiers; // @synthesize unavailableItemIdentifiers=_unavailableItemIdentifiers;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;

@end
