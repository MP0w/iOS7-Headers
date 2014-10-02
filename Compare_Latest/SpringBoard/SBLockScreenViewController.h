/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBLockScreenViewControllerBase.h"

#import "SBLockScreenBatteryChargingViewControllerDelegate-Protocol.h"
#import "SBLockScreenCameraControllerDelegate-Protocol.h"
#import "SBLockScreenInfoOverlayDelegate-Protocol.h"
#import "SBLockScreenNotificationListDelegate-Protocol.h"
#import "SBLockScreenPluginControllerDelegate-Protocol.h"
#import "SBLockScreenTimerViewControllerDelegate-Protocol.h"
#import "SBLockScreenViewDelegate-Protocol.h"
#import "SBUIPasscodeLockViewDelegate_Internal-Protocol.h"
#import "SBWallpaperObserver-Protocol.h"

@class MPUSystemMediaControlsViewController, NSMutableArray, SBLockOverlayContext, SBLockScreenBatteryChargingViewController, SBLockScreenBuddyViewController, SBLockScreenCameraController, SBLockScreenDateViewController, SBLockScreenDeviceBlockViewController, SBLockScreenEmergencyCallViewController, SBLockScreenFullscreenBulletinViewController, SBLockScreenInfoOverlayViewController, SBLockScreenLegalViewController, SBLockScreenModalAlertViewController, SBLockScreenNotificationListController, SBLockScreenNowPlayingPluginController, SBLockScreenPluginController, SBLockScreenResetRestoreViewController, SBLockScreenSystemAlertFullscreenViewController, SBLockScreenTemperatureWarningViewController, SBLockScreenTimerViewController;

@interface SBLockScreenViewController : SBLockScreenViewControllerBase <SBLockScreenViewDelegate, SBLockScreenTimerViewControllerDelegate, SBLockScreenNotificationListDelegate, SBUIPasscodeLockViewDelegate_Internal, SBLockScreenBatteryChargingViewControllerDelegate, SBLockScreenInfoOverlayDelegate, SBWallpaperObserver, SBLockScreenCameraControllerDelegate, SBLockScreenPluginControllerDelegate>
{
    _Bool _isInScreenOffMode;
    SBLockScreenDeviceBlockViewController *_blockedController;
    SBLockScreenDateViewController *_dateViewController;
    SBLockScreenLegalViewController *_legalViewController;
    SBLockScreenTimerViewController *_timerViewController;
    SBLockScreenNotificationListController *_notificationController;
    SBLockScreenCameraController *_cameraController;
    MPUSystemMediaControlsViewController *_mediaControlsViewController;
    _Bool _ignoreFirstMediaToggle;
    SBLockScreenModalAlertViewController *_modalAlertController;
    SBLockScreenSystemAlertFullscreenViewController *_fullscreenSystemAlertController;
    NSMutableArray *_pendingFullscreenSystemAlerts;
    SBLockScreenBatteryChargingViewController *_chargingViewController;
    _Bool _attemptingPasscodeUnlock;
    _Bool _chargingViewControllerVisible;
    _Bool _wasAutoUnlocked;
    _Bool _forcePasscodeWhileInCall;
    _Bool _isHidingPasscodeWhileInCall;
    SBLockScreenPluginController *_pluginController;
    SBLockScreenNowPlayingPluginController *_nowPlayingController;
    SBLockScreenBuddyViewController *_buddyController;
    SBLockOverlayContext *_buddyOverlayContext;
    NSMutableArray *_prioritizedOverlays;
    SBLockOverlayContext *_fullScreenOverlayContext;
    SBLockOverlayContext *_blockedOverlayContext;
    SBLockScreenFullscreenBulletinViewController *_fullscreenBulletinController;
    SBLockOverlayContext *_fullScreenBulletinOverlayContext;
    SBLockScreenInfoOverlayViewController *_infoOverlayController;
    SBLockOverlayContext *_infoOverlayContext;
    SBLockScreenTemperatureWarningViewController *_thermalWarningController;
    SBLockOverlayContext *_thermalWarningContext;
    SBLockScreenResetRestoreViewController *_resetRestoreViewController;
    SBLockOverlayContext *_resetRestoreOverlayContext;
    SBLockScreenEmergencyCallViewController *_emergencyCallController;
    _Bool _suppressWallpaperAlphaChangeOnScroll;
}

