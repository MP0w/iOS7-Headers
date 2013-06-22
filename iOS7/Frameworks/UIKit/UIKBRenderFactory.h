/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, UIKBRenderConfig;

@interface UIKBRenderFactory : NSObject
{
    UIKBRenderConfig *_renderConfig;
    NSMutableArray *_segmentTraits;
    float _rivenSizeFactor;
    BOOL _lightweightFactory;
}

+ (id)segmentedControlColor:(BOOL)arg1;
+ (id)lightweightFactoryForVisualStyle:(CDStruct_961fb75c)arg1 renderConfig:(id)arg2;
+ (id)factoryForVisualStyle:(CDStruct_961fb75c)arg1 renderConfig:(id)arg2;
+ (Class)factoryClassForVisualStyle:(CDStruct_961fb75c)arg1;
+ (BOOL)_enabled;
@property(nonatomic) BOOL lightweightFactory; // @synthesize lightweightFactory=_lightweightFactory;
@property(nonatomic) float rivenSizeFactor; // @synthesize rivenSizeFactor=_rivenSizeFactor;
@property(readonly, nonatomic) NSArray *segmentTraits; // @synthesize segmentTraits=_segmentTraits;
@property(readonly, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
- (id)thinTextFontName;
- (id)lightTextFontName;
- (id)thinKeycapsFontName;
- (id)lightKeycapsFontName;
- (id)controlKeyBackgroundColorName;
- (id)defaultKeyBackgroundColorName;
- (id)cacheKeyForString:(id)arg1 withRenderFlags:(int)arg2;
- (void)removeAllLayoutSegments;
- (void)addLayoutSegment:(id)arg1;
- (BOOL)useBlueThemingForKey:(id)arg1;
- (BOOL)shouldClearBaseDisplayStringForVariants;
- (id)displayContentsForKey:(id)arg1;
- (id)muttitapReverseKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2;
- (id)traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (void)setupLayoutSegments;
- (void)scaleTraits:(id)arg1;
- (float)RivenFactor:(float)arg1;
- (id)initWithRenderConfig:(id)arg1 skipLayoutSegments:(BOOL)arg2;
- (void)dealloc;

@end
