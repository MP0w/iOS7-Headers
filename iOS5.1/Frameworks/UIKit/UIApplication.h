/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIResponder.h>

#import "UIActionSheetDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, UIEvent, UIStatusBar, UIStatusBarWindow, UIWindow;

@interface UIApplication : UIResponder <UIActionSheetDelegate>
{
    id <UIApplicationDelegate> _delegate;
    struct __CFDictionary *_touchMap;
    NSMutableSet *_exclusiveTouchWindows;
    UIEvent *_event;
    UIEvent *_touchesEvent;
    UIEvent *_motionEvent;
    UIEvent *_remoteControlEvent;
    int _remoteControlEventObservers;
    NSArray *_topLevelNibObjects;
    int _networkResourcesCurrentlyLoadingCount;
    NSTimer *_hideNetworkActivityIndicatorTimer;
    id _editAlertView;
    UIStatusBar *_statusBar;
    UIStatusBarWindow *_statusBarWindow;
    NSMutableArray *_observerBlocks;
    NSString *_mainStoryboardName;
    struct {
        unsigned int deactivatingReasonFlags:8;
        unsigned int isSuspended:1;
        unsigned int isSuspendedEventsOnly:1;
        unsigned int isLaunchedSuspended:1;
        unsigned int calledNonSuspendedLaunchDelegate:1;
        unsigned int isHandlingURL:1;
        unsigned int isHandlingRemoteNotification:1;
        unsigned int isHandlingLocalNotification:1;
        unsigned int statusBarShowsProgress:1;
        unsigned int statusBarRequestedStyle:4;
        unsigned int statusBarHidden:1;
        unsigned int blockInteractionEvents:4;
        unsigned int receivesMemoryWarnings:1;
        unsigned int showingProgress:1;
        unsigned int receivesPowerMessages:1;
        unsigned int launchEventReceived:1;
        unsigned int systemIsAnimatingApplicationLifecycleEvent:1;
        unsigned int isResuming:1;
        unsigned int isSuspendedUnderLock:1;
        unsigned int shouldExitAfterSendSuspend:1;
        unsigned int shouldExitAfterTaskCompletion:1;
        unsigned int terminating:1;
        unsigned int isHandlingShortCutURL:1;
        unsigned int idleTimerDisabled:1;
        unsigned int deviceOrientation:3;
        unsigned int delegateShouldBeReleasedUponSet:1;
        unsigned int delegateHandleOpenURL:1;
        unsigned int delegateOpenURL:1;
        unsigned int delegateDidReceiveMemoryWarning:1;
        unsigned int delegateWillTerminate:1;
        unsigned int delegateSignificantTimeChange:1;
        unsigned int delegateWillChangeInterfaceOrientation:1;
        unsigned int delegateDidChangeInterfaceOrientation:1;
        unsigned int delegateWillChangeStatusBarFrame:1;
        unsigned int delegateDidChangeStatusBarFrame:1;
        unsigned int delegateDeviceAccelerated:1;
        unsigned int delegateDeviceChangedOrientation:1;
        unsigned int delegateDidBecomeActive:1;
        unsigned int delegateWillResignActive:1;
        unsigned int delegateDidEnterBackground:1;
        unsigned int delegateDidEnterBackgroundWasSent:1;
        unsigned int delegateWillEnterForeground:1;
        unsigned int delegateWillSuspend:1;
        unsigned int delegateDidResume:1;
        unsigned int userDefaultsSyncDisabled:1;
        unsigned int headsetButtonClickCount:4;
        unsigned int isHeadsetButtonDown:1;
        unsigned int isFastForwardActive:1;
        unsigned int isRewindActive:1;
        unsigned int shakeToEdit:1;
        unsigned int isClassic:1;
        unsigned int zoomInClassicMode:1;
        unsigned int ignoreHeadsetClicks:1;
        unsigned int touchRotationDisabled:1;
        unsigned int taskSuspendingUnsupported:1;
        unsigned int taskSuspendingOnLockUnsupported:1;
        unsigned int isUnitTests:1;
        unsigned int requiresHighResolution:1;
        unsigned int disableViewContentScaling:1;
        unsigned int singleUseLaunchOrientation:3;
        unsigned int defaultInterfaceOrientation:3;
        unsigned int delegateWantsNextResponder:1;
        unsigned int isRunningInApplicationSwitcher:1;
        unsigned int isSendingEventForProgrammaticTouchCancellation:1;
        unsigned int calledInitializationDelegates:1;
    } _applicationFlags;
}

