/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSString, PUActivityItemSource;

@interface PUActivityItemSourceOperation : NSOperation
{
    NSString *__activityType;
    PUActivityItemSource *__activityItemSource;
}

@property(nonatomic, setter=_setActivityItemSource:) __weak PUActivityItemSource *_activityItemSource; // @synthesize _activityItemSource=__activityItemSource;
@property(copy, nonatomic, setter=_setActivityType:) NSString *_activityType; // @synthesize _activityType=__activityType;
- (void).cxx_destruct;
- (void)main;
- (id)init;
- (id)initWithActivityItemSource:(id)arg1 activityType:(id)arg2;

@end

