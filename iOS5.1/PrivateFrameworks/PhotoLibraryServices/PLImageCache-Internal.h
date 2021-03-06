/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLImageCache.h>

@interface PLImageCache (Internal)
- (void)resumeLoading;
- (void)pauseLoading;
- (void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3;
- (void)removeImageLoadingQueue:(id)arg1;
- (id)newCachedImageWithImageContents:(void *)arg1 orientation:(int)arg2 metadata:(id)arg3 fromSource:(id)arg4 asset:(id)arg5;
- (id)cachedImageFromSource:(id)arg1 asset:(id)arg2 loadIfNeeded:(BOOL)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6 completion:(id)arg7;
@end

