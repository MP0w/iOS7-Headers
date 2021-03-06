/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIButton, UILabel, _UIBackdropView;

@interface _UIContentUnavailableView : UIView
{
    unsigned long long _style;
    NSString *_title;
    _UIBackdropView *_backdrop;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_actionButton;
    NSLayoutConstraint *titleToMessageConstraint;
    NSLayoutConstraint *messageToButtonConstraint;
    UIView *_fromSnapshot;
    UIView *_toSnapshot;
    struct CGSize _fromSnapshotSize;
    NSString *_message;
    NSString *_buttonTitle;
    id _buttonAction;
}

@property(copy, nonatomic) id buttonAction; // @synthesize buttonAction=_buttonAction;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)windowDidRotateNotification:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowWillRotateNotification:(id)arg1;
- (void)didMoveToWindow;
- (void)updateConstraints;
- (void)_actionButtonPressed:(id)arg1;
- (void)_updateViewHierarchy;
- (id)_buttonBackgroundImageForStyle:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