@property(readonly, nonatomic) SBLockScreenPluginController *pluginController; // @synthesize pluginController=_pluginController;
- (id)_wallpaperLegibilitySettings;
- (id)_pluginLegibilitySettings;
- (id)_overlayLegibilitySettings;
- (id)_notificationListLegibilitySettings;
- (id)_effectiveLegibilitySettings;
- (void)_updateLegibility;
- (id)legibilitySettings;
- (void)_cameraControllerDidHide:(id)arg1;
- (void)_cameraControllerDidShow:(id)arg1;
- (id)cameraParentViewController;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)_buddyDidFinish:(id)arg1;
- (void)_removeBuddyBackground;
- (void)_addOrRemoveBuddyBackgroundIfNecessary;
- (void)biometricEventMonitorDidAuthenticate:(id)arg1;
- (void)_updateGrabbersForIdentityManagerAuthentication;
- (void)_updateMediaControlsForScreenMode;
- (void)_mediaControlsDidHideOrShow:(id)arg1;
- (void)setShowingMediaControls:(_Bool)arg1;
- (_Bool)isShowingMediaControls;
- (void)_setMediaControlsVisible:(_Bool)arg1;
- (void)_toggleMediaControls;
- (id)_notificationController;
- (void)pluginController:(id)arg1 activePluginDidChange:(id)arg2;
- (void)_setNowPlayingControllerEnabled:(_Bool)arg1;
- (void)_removeActivePluginView;
- (void)_resetActivePlugin;
- (struct CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(long long)arg2;
- (void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2;
- (void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2;
- (id)activeLockScreenPluginController;
- (_Bool)isLockScreenPluginViewVisible;
- (void)deactivateCardItem:(id)arg1;
- (void)updateCardItem:(id)arg1;
- (void)activateCardItem:(id)arg1 animated:(_Bool)arg2;
- (id)allPendingAlertItems;
- (_Bool)hasSuperModalAlertItems;
- (id)dequeueAllPendingSuperModalAlertItems;
- (id)currentAlertItem;
- (void)cleanupAlertItemsForDeactivation;
- (void)deactivateAlertItem:(id)arg1;
- (_Bool)activateAlertItem:(id)arg1;
- (void)pendOrDeactivateFullscreenSystemAlert:(id)arg1;
- (_Bool)wantsToHandleAlert:(id)arg1;
- (_Bool)canHandleAlerts;
- (_Bool)shouldPendAlertItemsWhileActive;
- (void)chargingViewControllerFadedOutContent:(id)arg1;
- (void)_cleanupBatteryChargingViewWithAnimationDuration:(double)arg1;
- (void)_fadeViewsForChargingViewVisible:(_Bool)arg1;
- (void)_acStatusChanged:(id)arg1;
- (void)_updateBatteryChargingViewAnimated:(_Bool)arg1;
- (void)dismissFullscreenBulletinAlertWithItem:(id)arg1;
- (void)modifyFullscreenBulletinAlertWithItem:(id)arg1;
- (void)presentFullscreenBulletinAlertWithItem:(id)arg1;
- (void)_removeFullscreenBulletinViewAnimated:(_Bool)arg1;
- (void)_addFullscreenBulletinViewWithItem:(id)arg1;
- (id)lockScreenScrollView;
- (void)notificationListBecomingVisible:(_Bool)arg1;
- (void)attemptToUnlockUIFromNotification;
- (void)_dismissNotificationCenterToRevealPasscode;
- (void)bannerEnablementChanged;
- (void)timerControllerDidStopTimer:(id)arg1;
- (void)timerControllerDidStartTimer:(id)arg1;
- (void)_updateDateTimerStatusBarAndLockSlider;
- (_Bool)_shouldShowDate;
- (double)_effectiveVisibleStatusBarAlpha;
- (id)_effectiveCustomSlideToUnlockText;
- (double)_effectiveOpacityForVisibleDateView;
- (_Bool)isMakingEmergencyCall;
- (void)emergencyDialerExitedWithError:(id)arg1;
- (void)exitEmergencyDialerAnimated:(_Bool)arg1;
- (void)_destroyEmergencyDialerAnimated:(_Bool)arg1;
- (void)launchEmergencyDialer;
- (void)_adjustIdleTimerForEmergencyDialerActive:(_Bool)arg1;
- (void)passcodeLockViewKeypadKeyUp:(id)arg1;
- (void)passcodeLockViewKeypadKeyDown:(id)arg1;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (void)_endTimedPasscodeHysteresis;
- (void)_beginTimedPasscodeHysteresis;
- (void)_togglePasscodeEmergencyCallButtonIfNecessary;
- (_Bool)__shouldHidePasscodeForActiveCall;
- (void)_evaluateLockUIForActiveCalls;
- (_Bool)isHidingPasscodeViewDuringCall;
- (void)_passcodeStateChanged;
- (_Bool)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
- (_Bool)isPasscodeLockVisible;
- (void)setPasscodeLockVisible:(_Bool)arg1 animated:(_Bool)arg2 withUnlockSource:(int)arg3 andOptions:(id)arg4;
- (void)setPasscodeLockVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)_callCountChanged:(id)arg1;
- (void)_callInfoChanged:(id)arg1;
- (void)_handlePasscodePolicyChanged;
- (void)_handlePasscodeLockStateChanged;
- (void)_handleBacklightLevelChanged:(id)arg1;
- (void)_handleBacklightFadeEnded;
- (void)_handleDisplayTurnedOn;
- (void)_handleDisplayWillUndim;
- (void)_handleDisplayTurnedOff;
- (void)noteResetRestoreStateUpdated;
- (void)noteDeviceBlockedStatusUpdated;
- (void)_unsupportedChargingAccessoryStateChanged:(id)arg1;
- (void)infoOverlayWantsDismissal;
- (void)_removeInfoOverlayViewAnimated:(_Bool)arg1;
- (void)_addInfoOverlayViewWithTitle:(id)arg1;
- (void)overlay:(id)arg1 wantsStyleChange:(unsigned long long)arg2;
- (void)removeOverlay:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)addOverlay:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)__transitionOverlayAnimated:(_Bool)arg1 from:(id)arg2 to:(id)arg3 completion:(id)arg4;
- (void)_removeAllOverlays;
- (_Bool)_shouldDismissSwitcherOnActivation;
- (_Bool)hasTranslucentBackground;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesNotificationCenter;
- (_Bool)suppressesBanners;
- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;
- (_Bool)handleVolumeDownButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (_Bool)handleLockButtonPressed;
- (_Bool)handleMenuButtonHeld;
- (_Bool)handleMenuButtonTap;
- (_Bool)handleMenuButtonDoubleTap;
- (_Bool)showsSpringBoardStatusBar;
- (_Bool)allowsStackingOfAlert:(id)arg1;
- (int)statusBarStyleOverridesToCancel;
- (long long)statusBarStyle;
- (void)alertDisplayWillBecomeVisible;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)_notificationCenterDidPresent:(id)arg1;
- (void)_notificationCenterWillPresent:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)displayDidDisappear;
- (void)deactivate;
- (void)activate;
- (_Bool)allowSystemGestureAtLocation:(struct CGPoint)arg1;
- (void)shakeSlideToUnlockTextWithCustomText:(id)arg1;
- (void)prepareForMesaUnlockWithCompletion:(id)arg1;
- (_Bool)lockScreenBulletinControllerIsActive;
- (_Bool)lockScreenIsShowingBulletins;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)_isFadeInAnimationInProgress;
- (void)_startFadeInAnimationForBatteryView:(_Bool)arg1;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (void)noteExitingLostMode;
- (void)prepareToEnterLostMode;
- (_Bool)isShowingOverheatUI;
- (void)prepareToReturnToCameraFromCall;
- (void)cancelReturnToCameraAfterCall;
- (_Bool)shouldReturnToCameraAfterCall;
- (void)handlePhoneAppExitedIfNecessary;
- (void)noteStartingPhoneCallWhileUILocked;
- (void)dismissCameraImmediately;
- (void)activateCameraAnimated:(_Bool)arg1;
- (_Bool)cameraIsVisible;
- (_Bool)cameraIsActive;
- (void)finishUIUnlockFromSource:(int)arg1;
- (void)prepareForUIUnlock;
- (void)prepareForExternalUIUnlock;
- (_Bool)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (_Bool)wantsPasscodeLockForUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (id)_effectiveUnlockActionContext;
- (id)currentUnlockActionContext;
- (void)setForcesPasscodeViewDuringCall:(_Bool)arg1;
- (void)setInScreenOffMode:(_Bool)arg1;
- (void)_updateGrabbersForScreenOffMode;
- (_Bool)isInScreenOffMode;
- (_Bool)isLockScreenVisible;
- (id)effectiveCustomSlideToUnlockText;
- (_Bool)lockScreenViewPhonePluginIsActive;
- (void)lockScreenView:(id)arg1 didEndScrollingOnPage:(long long)arg2;
- (void)lockScreenViewWillEndDraggingWithPercentScrolled:(double)arg1 percentScrolledVelocity:(double)arg2 targetScrollPercentage:(double)arg3;
- (void)lockScreenViewDidScrollWithNewScrollPercentage:(double)arg1 tracking:(_Bool)arg2;
- (void)lockScreenViewDidBeginScrolling:(id)arg1;
- (void)lockScreenView:(id)arg1 didScrollToPage:(long long)arg2;
- (_Bool)_disableIdleTimer:(_Bool)arg1;
- (_Bool)wasAutoUnlocked;
- (void)_removeMediaControls;
- (void)_addMediaControls;
- (id)_cameraView;
- (id)viewToAnimateForAlertTransition;
- (void)_removeBatteryChargingView;
- (void)_addBatteryChargingView;
- (void)_removeFullscreenSystemAlertViewAnimated:(_Bool)arg1;
- (void)_addFullscreenSystemAlertViewForSystemNotification:(id)arg1 withTitle:(id)arg2 andSubtitle:(id)arg3;
- (void)_removeNotificationView;
- (void)_addNotificationView;
- (void)_removeModalAlertView;
- (void)_addModalAlertView;
- (void)_removeTimerView;
- (void)_addTimerView;
- (void)_addTimerViewIfNecessary;
- (void)_removeLegalView;
- (void)_addLegalView;
- (void)_removeDateView;
- (void)_addDateView;
- (void)_addRemoveOrChangePasscodeViewIfNecessary;
- (void)_removeRestoreView:(_Bool)arg1;
- (void)_addOrRemoveResetRestoreViewIfNecessary:(_Bool)arg1;
- (id)_currentTextForResetOrRestoreState;
- (void)_removeThermalTrapView:(_Bool)arg1;
- (void)_addOrRemoveThermalTrapViewIfNecessary:(_Bool)arg1;
- (void)_removeBlockedView:(_Bool)arg1;
- (void)_addOrRemoveBlockedViewIfNecessary:(_Bool)arg1;
- (void)_addCameraGrabberIfNecessary;
- (id)_lockScreenViewCreatingIfNecessary;
- (id)lockScreenView;
- (void)_releaseLockScreenView;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
