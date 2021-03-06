//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSData, WebArchivePrivate, WebResource;

@interface WebArchive : NSObject <NSCoding, NSCopying>
{
    WebArchivePrivate *_private;
}

@property(readonly, copy, nonatomic) NSArray *subresources;
@property(readonly, nonatomic) WebResource *mainResource;
- (struct LegacyWebArchive *)_coreLegacyWebArchive;
- (id)_initWithCoreLegacyWebArchive:(PassRefPtr_d33dc2c2)arg1;
@property(readonly, copy, nonatomic) NSArray *subframeArchives;
- (id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3;
- (id)initWithData:(id)arg1;
@property(readonly, copy, nonatomic) NSData *data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

