//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSArray, NSDate, NSString, NSURL;

@interface SAAnswerAbstractSocialPost : AceObject <SAAceSerializable>
{
}

+ (id)abstractSocialPostWithDictionary:(id)arg1 context:(id)arg2;
+ (id)abstractSocialPost;
@property(copy, nonatomic) NSDate *dateModified;
@property(copy, nonatomic) NSString *authorTitle;
- (id)encodedClassName;
@property(copy, nonatomic) NSDate *dateCreated;
@property(nonatomic) int rank;
@property(copy, nonatomic) NSString *author;
@property(copy, nonatomic) NSArray *comments;
@property(copy, nonatomic) NSURL *icon;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *title;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

