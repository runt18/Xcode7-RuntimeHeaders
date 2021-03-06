//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKChallengesViewController : GKCollectionViewController <UIStateRestoring, GKMasterDetailViewControllerDelegate>
{
    GKPlayer *_player;
    GKGame *_game;
    GKChallenge *_selectedChallenge;
}

+ (id)challengesControllerForPlayer:(id)arg1 inGame:(id)arg2;
+ (id)challengesControllerForPlayer:(id)arg1;
@property(retain, nonatomic) GKChallenge *selectedChallenge; // @synthesize selectedChallenge=_selectedChallenge;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configureShowMore:(id)arg1;
- (void)configureSectionHeader:(id)arg1 indexPath:(id)arg2;
- (void)configureViewFactories;
- (void)configureDataSource;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)getSelectedChallenge:(id *)arg1 getIndexPath:(id *)arg2;
- (id)preservedIndexPathForSelectedItem;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)didEnterNoContentState;
- (void)loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
@property(readonly) GKChallengesDataSource *challengesDataSource;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 game:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;
@property(readonly) Class superclass;

@end