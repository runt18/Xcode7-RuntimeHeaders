//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKGameProfileCollectionViewController : GKCollectionViewController <UIViewControllerRestoration, UIPopoverPresentationControllerDelegate>
{
    _Bool _purchasableGame;
    _Bool _shouldHideHeader;
    _Bool _shouldHideSegment;
    _Bool _shouldUpdateShowcaseRowInUpdateMetrics;
    _Bool _firstAppearance;
    id <GKGameProfileCollectionViewControllerServiceDelegate> _serviceDelegateWeak;
    GKGameRecord *_game;
    GKGameRecommendationInternal *_recommendation;
    long long _viewState;
    NSString *_leaderboardIdentifier;
    long long _leaderboardTimeScope;
    GKSegmentedSectionDataSource *_segmentedDataSource;
    GKAchievementsDataSource *_achievementsDataSource;
    GKChallengesDataSource *_challengesDataSource;
    GKCollectionViewDataSource *_leaderboardDataSource;
    UICollectionReusableView *_headerView;
    GKSupplementaryViewMetrics *_segmentedControlMetrics;
    GKLeaderboardScoresDataSource *_globalLeaderboardDataSource;
    GKLeaderboardScoresDataSource *_friendsLeaderboardDataSource;
    GKLeaderboardHeaderView *_leaderboardHeader;
    GKCollectionViewAggregateDataSource *_playersDataSource;
    GKFriendPlayersDataSource *_friendPlayersDataSource;
    GKGameRecentPlayersDataSource *_recentPlayersDataSource;
    NSArray *_actionSheetActions;
    long long _numberOfLeaderboardColumnsPortrait;
    long long _numberOfLeaderboardColumnsLandscape;
    UIActivityViewController *_currentActivityViewController;
    UIViewController *_friendSuggestionPresentedViewController;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) UIViewController *friendSuggestionPresentedViewController; // @synthesize friendSuggestionPresentedViewController=_friendSuggestionPresentedViewController;
