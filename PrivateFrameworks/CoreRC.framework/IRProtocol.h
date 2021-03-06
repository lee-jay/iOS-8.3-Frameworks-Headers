//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IRProtocol : NSObject
{
    unsigned char _protocolID;
    unsigned char _options;
    double _repeatInterval;
    double _carrierFrequency;
}

+ (id)protocolWithID:(unsigned char)arg1 options:(unsigned char)arg2;
@property(readonly, nonatomic) double carrierFrequency; // @synthesize carrierFrequency=_carrierFrequency;
@property(readonly, nonatomic) unsigned char protocolID; // @synthesize protocolID=_protocolID;
- (id)initWithProtocolID:(unsigned char)arg1 options:(unsigned char)arg2;
@property(readonly, nonatomic) unsigned char options; // @synthesize options=_options;
@property(readonly, nonatomic) double repeatInterval; // @synthesize repeatInterval=_repeatInterval;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end

