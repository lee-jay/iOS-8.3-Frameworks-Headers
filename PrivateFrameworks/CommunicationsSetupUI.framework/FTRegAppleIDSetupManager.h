//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSAccountController, NSArray, NSMutableDictionary, NSString;

@interface FTRegAppleIDSetupManager : NSObject
{
    NSMutableDictionary *_setupOperations;
    CDUnknownBlockType _handler;
    NSArray *_candidateAliases;
    NSArray *_selectedAliases;
    NSString *_selectionSummaryText;
    IDSAccountController *_iMessageAccountController;
    IDSAccountController *_faceTimeAccountController;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IDSAccountController *faceTimeAccountController; // @synthesize faceTimeAccountController=_faceTimeAccountController;
@property(retain, nonatomic) IDSAccountController *iMessageAccountController; // @synthesize iMessageAccountController=_iMessageAccountController;
@property(copy, nonatomic) NSString *selectionSummaryText; // @synthesize selectionSummaryText=_selectionSummaryText;
- (BOOL)beginSetupWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)aliasIsEnabled:(id)arg1;
@property(readonly, nonatomic) BOOL shouldShowAliasSelectionUI; // @dynamic shouldShowAliasSelectionUI;
- (void)addSetupDictionary:(id)arg1 forService:(int)arg2;
- (id)_aliasesForDictionary:(id)arg1;
- (void)_notifyFailureWithError:(id)arg1;
- (id)accountControllerForService:(id)arg1;
- (void)_notifySuccess;
- (void)_updateSelectionSummaryText;
@property(copy, nonatomic) NSArray *selectedAliases; // @synthesize selectedAliases=_selectedAliases;
- (id)_appleID;
- (id)phoneNumberDisplayString;
- (BOOL)_shouldShowAliasSelectionUI;
- (BOOL)showsPhoneNumberDisplayString;
@property(copy, nonatomic) NSArray *candidateAliases; // @synthesize candidateAliases=_candidateAliases;
- (void)_updateCandidateAliases;
@property(retain, nonatomic) NSMutableDictionary *setupOperations; // @synthesize setupOperations=_setupOperations;
- (void)_notifySuccess:(BOOL)arg1 error:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)_cleanup;
- (id)init;
- (void)dealloc;

@end

