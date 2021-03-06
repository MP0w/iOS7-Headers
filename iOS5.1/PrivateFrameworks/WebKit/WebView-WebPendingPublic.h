/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebKit/WebView.h>

@interface WebView (WebPendingPublic)
- (BOOL)findString:(id)arg1 options:(unsigned int)arg2;
- (void)setMainFrameDocumentReady:(BOOL)arg1;
- (id)_frameForCurrentSelection;
- (void)setTabKeyCyclesThroughElements:(BOOL)arg1;
- (BOOL)tabKeyCyclesThroughElements;
- (void)setScriptDebugDelegate:(id)arg1;
- (id)scriptDebugDelegate;
- (void)setHistoryDelegate:(id)arg1;
- (id)historyDelegate;
- (BOOL)shouldClose;
- (BOOL)canMarkAllTextMatches;
- (unsigned int)countMatchesForText:(id)arg1 options:(unsigned int)arg2 highlight:(BOOL)arg3 limit:(unsigned int)arg4 markMatches:(BOOL)arg5;
- (unsigned int)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned int)arg3 highlight:(BOOL)arg4 limit:(unsigned int)arg5 markMatches:(BOOL)arg6;
- (void)unmarkAllTextMatches;
- (id)rectsForTextMatches;
- (void)scrollDOMRangeToVisible:(id)arg1;
- (void)scrollDOMRangeToVisible:(id)arg1 withInset:(float)arg2;
- (BOOL)allowsUndo;
- (void)setAllowsUndo:(BOOL)arg1;
- (void)setPageSizeMultiplier:(float)arg1;
- (float)pageSizeMultiplier;
- (BOOL)canZoomPageIn;
- (void)zoomPageIn:(id)arg1;
- (BOOL)canZoomPageOut;
- (void)zoomPageOut:(id)arg1;
- (BOOL)canResetPageZoom;
- (void)resetPageZoom:(id)arg1;
- (void)setMediaVolume:(float)arg1;
- (float)mediaVolume;
- (void)addVisitedLinks:(id)arg1;
- (void)removeVisitedLink:(id)arg1;
@end

