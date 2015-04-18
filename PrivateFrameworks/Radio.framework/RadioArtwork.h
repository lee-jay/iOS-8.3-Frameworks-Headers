//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSURL;

@interface RadioArtwork : NSObject <NSCopying>
{
    NSURL *_URL;
    struct CGSize _pixelSize;
}

- (id)initWithArtworkDictionary:(id)arg1;
- (id)initWithArtworkURL:(id)arg1 pixelSize:(struct CGSize)arg2;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) struct CGSize pointSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
