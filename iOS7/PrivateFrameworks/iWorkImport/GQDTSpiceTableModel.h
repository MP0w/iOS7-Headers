/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDTTableModel.h>

@interface GQDTSpiceTableModel : GQDTTableModel
{
}

+ (const struct StateSpec *)stateForReading;
- (struct __CFArray *)createSizeArrayFromPositionVector:(vector_f9ed6fc8 *)arg1;
- (int)setColumnWidthsFromState:(id)arg1;
- (int)setRowHeightsFromState:(id)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end
