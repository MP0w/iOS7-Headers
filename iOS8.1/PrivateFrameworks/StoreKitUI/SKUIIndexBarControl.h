//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSDictionary, NSIndexPath, NSMapTable, SKUIIndexBarEntry;

@interface SKUIIndexBarControl : UIControl
{
    SKUIIndexBarEntry *_combinedEntry;
    BOOL _didSendPastBottom;
    BOOL _didSendPastTop;
    NSArray *_displayEntries;
    BOOL _hasValidCombinedEntry;
    BOOL _hasValidDisplayEntries;
    BOOL _hasValidNumberOfSections;
    BOOL _hasValidTotalEntryCount;
    BOOL _hasValidTotalSize;
    NSMapTable *_indexPathToEntryMapTable;
    NSIndexPath *_lastSelectedIndexPath;
    int _numberOfSections;
    NSMapTable *_sectionIndexToNumberOfEntriesMapTable;
    int _totalEntryCount;
    struct CGSize _totalSize;
    CDStruct_2ba00048 _dataSourceDelegateFlags;
    id <SKUIIndexBarControlDataSource> _dataSource;
    NSDictionary *_defaultTextAttributes;
    id <SKUIIndexBarControlDelegate> _delegate;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

@property(nonatomic) __weak id <SKUIIndexBarControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *defaultTextAttributes; // @synthesize defaultTextAttributes=_defaultTextAttributes;
@property(nonatomic) __weak id <SKUIIndexBarControlDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void).cxx_destruct;
- (struct CGRect)_visibleBounds;
- (struct CGSize)_totalSize;
- (int)_totalEntryCount;
- (struct CGSize)_sizeForEntryAtIndexPath:(id)arg1;
- (struct CGSize)_sizeForEntries:(id)arg1;
- (void)_sendSelectionForTouch:(id)arg1 withEvent:(id)arg2;
- (int)_numberOfSections;
- (void)_invalidateDisplayEntries;
- (id)_entryAtIndexPath:(id)arg1;
- (id)_displayEntriesThatFitInViewForGroupedEntries;
- (id)_displayEntries;
- (void)_configureNewEntry:(id)arg1;
- (id)_combinedEntry;
- (int)_numberOfEntriesInSection:(int)arg1;
- (void)_enumerateEntryIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_allRequiredEntries;
- (id)_allEntries;
- (void)reloadSections:(id)arg1;
- (void)reloadEntryAtIndexPath:(id)arg1;
- (void)reloadData;
- (void)reloadCombinedEntry;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

