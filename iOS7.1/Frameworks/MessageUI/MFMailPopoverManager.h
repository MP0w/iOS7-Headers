//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"

@class MFPopoverController, NSArray, NSMutableArray, UIActionSheet, UIBarButtonItem, UIView;

@interface MFMailPopoverManager : NSObject <UIActionSheetDelegate>
{
    id _delegate;
    id _actionSheetDelegate;
    NSArray *_explicitPassthroughViews;
    UIActionSheet *_actionSheet;
    MFPopoverController *_popoverController;
    UIBarButtonItem *_currentBarButtonItem;
    UIView *_currentView;
    struct CGRect _currentRect;
    NSMutableArray *_passThroughContexts;
    unsigned int _currentArrowDirections;
    double _popoverDismissalEnd;
    BOOL _popoverBeingHiddenDuringRotation;
    BOOL _isHandlingActionSheetClick;
    BOOL _popoverDismissalIsDelayed;
    BOOL _popoverDismissalShouldBeAnimated;
}

+ (void)dismissPopover:(id)arg1 animated:(BOOL)arg2;
+ (void)enumerateManagersUsingBlock:(CDUnknownBlockType)arg1;
+ (id)managerForWindow:(id)arg1 createIfNeeded:(BOOL)arg2;
@property(nonatomic) BOOL popoverBeingHiddenDuringRotation; // @synthesize popoverBeingHiddenDuringRotation=_popoverBeingHiddenDuringRotation;
@property(nonatomic) unsigned int currentArrowDirections; // @synthesize currentArrowDirections=_currentArrowDirections;
@property(nonatomic) struct CGRect currentRect; // @synthesize currentRect=_currentRect;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) UIBarButtonItem *currentBarButtonItem; // @synthesize currentBarButtonItem=_currentBarButtonItem;
@property(retain, nonatomic) MFPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void)_cleanupCurrentPopover;
- (void)_willPresentPopover:(id)arg1;
- (BOOL)_isEquivalentToCurrentPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1 isUserAction:(BOOL)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)didPresentActionSheet:(id)arg1;
- (void)willPresentActionSheet:(id)arg1;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
@property(nonatomic) BOOL rasterizePopoverLayer;
- (void)didRotate;
- (void)willRotate;
- (BOOL)_delegateSupportsRotation;
- (id)_allPassthroughViewsIncludingViews:(id)arg1 excludingViews:(id)arg2;
- (id)_currentPassthroughProviders;
- (void)removePassthroughView:(id)arg1;
- (void)addPassthroughView:(id)arg1;
- (void)endModalPassthroughContext;
- (void)beginModalPassthroughContext;
- (void)removePassthroughViewProvider:(id)arg1;
- (void)addPassthroughViewProvider:(id)arg1;
- (double)delayUntilPopoverFinishesDismissing;
- (BOOL)popoverDismissalIsDelayed;
- (void)_popoverDismissalDidFinish;
- (void)_dismissPopoverNow;
- (void)dismissPopoverAfterDelay:(double)arg1 animated:(BOOL)arg2;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (id)popover;
- (BOOL)popoverShowing;
- (void)presentPopover:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 direction:(unsigned int)arg4 allowInteractionWithViews:(id)arg5 withDelegate:(id)arg6 animated:(BOOL)arg7;
- (void)presentPopover:(id)arg1 fromBarButtonItem:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
- (void)presentPopover:(id)arg1 fromView:(id)arg2 animated:(BOOL)arg3;
- (void)presentPopover:(id)arg1 fromBarButtonItem:(id)arg2 animated:(BOOL)arg3;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

