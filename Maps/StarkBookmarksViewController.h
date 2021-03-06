//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkBookmarksViewController : StarkTableViewController <StarkContentController>
{
    CDUnknownBlockType _completion;
    UIBarButtonItem *_doneBarButtonItem;
    _Bool _loading;
    StarkRouteLoadingLabel *_loadingView;
    struct MSPOngoingFetchRequest *_favorites;
}

- (void).cxx_destruct;
- (_Bool)shouldTimeoutAfterDisconnect;
- (void)_done;
@property(readonly, nonatomic) UIBarButtonItem *doneBarButtonItem;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_bookmarksDidChange;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)_bookmarkForCellIndex:(long long)arg1;
- (id)_allBookmarks;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)noContentView;
- (void)_updateLoading;
- (void)modeWillPop;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end