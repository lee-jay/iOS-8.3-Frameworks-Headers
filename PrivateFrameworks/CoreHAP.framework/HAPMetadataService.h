//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface HAPMetadataService : NSObject
{
    BOOL _allowAssociatedService;
    NSString *_name;
    NSString *_svcDescription;
    NSString *_localizationKey;
    NSString *_uuidStr;
    NSString *_btleuuidStr;
    NSArray *_mandatoryCharacteristics;
    NSArray *_optionalCharacteristics;
}

@property(nonatomic) BOOL allowAssociatedService; // @synthesize allowAssociatedService=_allowAssociatedService;
@property(retain, nonatomic) NSArray *optionalCharacteristics; // @synthesize optionalCharacteristics=_optionalCharacteristics;
@property(retain, nonatomic) NSArray *mandatoryCharacteristics; // @synthesize mandatoryCharacteristics=_mandatoryCharacteristics;
@property(retain, nonatomic) NSString *btleuuidStr; // @synthesize btleuuidStr=_btleuuidStr;
@property(retain, nonatomic) NSString *svcDescription; // @synthesize svcDescription=_svcDescription;
- (id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 localizationKey:(id)arg4 mandatoryCharacteristics:(id)arg5;
@property(retain, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;
- (id)generateDictionary:(id)arg1;
@property(retain, nonatomic) NSString *localizationKey; // @synthesize localizationKey=_localizationKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)dump;

@end
