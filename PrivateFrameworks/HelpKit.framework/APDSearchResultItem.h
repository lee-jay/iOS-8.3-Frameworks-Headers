//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HelpKit/APDGenericData.h>

#import "NSCopying.h"

@class NSString;

@interface APDSearchResultItem : APDGenericData <NSCopying>
{
    int _weight;
    int _matchCount;
    NSString *_identifier;
}

@property(nonatomic) int matchCount; // @synthesize matchCount=_matchCount;
@property(nonatomic) int weight; // @synthesize weight=_weight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)description;

@end

