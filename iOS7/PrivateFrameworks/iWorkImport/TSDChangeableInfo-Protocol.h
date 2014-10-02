/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "TSDInfo-Protocol.h"

@protocol TSDChangeableInfo <TSDInfo>
@property(readonly, nonatomic) _Bool isUserModifiable;
- (id)endCollectingChanges;
- (void)willChangeProperty:(int)arg1;
- (void)beginCollectingChanges;

@optional
@property(readonly, nonatomic) Class editorClass;
- (void)willChangeProperties:(id)arg1;
@end
