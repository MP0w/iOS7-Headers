//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPAVController.h"

@class NSObject<OS_dispatch_queue>, RadioStation;

@interface MusicAVPlayer : MPAVController
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_lastPlayedStationSaveQueue;
    BOOL _checkedDefaultsForLastPlayedStation;
    RadioStation *_lastPlayedStation;
}

+ (id)sharedAVPlayer;
- (void).cxx_destruct;
- (void)_reloadLastPlayedStation;
- (void)_endPlaybackIfNeededForCurrentNetwork;
- (void)reloadWithPlaybackContext:(id)arg1;
@property(retain, nonatomic) RadioStation *lastPlayedStation;
@property(readonly, nonatomic) RadioStation *currentStation;
- (void)seekPlaylist:(int)arg1;
- (void)seekAlbum:(int)arg1;
- (void)beginOrTogglePlayback;
- (void)beginPlayback;
- (void)_previewSessionDidStopNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_musicPlayer_defaultsDidChangeNotification;
- (void)_matchCellularRestrictedDidChangeNotification:(id)arg1;
- (void)_downloadCancelledNotification:(id)arg1;
- (void)_currentStationDidChangeNotification:(id)arg1;
- (id)_expectedAssetTypesForPlaybackMode:(int)arg1;
- (void)dealloc;
- (id)init;

@end
