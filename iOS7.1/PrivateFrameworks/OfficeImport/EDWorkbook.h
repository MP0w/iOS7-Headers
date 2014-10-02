//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCDDocument.h>

@class ECMappingContext, EDProcessors, EDReference, EDResources, EDWarnings, ESDContainer, NSDate, NSMutableArray, NSString, OADTheme;

__attribute__((visibility("hidden")))
@interface EDWorkbook : OCDDocument
{
    EDResources *mResources;
    NSMutableArray *mOtherResources;
    EDProcessors *mProcessors;
    ECMappingContext *mMappingContext;
    EDWarnings *mWarnings;
    NSMutableArray *mSheets;
    EDReference *mVisibleRange;
    unsigned int mActiveSheetIndex;
    NSDate *mDateBaseDate;
    unsigned int mDateBase;
    NSString *mFileName;
    NSString *mTemporaryDirectory;
    OADTheme *mTheme;
    ESDContainer *mEscherDrawingGroup;
}

- (void)setTheme:(id)arg1;
- (id)theme;
- (id)warnings;
- (void)applyProcessors;
- (id)processors;
- (void)setMappingContext:(id)arg1;
- (id)mappingContext;
- (void)setActiveSheet:(id)arg1;
- (id)activeSheet;
- (void)addSheet:(id)arg1;
- (unsigned int)indexOfSheetWithName:(id)arg1;
- (unsigned int)indexOfSheet:(id)arg1;
- (id)sheetAtIndex:(unsigned int)arg1 loadIfNeeded:(_Bool)arg2;
- (id)sheetAtIndex:(unsigned int)arg1;
- (unsigned int)sheetCount;
- (void)setVisibleRange:(id)arg1;
- (id)visibleRange;
- (void)setDateBase:(unsigned int)arg1;
- (unsigned int)dateBase;
- (id)dateBaseDate;
- (void)setTemporaryDirectory:(id)arg1;
- (id)temporaryDirectory;
- (id)fileName;
- (id)workbookName;
- (void)addOtherResources:(id)arg1;
- (void)setResources:(id)arg1;
- (id)resources;
- (void)dealloc;
- (id)initWithFileName:(id)arg1 andStringOptimization:(_Bool)arg2;
- (id)initWithStringOptimization:(_Bool)arg1;
- (id)init;
- (void)removeWorksheetAtIndex:(unsigned int)arg1;
- (void)setEscherDrawingGroup:(id)arg1;
- (id)escherDrawingGroup;
- (void)reduceMemoryIfPossible;
- (void)setActiveSheetIndex:(unsigned int)arg1;
- (unsigned int)activeSheetIndex;

@end
