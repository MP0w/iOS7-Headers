/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIView;

// Not exported
@interface UIInputViewAnimationStyleExtraView : NSObject
{
    int _clipContainerType;
    int _alignment;
    UIView *_view;
    id _animation;
}

+ (id)extraView:(id)arg1 withAlignment:(int)arg2 animation:(id)arg3 onSnapshot:(void)arg4;
@property(copy, nonatomic) id animation; // @synthesize animation=_animation;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) int clipContainerType; // @synthesize clipContainerType=_clipContainerType;
- (void)dealloc;

@end

