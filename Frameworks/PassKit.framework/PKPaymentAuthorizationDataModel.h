//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentValidating.h"

@class CNContact, NSArray, NSDecimalNumber, NSMutableArray, NSMutableDictionary, NSString, PKPassLibrary, PKPaymentApplication, PKPaymentOptionsDefaults, PKPaymentOptionsRecents, PKPaymentPass, PKPaymentRequest, PKPaymentTransaction, PKShippingMethod;

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating>
{
    NSMutableArray *_items;
    NSMutableDictionary *_typeToItemMap;
    unsigned int _holdPendingUpdatesCount;
    NSArray *_acceptedPasses;
    NSMutableDictionary *_statusForPasses;
    BOOL _shippingEditable;
    PKPaymentRequest *_paymentRequest;
    NSString *_hostAppLocalizedName;
    PKPaymentPass *_pass;
    CNContact *_shippingEmail;
    CNContact *_shippingPhone;
    CNContact *_shippingName;
    CNContact *_shippingAddress;
    PKShippingMethod *_shippingMethod;
    NSString *_shippingType;
    NSString *_shippingEditableMessage;
    CNContact *_billingAddress;
    PKPaymentOptionsDefaults *_defaults;
    PKPaymentOptionsRecents *_recents;
    PKPassLibrary *_library;
    PKPaymentTransaction *_pendingTransaction;
    CDUnknownBlockType _updateHandler;
    NSDecimalNumber *_transactionAmount;
    PKPaymentApplication *_paymentApplication;
    CNContact *_cachedRecentAddress;
}

@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(retain, nonatomic) NSString *shippingEditableMessage; // @synthesize shippingEditableMessage=_shippingEditableMessage;
@property(retain, nonatomic) NSString *shippingType; // @synthesize shippingType=_shippingType;
@property(nonatomic, getter=isShippingEditable) BOOL shippingEditable; // @synthesize shippingEditable=_shippingEditable;
@property(retain, nonatomic) NSArray *paymentSummaryItems;
@property(retain, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
- (BOOL)isValidWithError:(id *)arg1;
@property(retain, nonatomic) PKShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property(retain, nonatomic) CNContact *billingAddress; // @synthesize billingAddress=_billingAddress;
@property(retain, nonatomic) CNContact *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(retain, nonatomic) NSDecimalNumber *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(readonly, nonatomic) NSString *currencyCode;
@property(retain, nonatomic) PKPassLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) PKPaymentOptionsDefaults *defaults; // @synthesize defaults=_defaults;
- (void)endUpdates;
- (void)beginUpdates;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) PKPaymentOptionsRecents *recents; // @synthesize recents=_recents;
- (id)init;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void)_setDataItem:(id)arg1;
- (id)_initialBillingContactForPropertyID:(int)arg1;
- (id)_initialShippingContactForPropertyID:(int)arg1;
- (void)_ensurePlaceholderItems;
@property(retain, nonatomic) CNContact *cachedRecentAddress; // @synthesize cachedRecentAddress=_cachedRecentAddress;
- (void)_setStatus:(int)arg1 forPaymentPass:(id)arg2;
- (int)statusForPass:(id)arg1;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
- (id)_inAppPaymentPassesForNetworks:(id)arg1;
- (void)_notifyModelChanged;
- (void)_ensureItemForClass:(Class)arg1;
- (void)_ensureItems;
@property(readonly, nonatomic) NSArray *acceptedPasses;
@property(retain, nonatomic) CNContact *shippingPhone; // @synthesize shippingPhone=_shippingPhone;
@property(retain, nonatomic) CNContact *shippingEmail; // @synthesize shippingEmail=_shippingEmail;
@property(retain, nonatomic) CNContact *shippingName; // @synthesize shippingName=_shippingName;
@property(retain, nonatomic) NSString *hostAppLocalizedName; // @synthesize hostAppLocalizedName=_hostAppLocalizedName;
@property(readonly, nonatomic) NSString *merchantName;
@property(retain, nonatomic) PKPaymentTransaction *pendingTransaction; // @synthesize pendingTransaction=_pendingTransaction;
- (void)setStatus:(int)arg1 forItemWithType:(int)arg2;
- (id)itemForType:(int)arg1;
@property(readonly, nonatomic) BOOL pinRequired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

