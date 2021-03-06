//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>
{
}

+ (id)options;
+ (BOOL)supportsSecureCoding;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)formattedText;
- (id)dictionaryRepresentation;
- (id)initWithData:(id)arg1;
@property(readonly, nonatomic) NSData *data;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

