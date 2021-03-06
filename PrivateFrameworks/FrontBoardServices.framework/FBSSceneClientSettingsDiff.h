//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"

@class BSMutableSettings, NSString;

@interface FBSSceneClientSettingsDiff : NSObject <BSXPCCoding>
{
    BSMutableSettings *_changes;
}

+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;
- (void)inspectOtherChangesWithBlock:(CDUnknownBlockType)arg1;
- (id)_initWithChanges:(id)arg1;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;
- (void)inspectChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