@property(retain, nonatomic) UIActivityViewController *currentActivityViewController; // @synthesize currentActivityViewController=_currentActivityViewController;
@property(nonatomic) _Bool firstAppearance; // @synthesize firstAppearance=_firstAppearance;
@property(nonatomic) long long numberOfLeaderboardColumnsLandscape; // @synthesize numberOfLeaderboardColumnsLandscape=_numberOfLeaderboardColumnsLandscape;
@property(nonatomic) long long numberOfLeaderboardColumnsPortrait; // @synthesize numberOfLeaderboardColumnsPortrait=_numberOfLeaderboardColumnsPortrait;
@property(retain, nonatomic) NSArray *actionSheetActions; // @synthesize actionSheetActions=_actionSheetActions;
@property(retain, nonatomic) GKGameRecentPlayersDataSource *recentPlayersDataSource; // @synthesize recentPlayersDataSource=_recentPlayersDataSource;
@property(retain, nonatomic) GKFriendPlayersDataSource *friendPlayersDataSource; // @synthesize friendPlayersDataSource=_friendPlayersDataSource;
@property(retain, nonatomic) GKCollectionViewAggregateDataSource *playersDataSource; // @synthesize playersDataSource=_playersDataSource;
@property(retain, nonatomic) GKLeaderboardHeaderView *leaderboardHeader; // @synthesize leaderboardHeader=_leaderboardHeader;
@property(retain, nonatomic) GKLeaderboardScoresDataSource *friendsLeaderboardDataSource; // @synthesize friendsLeaderboardDataSource=_friendsLeaderboardDataSource;
@property(retain, nonatomic) GKLeaderboardScoresDataSource *globalLeaderboardDataSource; // @synthesize globalLeaderboardDataSource=_globalLeaderboardDataSource;
@property(retain, nonatomic) GKSupplementaryViewMetrics *segmentedControlMetrics; // @synthesize segmentedControlMetrics=_segmentedControlMetrics;
@property(nonatomic) _Bool shouldUpdateShowcaseRowInUpdateMetrics; // @synthesize shouldUpdateShowcaseRowInUpdateMetrics=_shouldUpdateShowcaseRowInUpdateMetrics;
@property(retain, nonatomic) UICollectionReusableView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool shouldHideSegment; // @synthesize shouldHideSegment=_shouldHideSegment;
@property(nonatomic) _Bool shouldHideHeader; // @synthesize shouldHideHeader=_shouldHideHeader;
@property(retain, nonatomic) GKCollectionViewDataSource *leaderboardDataSource; // @synthesize leaderboardDataSource=_leaderboardDataSource;
@property(retain, nonatomic) GKChallengesDataSource *challengesDataSource; // @synthesize challengesDataSource=_challengesDataSource;
@property(retain, nonatomic) GKAchievementsDataSource *achievementsDataSource; // @synthesize achievementsDataSource=_achievementsDataSource;
@property(retain, nonatomic) GKSegmentedSectionDataSource *segmentedDataSource; // @synthesize segmentedDataSource=_segmentedDataSource;
@property(nonatomic) long long leaderboardTimeScope; // @synthesize leaderboardTimeScope=_leaderboardTimeScope;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) GKGameRecommendationInternal *recommendation; // @synthesize recommendation=_recommendation;
@property(getter=isPurchasableGame) _Bool purchasableGame; // @synthesize purchasableGame=_purchasableGame;
@property(retain, nonatomic) GKGameRecord *game; // @synthesize game=_game;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)showChallenge:(id)arg1 fromIndexPath:(id)arg2;
- (void)showPlayer:(id)arg1 fromIndexPath:(id)arg2;
- (void)showLeaderboardSet:(id)arg1;
- (void)showLeaderboard:(id)arg1;
- (void)showScore:(id)arg1 fromCell:(id)arg2 leaderboard:(id)arg3 animated:(_Bool)arg4;
- (void)showScore:(id)arg1 fromIndexPath:(id)arg2;
- (void)didTouchShowcaseGlobal:(id)arg1;
- (void)didTouchShowcaseFriends:(id)arg1;
- (void)showAchievementDetails:(id)arg1 fromIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)popoverArrowDirectionsForViewController:(id)arg1;
- (void)presentNavigationControllerInPopover:(id)arg1 fromCell:(id)arg2 subview:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentPopoverForViewController:(id)arg1 fromCell:(id)arg2 subview:(id)arg3 permittedArrowDirections:(unsigned long long)arg4;
- (void)playGame;
- (void)uninstallGame;
- (void)removeGame;
- (void)shareGame;
- (void)buyGame;
- (void)showActions:(id)arg1;
- (void)dismissPopovers;
- (void)updateRightBarButtonItem;
- (void)selectDataSource:(id)arg1;
- (void)setupSegmentedPlaceholderView;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)applyViewState;
- (void)updateMetrics;
- (void)updateDynamicColumnCountsForViewSize:(struct CGSize)arg1;
- (void)updateHeaderHeightForViewSize:(struct CGSize)arg1;
- (void)adaptFriendSuggestionPopoverForTransitionToRegularWidth;
- (void)adaptFriendSuggestionPopoverForTransitionToCompactWidth;
- (void)dismissPresentedViewControllerIfNeeded;
- (_Bool)isChildOfActiveTabBarViewController;
- (void)_gkMasterDetailViewControllerWillTransitionToTraitCollection:(id)arg1 transitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (double)headerHeightForViewSize:(struct CGSize)arg1;
- (void)configureViewFactories;
- (void)configureLeaderboardHeader:(id)arg1;
- (void)configureAchievementsSectionHeader:(id)arg1;
- (void)configureLeaderboardSetsSectionHeader:(id)arg1;
- (void)configureLeaderboardCategoriesSectionHeader:(id)arg1;
- (void)configureRecentPlayersSectionHeader:(id)arg1;
- (void)configureFriendPlayersSectionHeader:(id)arg1;
- (void)configureChallengesSectionHeader:(id)arg1;
- (void)configureGameDetailHeaderView:(id)arg1;
- (void)headerViewDidLoad;
- (void)configureDataSource;
- (Class)cellClassForLeaderboardDataSource;
- (void)didEnterNoContentState;
- (void)didExitRefreshingState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)configureLeaderboardDataSource;
- (void)setLeaderboard:(id)arg1;
- (void)setTimeScope:(long long)arg1;
- (void)timeScopePressed:(id)arg1;
- (void)dismissLeaderboardList;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)leaderboardPressed:(id)arg1;
- (void)didTouchShowMoreGlobal:(id)arg1;
- (void)didTouchShowMoreFriends:(id)arg1;
- (void)addShowcaseCellToMetrics:(id)arg1;
- (void)updateShowcaseRowVisibility;
- (id)segmentedDataSourceForGame:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)systemContentSizeSettingDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) id <GKGameProfileCollectionViewControllerServiceDelegate> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegateWeak;
- (void)dealloc;
- (id)initWithGame:(id)arg1 viewState:(long long)arg2 purchasableGame:(_Bool)arg3;
- (id)initWithGame:(id)arg1 purchasableGame:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end