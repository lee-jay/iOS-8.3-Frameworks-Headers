//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFComposeRecipient.h"

@interface MFComposeRecipient (Additions)
- (id)canonicalAddress;
- (void)setCanonicalAddress:(id)arg1;
- (struct __CFPhoneNumber *)copyPhoneNumber;
- (BOOL)isPhone;
- (BOOL)isEmail;
- (id)rawAddress;
- (id)IDSCanonicalAddress;
@end
