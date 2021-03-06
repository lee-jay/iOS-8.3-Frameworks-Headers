//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDate, NSString, NSTimeZone;

@interface SSVPlayActivityEvent : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_containerID;
    unsigned int _containerType;
    NSString *_deviceName;
    unsigned int _endReasonType;
    NSDate *_eventDate;
    NSTimeZone *_eventTimeZone;
    NSString *_externalID;
    NSString *_featureName;
    double _itemDuration;
    double _itemEndTime;
    double _itemStartTime;
    unsigned int _itemType;
    unsigned int _mediaType;
    BOOL _offline;
    long long _persistentID;
    NSString *_personalizedContainerID;
    BOOL _SBEnabled;
    unsigned int _sourceType;
    unsigned long long _storeAccountID;
    NSString *_storeID;
    NSData *_timedMetadata;
    NSData *_trackInfo;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic, getter=isSBEnabled) BOOL SBEnabled; // @synthesize SBEnabled=_SBEnabled;
@property(readonly, nonatomic, getter=isOffline) BOOL offline; // @synthesize offline=_offline;
- (Class)_mutableCopyClass;
@property(readonly, copy, nonatomic) NSData *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(readonly, copy, nonatomic) NSString *personalizedContainerID; // @synthesize personalizedContainerID=_personalizedContainerID;
@property(readonly, nonatomic) double itemStartTime; // @synthesize itemStartTime=_itemStartTime;
@property(readonly, nonatomic) double itemEndTime; // @synthesize itemEndTime=_itemEndTime;
@property(readonly, nonatomic) double itemDuration; // @synthesize itemDuration=_itemDuration;
@property(readonly, nonatomic) unsigned int endReasonType; // @synthesize endReasonType=_endReasonType;
@property(readonly, nonatomic) unsigned int containerType; // @synthesize containerType=_containerType;
@property(readonly, nonatomic) unsigned long long storeAccountID; // @synthesize storeAccountID=_storeAccountID;
@property(readonly, nonatomic) unsigned int itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
- (id)initWithDataRepresentation:(id)arg1;
@property(readonly, copy, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(readonly, nonatomic) long long persistentID;
@property(readonly, copy, nonatomic) NSDate *eventDate; // @synthesize eventDate=_eventDate;
@property(readonly, copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, copy, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSData *timedMetadata; // @synthesize timedMetadata=_timedMetadata;
@property(readonly, copy, nonatomic) NSTimeZone *eventTimeZone; // @synthesize eventTimeZone=_eventTimeZone;
@property(readonly, copy, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;

@end

