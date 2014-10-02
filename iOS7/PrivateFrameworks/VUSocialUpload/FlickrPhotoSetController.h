/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "FlickrPhotoSetTableDelegate-Protocol.h"

@class FlickrPhotoSetManager, NSString;

@interface FlickrPhotoSetController : UITableViewController <FlickrPhotoSetTableDelegate>
{
    id <FlickrComposeOptionViewDelegate> _delegate;
    FlickrPhotoSetManager *_manager;
    long long _photoSetID;
    NSString *_photoSetTitle;
    long long _selectedIndexRow;
}

@property(nonatomic) long long selectedIndexRow; // @synthesize selectedIndexRow=_selectedIndexRow;
@property(readonly, nonatomic) NSString *photoSetTitle; // @synthesize photoSetTitle=_photoSetTitle;
@property(readonly, nonatomic) long long photoSetID; // @synthesize photoSetID=_photoSetID;
@property(retain, nonatomic) FlickrPhotoSetManager *manager; // @synthesize manager=_manager;
@property(nonatomic) id <FlickrComposeOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadData;
- (void)dealloc;
- (id)initWithPhotoSetManager:(id)arg1;

@end
