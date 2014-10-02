//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSCH3DGLPointerCountedSet;

__attribute__((visibility("hidden")))
@interface TSCH3DGLStatisticsData : NSObject
{
    TSCH3DGLPointerCountedSet *mShadersUseCount;
    TSCH3DGLPointerCountedSet *mGeometryUseCount;
    unsigned int mFrames;
}

+ (id)statisticsData;
@property(nonatomic) unsigned int frames; // @synthesize frames=mFrames;
- (void)drawGeometry:(id)arg1;
- (void)activateShader:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
