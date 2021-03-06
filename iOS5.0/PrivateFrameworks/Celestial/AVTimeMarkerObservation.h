/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface AVTimeMarkerObservation : NSObject
{
    id _observer;
    NSArray *_times;
    id _context;
    int _currentIndex;
}

- (id)initWithObserver:(id)arg1 times:(id)arg2 context:(id)arg3 currentIndex:(int)arg4;
- (void)dealloc;
- (BOOL)gotoTime:(double)arg1;
- (double)nextInterestingTime;
- (double)prevInterestingTime;
- (id)observer;
- (id)context;
- (int)currentIndex;

@end

