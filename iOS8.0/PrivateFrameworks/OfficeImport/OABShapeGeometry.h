//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OABShapeGeometry : NSObject
{
}

+ (void)writeFromShape:(id)arg1 toShape:(struct EshShape *)arg2;
+ (void)writeTextBodyRectsFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;
+ (void)writeFormulasFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;
+ (void)writePathCommandsAndParamsFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;
+ (void)appendAdjustPoint:(struct OADAdjustPoint)arg1 toPathParams:(struct EshPathParamTable *)arg2;
+ (void)writeLimoFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;
+ (void)writeCoordSpaceFromGeometry:(id)arg1 toShape:(struct EshShape *)arg2;
+ (void)writeAdjustValuesFromGeometry:(id)arg1 toShapeProperties:(struct EshShapeProperties *)arg2;
+ (struct EshComputedValue)computedValueWithAdjustCoord:(struct OADAdjustCoord)arg1;
+ (void)readFromLimo:(CsPoint_c846a6ec)arg1 toGeometry:(id)arg2;
+ (void)readFromTextBoxRects:(const EshTablePropVal_64904f96 *)arg1 toGeometry:(id)arg2;
+ (void)readFromFormulas:(const EshTablePropVal_f007a3b0 *)arg1 toGeometry:(id)arg2;
+ (void)readFromPathCommands:(const EshTablePropVal_ea625207 *)arg1 pathParams:(const struct EshPathParamTable *)arg2 toGeometry:(id)arg3;
+ (void)readFromShape:(struct EshShape *)arg1 toShape:(id)arg2;
+ (int)actualPathCommandForPathCommand:(int)arg1 index:(unsigned short)arg2;
+ (void)readLimoFromPath:(const struct EshPath *)arg1 toGeometry:(id)arg2;
+ (void)readPathCommandsAndParamsFromPath:(const struct EshPath *)arg1 toGeometry:(id)arg2;
+ (struct OADAdjustCoord)adjustCoordWithComputedValue:(struct EshComputedValue)arg1;
+ (void)readGeometryCoordSpaceFromShapeProperties:(const struct EshShapeProperties *)arg1 toGeometry:(id)arg2;
+ (void)readAdjustValuesFromShapeProperties:(const struct EshShapeProperties *)arg1 toGeometry:(id)arg2;

@end