+ (id)stringForInterfaceOrientation:(int)arg1;
+ (int)interfaceOrientationForString:(id)arg1;
+ (int)statusBarStyleForString:(id)arg1;
+ (id)stringForStatusBarStyle:(int)arg1;
+ (BOOL)rendersLocally;
+ (BOOL)registerForSystemEvents;
+ (BOOL)isRunningEventPump;
+ (void)_startWindowServerIfNecessary;
+ (BOOL)_isAfterCACommitHandlerInstalled;
+ (void)_installAfterCACommitHandler;
+ (void)_noteInterfaceOrientationChangingTo:(int)arg1;
+ (BOOL)shouldMakeUIForDefaultPNG;
+ (BOOL)isRunningInStoreDemoMode;
+ (id)sharedApplication;
- (id)_fallbackPresentationViewController;
- (BOOL)_usesPreMTAlertBehavior;
- (void)endReceivingRemoteControlEvents;
- (void)beginReceivingRemoteControlEvents;
- (void)clearKeepAliveTimeout;
- (BOOL)setKeepAliveTimeout:(double)arg1 handler:(id)arg2;
- (void)_wakeTimerFired;
- (id)_backgroundModes;
- (void)endBackgroundTask:(unsigned int)arg1;
- (unsigned int)beginBackgroundTaskWithExpirationHandler:(id)arg1;
@property(readonly, nonatomic) double backgroundTimeRemaining;
@property(readonly, nonatomic) int applicationState;
- (BOOL)_executableWasLinkedWithUIKit;
- (BOOL)shouldFenceStatusBarRotation;
- (BOOL)_shouldIgnoreHeadsetClicks;
- (void)_setIgnoreHeadsetClicks:(BOOL)arg1;
- (void)_endShowingNetworkActivityIndicator;
- (void)_beginShowingNetworkActivityIndicator;
- (void)_hideNetworkActivityIndicator;
- (BOOL)_taskSuspendingUnsupported;
- (BOOL)_requiresHighResolution;
- (BOOL)_isViewContentScalingDisabled;
- (void)_setShouldZoom:(BOOL)arg1;
- (BOOL)_shouldZoom;
- (BOOL)_isClassic;
- (id)scheduledLocalNotifications;
- (void)setScheduledLocalNotifications:(id)arg1;
- (void)cancelAllLocalNotifications;
- (void)cancelLocalNotification:(id)arg1;
- (void)scheduleLocalNotification:(id)arg1;
- (void)presentLocalNotificationNow:(id)arg1;
- (void)unregisterForRemoteNotifications;
- (void)registerForRemoteNotificationTypes:(int)arg1;
- (int)enabledRemoteNotificationTypes;
- (BOOL)_supportsShakesWhenNotActive;
- (void)stopModal;
- (void)runModal:(id)arg1;
- (int)alertOrientation;
- (int)alertInterfaceOrientation;
- (id)displayIDForURLScheme:(id)arg1 isPublic:(BOOL)arg2;
- (BOOL)canShowAlerts;
- (void)requestDeviceUnlock;
- (BOOL)isPasscodeRequiredToUnlock;
- (BOOL)isLocked;
- (void)setHasMiniAlerts:(BOOL)arg1;
- (void)willDismissMiniAlert:(int *)arg1 andShowAnother:(BOOL)arg2;
- (void)willDisplayMiniAlert:(int *)arg1;
- (void)didDismissMiniAlert;
- (BOOL)_isWindowServerHostingManaged;
- (void)_sendOrderedOutContexts;
- (void)applicationDidOrderOutContext:(id)arg1;
- (void)applicationWillOrderInContext:(id)arg1 windowLevel:(float)arg2 windowOutput:(int)arg3;
- (void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2;
- (void)setExpectsFaceContact:(BOOL)arg1;
@property(readonly, nonatomic) NSArray *windows;
@property(readonly, nonatomic) UIWindow *keyWindow;
- (void)setHardwareKeyboardLayoutName:(id)arg1;
- (BOOL)_shouldUseKeyWindowStack;
- (BOOL)_shouldUseNextFirstResponder;
- (BOOL)_shouldUseDefaultFirstResponder;
- (id)defaultFirstResponder;
- (void)handleKeyEvent:(struct __GSEvent *)arg1;
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;
- (void)sendEvent:(id)arg1;
- (BOOL)handleEvent:(struct __GSEvent *)arg1 withNewEvent:(id)arg2;
- (BOOL)handleEvent:(struct __GSEvent *)arg1;
- (void)_updateOrientation;
- (void)_handleApplicationResumeEvent:(struct __GSEvent *)arg1;
- (void)_callApplicationResumeHandlersForURL:(id)arg1 payload:(id)arg2;
- (BOOL)_shouldHandleTestURL:(id)arg1;
- (void)_cancelAllTouches;
- (void)_cancelTouches:(id)arg1 withEvent:(id)arg2;
- (BOOL)_isSendingEventForProgrammaticTouchCancellation;
- (void)_cancelViewProcessingOfTouches:(id)arg1 withEvent:(id)arg2 sendingTouchesCancelledToViewsOfTouches:(id)arg3;
- (void)_cancelTouches:(id)arg1 withEvent:(id)arg2 includingGestures:(BOOL)arg3 notificationBlock:(id)arg4;
- (void)_cancelGestureRecognizersForView:(id)arg1;
- (void)_cancelGestureRecognizers:(id)arg1;
- (BOOL)_didEatCurrentTouch;
- (void)_eatCurrentTouch;
- (void)_playbackEvents:(id)arg1 atPlaybackRate:(float)arg2 messageWhenDone:(id)arg3 withSelector:(SEL)arg4;
- (void)_removeRecorder:(id)arg1;
- (void)_addRecorder:(id)arg1;
- (void)_startPlaybackTimer;
- (void)_stopPlayback;
- (void)_playbackTimerCallback:(id)arg1;
- (void)_purgeSharedInstances;
- (void)setReceivesMemoryWarnings:(BOOL)arg1;
- (void)_receivedMemoryNotification;
- (void)didReceiveMemoryWarning;
- (void)_performMemoryWarning;
- (void)_processScriptEvent:(struct __GSEvent *)arg1;
- (void)_dumpScreenContents:(struct __GSEvent *)arg1;
- (void)_dumpUIHierarchy:(struct __GSEvent *)arg1;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2;
- (void)setSuspensionAnimationDelay:(double)arg1;
- (void)setProximityEventsEnabled:(BOOL)arg1;
- (float)backlightLevel;
- (BOOL)_isSensitiveUIEnabled;
- (void)setBacklightLevel:(float)arg1;
- (void)vibrateForDuration:(int)arg1;
- (void)_unregisterForUserDefaultsChanges;
- (void)_registerForUserDefaultsChanges;
- (void)_cancelCurrentTouchEvent;
- (void)_clearTouchesForView:(id)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (void)_handleUserDefaultsDidChange:(id)arg1;
- (void)batteryStatusDidChange:(id)arg1;
- (void)significantTimeChange;
- (unsigned int)blockInteractionEventsCount;
- (BOOL)ignoresInteractionEvents;
- (void)setIgnoresInteractionEvents:(BOOL)arg1;
- (void)updateTouchDiagnostics;
- (BOOL)_usesEmoji;
- (void)setStatusBarShowsProgress:(BOOL)arg1;
- (void)_setStatusBarShowsProgress:(BOOL)arg1;
- (double)windowRotationDuration;
- (void)setStatusBarMode:(int)arg1 duration:(float)arg2;
- (void)setStatusBarMode:(int)arg1 orientation:(int)arg2 duration:(float)arg3;
- (void)setStatusBarMode:(int)arg1 orientation:(int)arg2 duration:(float)arg3 fenceID:(int)arg4;
- (void)setStatusBarMode:(int)arg1 orientation:(int)arg2 duration:(float)arg3 fenceID:(int)arg4 animation:(int)arg5 startTime:(double)arg6;
- (void)setStatusBarMode:(int)arg1 orientation:(int)arg2 duration:(float)arg3 fenceID:(int)arg4 animation:(int)arg5;
- (int)_getSpringBoardOrientation;
- (int)activeInterfaceOrientation;
- (float)statusBarHeight;
- (float)statusBarHeightForOrientation:(int)arg1 ignoreHidden:(BOOL)arg2;
- (float)statusBarHeightForOrientation:(int)arg1;
@property(readonly, nonatomic) struct CGRect statusBarFrame;
- (struct CGRect)statusBarFrameForOrientation:(int)arg1;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(float)arg2 toHeight:(float)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(float)arg2 toHeight:(float)arg3 duration:(double)arg4 animation:(int)arg5;
- (int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3;
- (void)_setUserDefaultsSyncEnabled:(BOOL)arg1;
- (BOOL)_isTrackingAnyTouch;
- (BOOL)_rotationDisabledDuringTouch;
- (void)_setRotationDisabledDuringTouch:(BOOL)arg1;
- (id)_exclusiveTouchWindows;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (BOOL)_alertWindowShouldRotate;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_showEditAlertView;
- (void)_sendRemoteControlEvent:(int)arg1;
- (id)_remoteControlEvent;
- (void)_sendMotionCancelled:(int)arg1;
- (void)_sendMotionEnded:(int)arg1;
- (void)_sendMotionBegan:(int)arg1;
- (id)_motionEvent;
- (id)_touchesEvent;
- (id)_event;
- (struct __CFDictionary *)_touchMap;
- (void)_setTouchMap:(struct __CFDictionary *)arg1;
- (int)_frontMostAppOrientation;
- (void)_setStatusBarMode:(int)arg1;
- (int)statusBarMode;
- (void)_removeDefaultInterfaceOrientatationOverride;
- (void)_overrideDefaultInterfaceOrientationWithOrientation:(int)arg1;
- (int)orientation;
- (int)interfaceOrientation;
- (void)_fetchInfoPlistFlags;
- (void)_setIsClassic:(BOOL)arg1;
- (BOOL)homeScreenCanAddIcons;
- (void)addWebClipToHomeScreen:(id)arg1;
@property(readonly, nonatomic) int userInterfaceLayoutDirection;
@property(readonly, nonatomic, getter=isProtectedDataAvailable) BOOL protectedDataAvailable;
@property(nonatomic) BOOL applicationSupportsShakeToEdit;
@property(nonatomic) int applicationIconBadgeNumber;
- (void)setApplicationBadgeString:(id)arg1;
- (void)removeStatusBarItem:(int)arg1;
- (void)addStatusBarItem:(int)arg1;
- (void)addStatusBarItem:(int)arg1 removeOnExit:(BOOL)arg2;
- (void)removeStatusBarImageNamed:(id)arg1;
- (void)addStatusBarImageNamed:(id)arg1 removeOnExit:(BOOL)arg2;
- (void)addStatusBarImageNamed:(id)arg1;
- (void)setNewsstandIconImage:(id)arg1;
- (BOOL)launchApplicationWithIdentifier:(id)arg1 suspended:(BOOL)arg2;
- (BOOL)_isMotionEvent:(struct __GSEvent *)arg1;
- (BOOL)_isTouchEvent:(struct __GSEvent *)arg1;
- (BOOL)_isInteractionEvent:(struct __GSEvent *)arg1;
- (double)defaultImageSnapshotExpiration;
- (void)removeDefaultImage:(id)arg1;
- (void)prepareForDefaultImageSnapshot;
- (void)_removeSnapshotImage;
- (BOOL)_updateDefaultImage;
- (id)pathToDefaultImageNamed:(id)arg1;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (void)_writeApplicationDefaultPNGSnapshot;
- (struct CGImage *)_createDefaultImageSnapshot;
- (struct CGRect)applicationSnapshotRectForOrientation:(int)arg1;
- (id)_localCachesDirectory;
- (id)userCachesDirectory;
- (id)userLibraryDirectory;
- (id)userHomeDirectory;
- (BOOL)usesBackgroundNetwork;
- (void)setUsesBackgroundNetwork:(BOOL)arg1;
- (void)showNetworkPromptsIfNecessary:(BOOL)arg1;
- (void)showTTYPromptForNumber:(id)arg1 withID:(int)arg2;
- (BOOL)isHandlingURL;
- (void)_setHandlingURL:(BOOL)arg1 url:(id)arg2;
- (BOOL)isHandlingOpenShortCut;
- (void)_applicationOpenURL:(id)arg1 event:(struct __GSEvent *)arg2;
- (void)_applicationOpenURL:(id)arg1 payload:(id)arg2;
- (void)applicationOpenURL:(id)arg1;
- (void)applicationOpenToShortCut:(id)arg1;
- (BOOL)canOpenURL:(id)arg1;
- (BOOL)openURL:(id)arg1;
- (BOOL)_canOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2;
- (id)displayIdentifier;
- (id)roleID;
- (void)applicationResume:(struct __GSEvent *)arg1;
- (void)updateSuspendedSettings:(id)arg1;
- (void)_handleApplicationSuspend:(struct __GSEvent *)arg1 eventInfo:(void *)arg2;
- (void)applicationSuspend:(struct __GSEvent *)arg1;
- (void)terminateWithSuccess;
- (void)_terminateWithStatus:(int)arg1;
- (BOOL)_saveSnapshotWithName:(id)arg1;
- (void)_handleHeadsetButtonTripleClick;
- (void)_handleHeadsetButtonDoubleClick;
- (void)_handleHeadsetButtonClick;
- (void)_handleHeadsetButtonUp:(struct __GSEvent *)arg1;
- (void)_handleHeadsetButtonDown:(struct __GSEvent *)arg1;
- (void)_postSimpleRemoteNotificationForAction:(int)arg1 andContext:(int)arg2;
- (void)setSimpleRemoteRoutingPriority:(unsigned int)arg1;
- (unsigned int)simpleRemoteRoutingPriority;
- (void)resetIdleTimerAndUndim;
- (void)quitTopApplication:(struct __GSEvent *)arg1;
- (void)lockDevice:(struct __GSEvent *)arg1;
- (void)accessoryKeyStateChanged:(struct __GSEvent *)arg1;
- (void)_handleAccessoryKeyStateChanged:(struct __GSEvent *)arg1;
- (void)proximityStateChanged:(BOOL)arg1;
- (void)acceleratedInX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)volumeChanged:(struct __GSEvent *)arg1;
- (void)setWantsVolumeButtonEvents:(BOOL)arg1;
- (void)ringerChanged:(int)arg1;
- (void)statusBarReturnActionTap:(struct __GSEvent *)arg1;
- (void)statusBarMouseUp:(struct __GSEvent *)arg1;
- (void)menuButtonUp:(struct __GSEvent *)arg1;
- (void)menuButtonDown:(struct __GSEvent *)arg1;
- (void)headsetAvailabilityChanged:(struct __GSEvent *)arg1;
- (void)headsetButtonUp:(struct __GSEvent *)arg1;
- (void)headsetButtonDown:(struct __GSEvent *)arg1;
- (void)lockButtonUp:(struct __GSEvent *)arg1;
- (void)lockButtonDown:(struct __GSEvent *)arg1;
- (void)anotherApplicationFinishedLaunching:(struct __GSEvent *)arg1;
- (void)mediaKeyUp:(struct __GSEvent *)arg1;
- (void)mediaKeyDown:(struct __GSEvent *)arg1;
- (void)applicationExited:(struct __GSEvent *)arg1;
- (void)applicationSuspendedSettingsUpdated:(struct __GSEvent *)arg1;
- (void)applicationSuspended:(struct __GSEvent *)arg1;
- (unsigned int)_frontmostApplicationPort;
- (void)suspendReturningToLastApp:(BOOL)arg1;
- (void)suspend;
- (BOOL)_isLaunchedSuspended;
- (BOOL)_isResuming;
- (BOOL)systemIsAnimatingApplicationLifecycleEvent;
- (void)_setSuspendedUnderLock:(BOOL)arg1;
- (void)_setSuspendedEventsOnly:(BOOL)arg1;
- (BOOL)isRunningInTaskSwitcher;
- (BOOL)isSuspendedUnderLock;
- (BOOL)isSuspendedEventsOnly;
- (BOOL)isSuspended;
- (void)_setSuspended:(BOOL)arg1;
- (void)applicationWillTerminate;
- (void)applicationDidResumeForEventsOnly;
- (void)applicationDidResume;
- (void)applicationDidResumeFromUnderLock;
- (void)applicationDidEndResumeAnimation;
- (void)applicationDidBeginSuspendAnimation;
- (void)applicationWillSuspendUnderLock;
- (void)applicationWillSuspendForEventsOnly;
- (void)applicationWillSuspend;
- (void)setDoubleHeightStatusText:(id)arg1;
- (void)setDoubleHeightPrefixText:(id)arg1;
- (int)doubleHeightMode;
- (void)setDoubleHeightMode:(int)arg1;
- (void)setDoubleHeightMode:(int)arg1 glowAnimationEnabled:(BOOL)arg2;
- (void)setDoubleHeightStatusText:(id)arg1 forStyle:(int)arg2;
- (void)setGlowAnimationEnabled:(BOOL)arg1 forStyle:(int)arg2;
- (void)removeStatusBarStyleOverrides:(int)arg1;
- (void)addStatusBarStyleOverrides:(int)arg1;
@property(readonly, nonatomic) double statusBarOrientationAnimationDuration;
@property(nonatomic) int statusBarOrientation;
- (void)setStatusBarOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)setStatusBarOrientation:(int)arg1 animation:(int)arg2 duration:(double)arg3;
- (void)setStatusBarOrientation:(int)arg1 animationParameters:(id)arg2;
- (void)_notifySpringBoardOfStatusBarOrientationChangeAndFenceWithAnimationDuration:(double)arg1;
- (void)_notifyDidChangeStatusBarFrame:(struct CGRect)arg1;
- (void)_notifyWillChangeStatusBarFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
- (void)setStatusBarHidden:(BOOL)arg1 withAnimation:(int)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 duration:(double)arg2 changeApplicationFlag:(BOOL)arg3;
- (void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2 changeApplicationFlag:(BOOL)arg3;
@property(nonatomic) int statusBarStyle;
- (void)setStatusBarStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setStatusBarStyle:(int)arg1 duration:(double)arg2;
- (void)setStatusBarStyle:(int)arg1 animation:(int)arg2;
- (void)setStatusBarStyle:(int)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)setStatusBarStyle:(int)arg1 animationParameters:(id)arg2;
- (void)performDisablingStatusBarStyleValidation:(id)arg1;
- (int)_validateStatusBarStyle:(int)arg1;
- (id)statusBarWindow;
- (id)statusBar;
- (void)_createStatusBarWithRequestedStyle:(int)arg1 orientation:(int)arg2 hidden:(BOOL)arg3;
- (BOOL)handleDoubleHeightStatusBarTap:(int)arg1;
@property(nonatomic, getter=isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (BOOL)sendAction:(SEL)arg1 toTarget:(id)arg2 fromSender:(id)arg3 forEvent:(id)arg4;
- (void)sendAction:(SEL)arg1 fromSender:(id)arg2 toTarget:(id)arg3 forEvent:(struct __GSEvent *)arg4;
- (id)_targetInChainForAction:(SEL)arg1 sender:(id)arg2;
- (id)nextResponder;
- (void)popRunLoopMode:(id)arg1;
- (void)pushRunLoopMode:(id)arg1;
- (int)_loadMainInterfaceFile;
- (int)_loadMainStoryboardFileNamed:(id)arg1 bundle:(id)arg2;
- (int)_loadMainNibFileNamed:(id)arg1 bundle:(id)arg2;
- (void)_unregisterForTimeChangedNotification;
- (void)_unregisterForLocaleChangedNotification;
- (void)_unregisterForLanguageChangedNotification;
- (void)_unregisterForSignificantTimeChangeNotification;
- (void)_registerForKeyBagLockStatusNotification;
- (void)_registerForLocaleChangedNotification;
- (void)_registerForLocaleWillChangeNotification;
- (void)_registerForLanguageChangedNotification;
- (void)_registerForSignificantTimeChangeNotification;
- (void)_registerForAlertItemStateChangeNotification;
- (int)_currentExpectedInterfaceOrientation;
- (void)_runWithURL:(id)arg1 payload:(id)arg2 launchOrientation:(int)arg3 statusBarStyle:(int)arg4 statusBarHidden:(BOOL)arg5;
- (void)_reportAppLaunchFinished;
- (void)_run;
- (void)_addAfterCACommitBlockForViewController:(id)arg1;
- (void)_installAutoreleasePoolsIfNecessaryForMode:(struct __CFString *)arg1;
- (void)_callInitializationDelegatesForURL:(id)arg1 payload:(id)arg2 suspended:(BOOL)arg3;
- (BOOL)_hasStoryboard;
- (id)_mainStoryboardName;
- (BOOL)_isSpringBoard;
- (BOOL)_isSpringBoardShowingAnAlert;
- (BOOL)_hasApplicationCalledLaunchDelegate;
- (BOOL)_isActivated;
- (void)_stopDeactivatingForReason:(int)arg1;
- (void)_deactivateForReason:(int)arg1;
- (void)_deactivateForReason:(int)arg1 notify:(BOOL)arg2;
@property(nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled;
- (BOOL)isIgnoringInteractionEvents;
- (void)endIgnoringInteractionEvents;
- (void)beginIgnoringInteractionEvents;
@property(nonatomic) id <UIApplicationDelegate> delegate;
- (void)_setDelegate:(id)arg1 assumeOwnership:(BOOL)arg2;
- (BOOL)firstLaunchAfterBoot;
- (BOOL)shouldLaunchSafe;
- (id)_launchTestName;
- (id)_extendLaunchTest;
- (void)dealloc;
- (id)init;

@end

