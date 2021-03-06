//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface QLPreviewItemAVState : NSObject <NSSecureCoding>
{
    BOOL playing;
    double position;
    double duration;
}

+ (BOOL)supportsSecureCoding;
+ (id)avStateWithPosition:(double)arg1 duration:(double)arg2 playing:(BOOL)arg3;
@property(getter=isPlaying) BOOL playing; // @synthesize playing;
@property double position; // @synthesize position;
@property double duration; // @synthesize duration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

