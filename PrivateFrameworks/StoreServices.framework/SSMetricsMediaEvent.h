//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSNumber, NSString;

@interface SSMetricsMediaEvent : SSMetricsBaseEvent
{
}

@property(retain, nonatomic) NSString *mediaEventType;
@property(retain, nonatomic) NSString *locationDescription;
- (void)setLocationWithEventLocations:(id)arg1;
@property(retain, nonatomic) NSNumber *itemIdentifier;
@property(retain, nonatomic) NSString *mediaURL;
- (id)init;

@end

