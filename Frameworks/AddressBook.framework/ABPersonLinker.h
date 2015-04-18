//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ABPersonLinker : NSObject
{
    void *_addressBook;
    NSMutableDictionary *_peopleByFirstName;
    NSMutableDictionary *_peopleByLastName;
    NSMutableDictionary *_peopleByOrganization;
}

+ (void)startAutoLinkingNewPeopleInAddressBook:(void *)arg1 inProcess:(BOOL)arg2;
+ (BOOL)isLinkDataValidForAddressBook:(void *)arg1;
+ (BOOL)isAutoLinkingEnabled;
- (id)initWithAddressBook:(void *)arg1;
- (id)init;
- (void)dealloc;
- (void)linkNewlyAddedPerson:(void *)arg1;
- (id)suggestedPeopleToLinkWithPerson:(void *)arg1 isInitialLinking:(BOOL)arg2;
- (BOOL)linkRecentlyAddedPeopleWithLimit:(int)arg1;
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)arg1 withLimit:(int)arg2;
- (void)makeInitialLinksCountingOuterIterations:(unsigned int *)arg1;
- (void)makeLinksForAddedPeople:(id)arg1 inInitialLinking:(BOOL)arg2 countingOuterIterations:(unsigned int *)arg3;
- (id)otherPeopleInArray:(id)arg1 matchingPerson:(void *)arg2;
- (void)presortPeople:(id)arg1;
- (void)removeAllLinks;
- (void)addPerson:(void *)arg1 toDictionary:(id)arg2 withProperty:(int)arg3;
- (BOOL)shouldLinkPerson:(void *)arg1 toPeopleInDatabase:(id)arg2 andNewlyAddedPeople:(id)arg3 inInitialLinking:(BOOL)arg4;
- (id)otherPeopleInDatabaseMatchingPerson:(void *)arg1 notIncludingPeople:(id)arg2;
- (void)linkRecentlyAddedPeople;
- (void)makeInitialLinks;

@end
