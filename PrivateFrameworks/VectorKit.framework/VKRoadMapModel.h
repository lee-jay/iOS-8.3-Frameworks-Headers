//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKVectorMapModel.h>

#import "VKStyleManagerObserver.h"

@class NSString, VKStyleManager;

@interface VKRoadMapModel : VKVectorMapModel <VKStyleManagerObserver>
{
    struct unique_ptr<vk::RoadManager, std::__1::default_delete<vk::RoadManager>> _roadManager;
    struct unique_ptr<vk::PatternedManager, std::__1::default_delete<vk::PatternedManager>> _patternedRibbonManager;
    unsigned long long _mapLayerPosition;
}

- (unsigned char)commandBufferId;
@property(nonatomic) unsigned long long mapLayerPosition; // @synthesize mapLayerPosition=_mapLayerPosition;
- (void)stylesheetDidChange;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (id).cxx_construct;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) VKStyleManager *styleManager;
@property(readonly) Class superclass;

@end

