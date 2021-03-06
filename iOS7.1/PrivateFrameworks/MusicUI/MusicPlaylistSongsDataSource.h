//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicQueryDataSource.h>

@class MPMediaLibrary, MPMediaPlaylist;

@interface MusicPlaylistSongsDataSource : MusicQueryDataSource
{
    MPMediaLibrary *_mediaLibrary;
}

- (void).cxx_destruct;
- (BOOL)entityIsSeedItemAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) MPMediaPlaylist *playlist;
- (void)moveItemFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (BOOL)showsEntityCountFooter;
- (id)entityCountFormat;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 entityType:(int)arg2;

@end

