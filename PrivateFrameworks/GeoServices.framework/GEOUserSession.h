//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOUserSessionEntity, NSLock;

@interface GEOUserSession : NSObject
{
    CDStruct_612aec5b _sessionID;
    double _sessionCreationTime;
    unsigned int _sequenceNumber;
    CDStruct_612aec5b _usageCollectionSessionID;
    double _usageSessionIDGenerationTime;
    BOOL _shareSessionWithMaps;
    GEOUserSessionEntity *_mapsUserSessionEntity;
    NSLock *_lock;
}

+ (void)setIsGeod;
+ (id)sharedInstance;
@property BOOL shareSessionWithMaps; // @synthesize shareSessionWithMaps=_shareSessionWithMaps;
- (void)setSharedMapsUserSessionEntity:(id)arg1 shareSessionIDWithMaps:(BOOL)arg2;
@property(retain, nonatomic) GEOUserSessionEntity *mapsUserSessionEntity; // @synthesize mapsUserSessionEntity=_mapsUserSessionEntity;
@property(readonly) CDStruct_612aec5b usageCollectionSessionID;
- (void)mapsSessionEntityWithCallback:(CDUnknownBlockType)arg1 shareSessionIDWithMaps:(BOOL)arg2 resetSession:(BOOL)arg3;
- (void)_safe_renewUsageCollectionSessionID;
- (void)_mapsSessionEntityWithCallback:(CDUnknownBlockType)arg1;
- (void)_updateSessionID;
- (void)_resetSessionID;
- (void)_setDefault:(id)arg1 forKey:(id)arg2;
- (void)_updateWithNewUUIDForSessionID:(CDStruct_612aec5b *)arg1;
- (void)_renewUsageCollectionSessionID;
- (id)_defaultForKey:(id)arg1;
- (id)init;
- (void)dealloc;

@end
