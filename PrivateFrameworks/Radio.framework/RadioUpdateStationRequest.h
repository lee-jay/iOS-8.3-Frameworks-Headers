//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioSyncRequest.h>

@class NSArray, NSString, RadioStation;

@interface RadioUpdateStationRequest : RadioSyncRequest
{
    RadioStation *_station;
    NSString *_name;
    NSString *_stationDescription;
    NSArray *_seeds;
    int _songMixType;
}

@property(nonatomic) int songMixType; // @synthesize songMixType=_songMixType;
- (id)_updatedStationDictionary;
- (id)changeList;
@property(copy, nonatomic) NSString *stationDescription; // @synthesize stationDescription=_stationDescription;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)init;
- (id)initWithStation:(id)arg1;
@property(copy, nonatomic) NSArray *seeds; // @synthesize seeds=_seeds;

@end
