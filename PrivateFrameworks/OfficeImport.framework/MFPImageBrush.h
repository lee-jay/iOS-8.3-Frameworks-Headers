//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/MFPBrush.h>

@class OITSUColor, OITSUImage;

@interface MFPImageBrush : MFPBrush
{
    OITSUImage *mPhoneImage;
    OITSUColor *mPhonePatternColor;
}

- (id)initWithPhoneImage:(id)arg1;
- (void)fillPath:(id)arg1;
- (id)color;
- (void)dealloc;

@end

