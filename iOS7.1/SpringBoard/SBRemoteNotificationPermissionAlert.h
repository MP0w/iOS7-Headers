//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class SBApplication;

@interface SBRemoteNotificationPermissionAlert : SBAlertItem
{
    SBApplication *_app;
    unsigned long long _types;
}

- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 notificationTypes:(unsigned long long)arg2;

@end

