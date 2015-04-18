//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CTCellularPlanExtProperties, CTCellularPlanProfile, CTCellularPlanSubscription, NSArray, NSData, NSString;

@interface CTCellularPlan : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_phoneNumber;
    CTCellularPlanProfile *_profile;
    CTCellularPlanSubscription *_subscription;
    CTCellularPlanExtProperties *_extendedProperties;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) CTCellularPlanProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) CTCellularPlanSubscription *subscription; // @synthesize subscription=_subscription;
- (id)initWithProfile:(id)arg1 subscription:(id)arg2;
@property(retain, nonatomic) CTCellularPlanExtProperties *extendedProperties; // @synthesize extendedProperties=_extendedProperties;
@property(readonly, nonatomic) NSArray *dataUsage;
@property(readonly, nonatomic) NSString *accountURL;
@property(readonly, nonatomic) int accountStatus;
@property(readonly, nonatomic) NSString *planDescription;
@property(readonly, nonatomic) int planType;
@property(readonly, nonatomic) double billingEndDate;
@property(readonly, nonatomic) double billingStartDate;
@property(readonly, nonatomic) BOOL autoRenew;
@property(readonly, nonatomic) NSString *iccid;
@property(readonly, nonatomic) int planStatus;
@property(readonly, nonatomic) NSData *profileId;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) BOOL isSelected;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double timestamp;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSString *carrierName;

@end
