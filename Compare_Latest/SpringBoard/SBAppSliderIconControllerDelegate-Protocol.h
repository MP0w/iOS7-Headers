/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBAppSliderIconControllerDelegate <NSObject>
- (void)sliderIconScrollerDidEndScrolling:(id)arg1;
- (unsigned long long)sliderIconScroller:(id)arg1 settledIndexForNormalizedOffset:(inout double *)arg2 andXVelocity:(double)arg3;
- (void)sliderIconScrollerBeganPanning:(id)arg1;
- (void)sliderIconScroller:(id)arg1 activate:(id)arg2;
- (void)sliderIconScroller:(id)arg1 contentOffsetChanged:(double)arg2;
@end
