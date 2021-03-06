//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ML3ArtworkConfiguration : NSObject
{
    NSMutableDictionary *_artworkConfigurationDictionary;
    NSMutableDictionary *_supportedSizesCache;
    float _mainScreenScale;
}

+ (id)systemConfiguration;
@property(nonatomic) float mainScreenScale; // @synthesize mainScreenScale=_mainScreenScale;
@property(retain, nonatomic) NSMutableDictionary *supportedSizesCache; // @synthesize supportedSizesCache=_supportedSizesCache;
@property(retain, nonatomic) NSMutableDictionary *artworkConfigurationDictionary; // @synthesize artworkConfigurationDictionary=_artworkConfigurationDictionary;
- (id)supportedSizesForMediaType:(unsigned long)arg1 artworkType:(int)arg2;
- (id)_supportedSizeKeysForMediaType:(unsigned long)arg1 artworkType:(int)arg2;
- (id)initWithConfigurationDictionaries:(id)arg1;
- (id)sizesToAutogenerateForMediaType:(unsigned long)arg1 artworkType:(int)arg2;
- (void).cxx_destruct;
- (id)description;

@end

