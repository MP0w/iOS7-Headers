//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLSlalomRampConfiguration;

@interface PLSlalomConfiguration : NSObject
{
    float _rate;
    float _volumeDuringSlalom;
    float _volumeDuringRampToSlalom;
    PLSlalomRampConfiguration *_rampDown;
    PLSlalomRampConfiguration *_rampUp;
}

@property(readonly, nonatomic) PLSlalomRampConfiguration *rampUp; // @synthesize rampUp=_rampUp;
@property(readonly, nonatomic) PLSlalomRampConfiguration *rampDown; // @synthesize rampDown=_rampDown;
@property(nonatomic) float volumeDuringRampToSlalom; // @synthesize volumeDuringRampToSlalom=_volumeDuringRampToSlalom;
@property(nonatomic) float volumeDuringSlalom; // @synthesize volumeDuringSlalom=_volumeDuringSlalom;
@property(nonatomic) float rate; // @synthesize rate=_rate;
- (void)dealloc;
- (id)init;

@end

