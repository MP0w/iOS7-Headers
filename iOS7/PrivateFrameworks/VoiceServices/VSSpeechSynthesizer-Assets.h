/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VoiceServices/VSSpeechSynthesizer.h>

@interface VSSpeechSynthesizer (Assets)
+ (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(_Bool)arg4 reply:(id)arg5;
+ (void)getAutoDownloadedVoiceAssets:(id)arg1;
+ (void)setAutoDownloadedVoiceAssets:(id)arg1;
+ (void)downloadVoiceAsset:(id)arg1 progress:(id)arg2 completion:(void)arg3;
+ (void)getLocalVoiceAssets:(id)arg1;
+ (void)getAllVoiceAssets:(id)arg1;
@end
