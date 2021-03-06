/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBook/ABVCardParser.h>

@class NSData, NSMutableDictionary;

@interface ABVCardCardDAVParser : ABVCardParser
{
    NSMutableDictionary *_unknownAttributes;
    BOOL _removeExistingProperties;
    BOOL _localRecordHasAdditionalProperties;
    int _lastCropRectX;
    int _lastCropRectY;
    int _lastCropRectWidth;
    int _lastCropRectHeight;
    NSData *_lastCropRectChecksum;
}

- (void)setLocalRecordHasAdditionalProperties:(BOOL)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)genericLabel;
- (id)defaultLabel;
- (id)defaultADRLabel;
- (id)defaultURLLabel;
- (BOOL)parseUID;
- (BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (BOOL)importToPerson:(void *)arg1 removeExistingProperties:(BOOL)arg2;
- (BOOL)importToGroup:(void *)arg1 removeExistingProperties:(BOOL)arg2;
- (void *)createRecordInSource:(void *)arg1 outRecordType:(unsigned int *)arg2;
- (void)noteLackOfValueForProperty:(unsigned int)arg1;
- (void)noteLackOfValueForImageData;
- (void)cleanUpCardState;
@property(readonly) NSData *lastCropRectChecksum; // @synthesize lastCropRectChecksum=_lastCropRectChecksum;
@property(readonly) int lastCropRectHeight; // @synthesize lastCropRectHeight=_lastCropRectHeight;
@property(readonly) int lastCropRectWidth; // @synthesize lastCropRectWidth=_lastCropRectWidth;
@property(readonly) int lastCropRectY; // @synthesize lastCropRectY=_lastCropRectY;
@property(readonly) int lastCropRectX; // @synthesize lastCropRectX=_lastCropRectX;
@property(readonly) BOOL localRecordHasAdditionalProperties; // @synthesize localRecordHasAdditionalProperties=_localRecordHasAdditionalProperties;

@end

