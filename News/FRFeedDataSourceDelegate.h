//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol FRFeedDataSourceDelegate <NSObject>
- (UIViewController *)feedCollectionViewControllerForDataSource:(FRFeedDataSource *)arg1;
- (FRFeedViewContext *)feedViewContextForDataSource:(FRFeedDataSource *)arg1;
- (long long)feedDataSourceOfflineReason:(FRFeedDataSource *)arg1;
- (_Bool)feedDataSourceShouldAppearOffline:(FRFeedDataSource *)arg1;
- (_Bool)shouldSkipLayoutPersistenceForFeedDataSource:(FRFeedDataSource *)arg1;
- (void)updateLoadingStatus;
- (void)feedDataSourceFailedToRefreshFeed;
- (NSArray *)feedDataSource:(FRFeedDataSource *)arg1 accessibilityCustomActionsForCell:(FRFeedCollectionViewCell *)arg2;
- (void)feedDataSource:(FRFeedDataSource *)arg1 playButtonPressedForVideoCell:(FRFeedVideoCollectionViewCell *)arg2;
- (void)feedDataSource:(FRFeedDataSource *)arg1 showActionMenuControlAtPoint:(struct CGPoint)arg2 inCell:(FRFeedCollectionViewCell *)arg3;
- (void)feedDataSource:(FRFeedDataSource *)arg1 cell:(FRFeedCollectionViewCell *)arg2 movedToWindow:(UIWindow *)arg3;
- (void)feedDataSource:(FRFeedDataSource *)arg1 promptForMarkingAsUnoffensive:(FRFeedCollectionViewCell *)arg2;
- (void)feedDataSource:(FRFeedDataSource *)arg1 didChangeHeadlineCountAtTop:(long long)arg2 scrolledToTop:(_Bool)arg3;
- (void)feedDataSourceDidReachEndOfFeed:(FRFeedDataSource *)arg1;
- (void)feedDataSourceWillPresentContent:(FRFeedDataSource *)arg1 animated:(_Bool)arg2;
- (void)feedDataSourceWantsToCoverContent:(FRFeedDataSource *)arg1 animated:(_Bool)arg2;
- (_Bool)isLoadingCoverOverCollectionViewForFeedDataSource:(FRFeedDataSource *)arg1;

@optional
- (UIViewController<FRFeedRecommendationViewDelegate> *)feedPresentingViewController;
@end