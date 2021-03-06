/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMCore/IMAccountController.h>

@interface IMAccountController (QuickAccountAccess)
@property(readonly, nonatomic) id jabberAccount;
@property(readonly, nonatomic) id aimAccount;
@property(readonly, nonatomic) id mostLoggedInAccount;
- (id)anyConnectedAccountForService:(id)arg1;
- (id)anyActiveAccountForService:(id)arg1;
- (id)anyAccountForService:(id)arg1;
- (id)anyConnectedAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)anyActiveAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)anyAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)anyAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3;
@end

