//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRTagSearchMoreResultsViewController : UIViewController <FCSubscriptionObserving, FRStoryboardRestorableViewController, UITableViewDataSource, UITableViewDelegate, UIViewControllerPreviewingDelegate>
{
    _Bool _isLoading;
    id <FRFeldsparContext> _context;
    FRTagSearchResults *_searchResults;
    unsigned long long _searchResultsType;
    UITableView *_tableView;
    UIScrollView *_scrollView;
    id <UIViewControllerPreviewing> _previewingContext;
}

+ (id)storyboardIdentifier;
+ (id)searchMoreResultsViewControllerWithContext:(id)arg1 searchResults:(id)arg2 searchResultsType:(unsigned long long)arg3 storyboard:(id)arg4;
@property(retain, nonatomic) id <UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) unsigned long long searchResultsType; // @synthesize searchResultsType=_searchResultsType;
@property(retain, nonatomic) FRTagSearchResults *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) __weak id <FRFeldsparContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 removeTags:(id)arg4;
- (void)toggleSubscription:(id)arg1;
- (unsigned long long)numberOfSearchResults;
- (id)tagForItemAtIndexPath:(id)arg1;
- (void)loadMoreSearchResultsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end