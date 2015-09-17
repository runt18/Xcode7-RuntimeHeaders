//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkDestinationsViewController : StarkTableViewController <StarkContentController>
{
    id <HistoryUIHold> _historyHold;
    NSArray *_suggestions;
    CDUnknownBlockType _completion;
    StarkRouteLoadingLabel *_loadingView;
    UINavigationItem *_navigationItem;
    UIView *_noContentView;
    UIBarButtonItem *_searchButton;
    _Bool _loading;
    NSArray *_recents;
}

@property(retain, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
- (void).cxx_destruct;
- (_Bool)shouldTimeoutAfterDisconnect;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)_stopLiveUpdating;
- (void)showSearch;
- (void)showBookmarks;
- (id)_directionsHomeHistoryItem;
- (void)done;
- (void)_recentsChanged:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)navigationItem;
- (void)_updateLoading;
- (void)modeWillPop;
- (void)dealloc;
- (id)noContentView;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_sendSearchCancelFeedback;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end