/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PKPassLibrary;

@interface WLPassesStore : NSObject
{
    PKPassLibrary *_cardLibrary;
}

- (void)cardRemovedWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)cardAddedWithUniqueID:(id)arg1;
- (void)cardChangedWithUniqueID:(id)arg1;
- (void)ingestCardData:(id)arg1 settings:(int)arg2 completionHandler:(id)arg3;
- (void)removeCardWithUniqueID:(id)arg1;
- (void)fetchCardFromServerWithUniqueID:(id)arg1 handler:(id)arg2;
- (void)introduceDatabaseIntegrityProblem;
- (void)addFakeBulletin;
- (void)nukeDatabaseAndExit;
- (id)cardWithBundleID:(id)arg1 identifier:(id)arg2;
- (void)cardsWithHandler:(id)arg1;
- (id)cards;
- (void)dealloc;
- (id)init;

@end

