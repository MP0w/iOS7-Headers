/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

@interface OADSound : OCDDelayedMedia
{
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}

- (id)init;
- (void)dealloc;
- (id)soundData;
- (void)setSoundData:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (long)sizeInBytes;
- (void)setSizeInBytes:(long)arg1;
- (_Bool)isLoaded;

@end
