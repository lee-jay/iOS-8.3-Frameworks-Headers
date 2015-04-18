//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface TCMessageEntry : NSObject
{
    unsigned int m_timeStamp;
    int m_tag;
    NSString *m_text;
    NSArray *m_parameters;
    NSMutableArray *m_affectedObjects;
    int m_count;
}

+ (void)initialize;
- (void)logWithCat:(id)arg1;
- (id)getParameter:(unsigned int)arg1;
- (unsigned int)getParameterCount;
- (id)affectedObjects;
- (int)getCount;
- (int)getMessageTag;
- (int)timeStampCompare:(id)arg1;
- (void)addAffectedObject:(id)arg1;
- (id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(void *)arg4;
- (void)mergeEntries:(id)arg1;
- (id)getMessageText;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=m_timeStamp;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
