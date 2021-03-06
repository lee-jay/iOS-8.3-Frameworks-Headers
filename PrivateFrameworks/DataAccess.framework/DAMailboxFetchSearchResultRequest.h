//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject
{
    NSString *_longID;
    int _bodyFormat;
    int _maxSize;
}

@property(copy, nonatomic) NSString *longID; // @synthesize longID=_longID;
- (id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3;
@property(nonatomic) int bodyFormat; // @synthesize bodyFormat=_bodyFormat;
- (void).cxx_destruct;
@property(nonatomic) int maxSize; // @synthesize maxSize=_maxSize;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

