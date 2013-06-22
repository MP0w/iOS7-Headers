/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICalloutView.h"

@class UILabel;

@interface EKScrubberBubble : UICalloutView
{
    struct CGPoint _currentPoint;
    float _minimumWidth;
    UILabel *_sizer;
    BOOL _blockAlpha;
    BOOL _avoidClipping;
}

@property(nonatomic) BOOL avoidClipping; // @synthesize avoidClipping=_avoidClipping;
- (void)setAlpha:(float)arg1;
- (void)blockAlpha:(BOOL)arg1;
- (void)getActualAnchorPoint:(struct CGPoint *)arg1 frame:(struct CGRect *)arg2 position:(int *)arg3 forDesiredAnchorPoint:(struct CGPoint)arg4 boundaryRect:(struct CGRect)arg5;
- (void)resetMinimumWidth;
- (void)moveToPoint:(struct CGPoint)arg1 withText:(id)arg2 animate:(BOOL)arg3;
- (float)widthForString:(id)arg1;
- (void)dealloc;
- (void)clearPoint;
- (void)setText:(id)arg1 animate:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
