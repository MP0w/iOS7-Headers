//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegSignInController.h>

@class CNFRegSigninLearnMoreView;

@interface CNFRegSplashSignInController : CNFRegSignInController
{
    CNFRegSigninLearnMoreView *_signInView;
}

- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)_existingLearnMoreViewForSection:(int)arg1;
- (id)_existingLearnMoreViewForSpecifier:(id)arg1;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)passwordIsEmpty;
- (void)setPasswordText:(id)arg1;
- (id)passwordTextField;
- (BOOL)usernameIsEmpty;
- (void)setUsernameText:(id)arg1;
- (id)usernameTextField;
- (void)viewDidLoad;
- (id)specifierList;
- (void)viewWillAppear:(BOOL)arg1;

@end

