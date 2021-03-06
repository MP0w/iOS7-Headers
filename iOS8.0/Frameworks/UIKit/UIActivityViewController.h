//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SFAirDropActivityViewControllerDelegate.h"
#import "UIActivityGroupViewControllerDelegate.h"
#import "UIAlertControllerContaining.h"
#import "UIViewControllerRestoration.h"

@class NSArray, NSOperationQueue, NSString, SFAirDropActivityViewController, UIActivity, UIAlertController, _UIActivityApplicationExtensionDiscovery, _UIActivityGroupListViewController, _UIAlertControllerShimPresenter;

@interface UIActivityViewController : UIViewController <UIViewControllerRestoration, UIAlertControllerContaining, UIActivityGroupViewControllerDelegate, SFAirDropActivityViewControllerDelegate>
{
    BOOL _useBlackPopoverStyle;
    BOOL _showKeyboardAutomatically;
    BOOL _allowsEmbedding;
    BOOL _airdropped;
    BOOL _willDismissActivityViewController;
    BOOL _performActivityForStateRestoration;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _completionWithItemsHandler;
    NSArray *_excludedActivityTypes;
    UIActivity *_activity;
    NSArray *_includedActivityTypes;
    int _excludedActivityCategories;
    NSArray *_activityTypeOrder;
    NSString *_mailAutosaveIdentifier;
    CDUnknownBlockType _preCompletionHandler;
    id <UIActivityViewControllerDelegate> _airDropDelegate;
    UIViewController *_activityViewController;
    NSArray *_activityItems;
    NSArray *_applicationActivities;
    UIAlertController *_activityAlertController;
    _UIAlertControllerShimPresenter *_activityAlertControllerShimPresenter;
    _UIActivityGroupListViewController *_activityGroupListViewController;
    NSOperationQueue *_activityItemProviderOperationQueue;
    int _totalProviderCount;
    int _completedProviderCount;
    unsigned int _backgroundTaskIdentifier;
    int _originalPopoverBackgroundStyle;
    Class _originalPopoverBackgroundViewClass;
    NSString *_subject;
    SFAirDropActivityViewController *_airDropViewController;
    CDUnknownBlockType __popoverDismissalAction;
    _UIActivityApplicationExtensionDiscovery *_applicationExtensionDiscovery;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (id)_activeActivityViewControllers;
+ (id)_attachmentNameForActivityItem:(id)arg1 activity:(id)arg2;
+ (id)_thumbnailImageForActivityItem:(id)arg1 activity:(id)arg2;
+ (id)_dataTypeIdentifierForActivityItem:(id)arg1 activity:(id)arg2;
+ (id)_itemProviderForActivityItem:(id)arg1 typeIdentifier:(id)arg2 activity:(id)arg3;
+ (id)_subjectForActivityItem:(id)arg1 activity:(id)arg2;
+ (void)_clearActivityItems:(id)arg1;
+ (void)_addActivityItem:(id)arg1 activityViewController:(id)arg2 originalActivityItem:(id)arg3;
+ (void)_reloadImageForActivity:(id)arg1;
@property(nonatomic) BOOL performActivityForStateRestoration; // @synthesize performActivityForStateRestoration=_performActivityForStateRestoration;
@property(retain, nonatomic) _UIActivityApplicationExtensionDiscovery *applicationExtensionDiscovery; // @synthesize applicationExtensionDiscovery=_applicationExtensionDiscovery;
@property(nonatomic) BOOL willDismissActivityViewController; // @synthesize willDismissActivityViewController=_willDismissActivityViewController;
@property(copy, nonatomic) CDUnknownBlockType _popoverDismissalAction; // @synthesize _popoverDismissalAction=__popoverDismissalAction;
@property(nonatomic) BOOL airdropped; // @synthesize airdropped=_airdropped;
@property(retain, nonatomic) SFAirDropActivityViewController *airDropViewController; // @synthesize airDropViewController=_airDropViewController;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) Class originalPopoverBackgroundViewClass; // @synthesize originalPopoverBackgroundViewClass=_originalPopoverBackgroundViewClass;
@property(nonatomic) int originalPopoverBackgroundStyle; // @synthesize originalPopoverBackgroundStyle=_originalPopoverBackgroundStyle;
@property(nonatomic) unsigned int backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(nonatomic) int completedProviderCount; // @synthesize completedProviderCount=_completedProviderCount;
@property(nonatomic) int totalProviderCount; // @synthesize totalProviderCount=_totalProviderCount;
@property(retain, nonatomic) NSOperationQueue *activityItemProviderOperationQueue; // @synthesize activityItemProviderOperationQueue=_activityItemProviderOperationQueue;
@property(retain, nonatomic) _UIActivityGroupListViewController *activityGroupListViewController; // @synthesize activityGroupListViewController=_activityGroupListViewController;
@property(retain, nonatomic) _UIAlertControllerShimPresenter *activityAlertControllerShimPresenter; // @synthesize activityAlertControllerShimPresenter=_activityAlertControllerShimPresenter;
@property(retain, nonatomic) UIAlertController *activityAlertController; // @synthesize activityAlertController=_activityAlertController;
@property(copy, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(copy, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property(retain, nonatomic) UIViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(nonatomic) id <UIActivityViewControllerDelegate> airDropDelegate; // @synthesize airDropDelegate=_airDropDelegate;
@property(copy, nonatomic) CDUnknownBlockType preCompletionHandler; // @synthesize preCompletionHandler=_preCompletionHandler;
@property(retain, nonatomic) NSString *mailAutosaveIdentifier; // @synthesize mailAutosaveIdentifier=_mailAutosaveIdentifier;
@property(nonatomic) BOOL allowsEmbedding; // @synthesize allowsEmbedding=_allowsEmbedding;
@property(copy, nonatomic) NSArray *activityTypeOrder; // @synthesize activityTypeOrder=_activityTypeOrder;
@property(nonatomic) int excludedActivityCategories; // @synthesize excludedActivityCategories=_excludedActivityCategories;
@property(copy, nonatomic) NSArray *includedActivityTypes; // @synthesize includedActivityTypes=_includedActivityTypes;
@property(nonatomic) BOOL showKeyboardAutomatically; // @synthesize showKeyboardAutomatically=_showKeyboardAutomatically;
@property(nonatomic) BOOL useBlackPopoverStyle; // @synthesize useBlackPopoverStyle=_useBlackPopoverStyle;
@property(retain, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
@property(copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(copy, nonatomic) CDUnknownBlockType completionWithItemsHandler; // @synthesize completionWithItemsHandler=_completionWithItemsHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (void)airDropActivityRequestingSharedItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)activityGroupViewController:(id)arg1 didSelectActivity:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cancel;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_setDarkStyleOnLegacyApp;
- (void)_setPopoverController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_performActivity:(id)arg1;
- (void)_performActivityOfType:(id)arg1;
- (void)_prepareActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareActivity:(id)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)_resetAfterActivity:(BOOL)arg1;
- (void)_executeActivity;
- (void)_removeFromActiveActivityViewControllers;
- (void)_addToActiveActivityViewControllers;
- (void)_mailAutosaveWithHandler:(CDUnknownBlockType)arg1;
- (void)_cleanupActivityWithSuccess:(BOOL)arg1;
- (void)_cleanupActivityWithSuccess:(BOOL)arg1 items:(id)arg2 error:(id)arg3;
@property(readonly, nonatomic) BOOL sourceIsManaged;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (float)_displayHeight;
- (id)_containedAlertController;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (BOOL)_requiresCustomPresentationController;
- (id)_newActivityGroupViewControllerForItems:(id)arg1 category:(int)arg2;
- (void)viewDidLoad;
- (void)_updateActivities:(id)arg1 animated:(BOOL)arg2;
- (void)_updateActivityItems:(id)arg1 animated:(BOOL)arg2;
- (void)_updateActivityItems:(id)arg1;
- (id)_availableActivities;
- (id)_availableActivitiesForItems:(id)arg1 applicationExtensionActivities:(id)arg2;
- (id)_availableActivitiesForItems:(id)arg1;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (id)_activityItemValues;
- (void)dealloc;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (void)_reloadImageForActivity:(id)arg1;
- (void)_notifyReloadImageForActivity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

