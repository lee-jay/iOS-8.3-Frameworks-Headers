//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMMessageActionChatItem : IMTranscriptChatItem
{
    IMHandle *_sender;
    IMHandle *_otherHandle;
}

@property(readonly, nonatomic) long long actionType;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;
@property(readonly, retain, nonatomic) IMHandle *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(readonly, retain, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
