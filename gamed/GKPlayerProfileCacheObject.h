//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKPlayerProfileCacheObject : GKExpiringCacheObject <GKCacheObjectImageProtocol>
{
}

+ (id)entityName;
+ (id)playerProfilesWithPlayerIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)playerProfilesWithPlayers:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)profileForPlayer:(id)arg1 context:(id)arg2;
+ (id)playerProfileWithPlayerID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)localPlayerInManagedObjectContext:(id)arg1;
+ (const void *)uniqueObjectIDLookupKey;
+ (id)uniqueAttributeName;
+ (id)filterPlayerIDs:(id)arg1 familiarity:(int)arg2 includeSelf:(_Bool)arg3;
+ (unsigned char)piecesToLoadForFamiliarity:(int)arg1;
+ (id)playersByFamiliarity:(id)arg1;
+ (void)setFamiliarPlayerIDs:(id)arg1 familiarity:(int)arg2;
+ (void)removeFamiliarPlayerIDs:(id)arg1 familiarity:(int)arg2;
+ (void)addFamiliarPlayerIDs:(id)arg1 familiarity:(int)arg2;
+ (int)familiarityForPlayerID:(id)arg1;
+ (id)selfPlayerID;
+ (void)buildFamiliarilyLookupForProfile:(id)arg1;
+ (id)_familiarityLookup;
- (void)expireRecentMatchesWithGame:(id)arg1;
- (id)internalRepresentation;
- (id)internalRepresentationWithPieces:(unsigned char)arg1;
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 pieces:(unsigned char)arg3;
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;
- (void)deleteCachedImage:(id)arg1;
@property(nonatomic, getter=isFindable) _Bool findable; // @dynamic findable;
@property(nonatomic, getter=isUnderage) _Bool underage; // @dynamic underage;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) _Bool isLocalPlayer; // @dynamic isLocalPlayer;
@property(readonly, nonatomic) int familiarity; // @dynamic familiarity;

// Remaining properties
@property(retain, nonatomic) NSString *accountName; // @dynamic accountName;
@property(retain, nonatomic) NSSet *achievementLists; // @dynamic achievementLists;
@property(retain, nonatomic) GKAchievementPointsListCacheObject *achievementPointsList; // @dynamic achievementPointsList;
@property(retain, nonatomic) NSString *alias; // @dynamic alias;
@property(nonatomic) int availablePieces; // @dynamic availablePieces;
@property(retain, nonatomic) GKChallengeListCacheObject *challengeList; // @dynamic challengeList;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *facebookUserID; // @dynamic facebookUserID;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(retain, nonatomic) NSSet *friendLeaderboards; // @dynamic friendLeaderboards;
@property(retain, nonatomic) GKFriendListCacheObject *friendList; // @dynamic friendList;
@property(retain, nonatomic) GKFriendRecommendationListCacheObject *friendRecommendationList; // @dynamic friendRecommendationList;
@property(retain, nonatomic) GKFriendRequestListCacheObject *friendRequestList; // @dynamic friendRequestList;
@property(retain, nonatomic) GKGameListCacheObject *gameList; // @dynamic gameList;
@property(retain, nonatomic) GKGameRecommendationListCacheObject *gameRecommendationList; // @dynamic gameRecommendationList;
@property(retain, nonatomic) NSSet *gameRecords; // @dynamic gameRecords;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *iCloudUserID; // @dynamic iCloudUserID;
@property(retain, nonatomic) NSString *image128; // @dynamic image128;
@property(retain, nonatomic) NSString *image256; // @dynamic image256;
@property(retain, nonatomic) NSString *image512; // @dynamic image512;
@property(retain, nonatomic) NSString *image64; // @dynamic image64;
@property(retain, nonatomic) NSString *imageTemplate; // @dynamic imageTemplate;
@property(retain, nonatomic) NSString *lastName; // @dynamic lastName;
@property(retain, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;
@property(retain, nonatomic) NSString *lastPlayedGame; // @dynamic lastPlayedGame;
@property(retain, nonatomic) NSSet *leaderboardLists; // @dynamic leaderboardLists;
@property(nonatomic) int numberOfAchievementPoints; // @dynamic numberOfAchievementPoints;
@property(nonatomic) int numberOfAchievements; // @dynamic numberOfAchievements;
@property(nonatomic) int numberOfFriends; // @dynamic numberOfFriends;
@property(nonatomic) int numberOfFriendsInCommon; // @dynamic numberOfFriendsInCommon;
@property(nonatomic) int numberOfGames; // @dynamic numberOfGames;
@property(nonatomic) int numberOfGamesInCommon; // @dynamic numberOfGamesInCommon;
@property(nonatomic) int numberOfTurns; // @dynamic numberOfTurns;
@property(retain, nonatomic) NSOrderedSet *orderedEmailAddresses; // @dynamic orderedEmailAddresses;
@property(retain, nonatomic) NSSet *otherRecentGameLists; // @dynamic otherRecentGameLists;
@property(retain, nonatomic) NSSet *ownedRecentGameLists; // @dynamic ownedRecentGameLists;
@property(nonatomic) _Bool photoPending; // @dynamic photoPending;
@property(retain, nonatomic) NSDate *photoPendingExpirationDate; // @dynamic photoPendingExpirationDate;
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;
@property(nonatomic) _Bool purpleBuddyAccount; // @dynamic purpleBuddyAccount;
@property(retain, nonatomic) NSSet *recentPlayerLists; // @dynamic recentPlayerLists;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(readonly) Class superclass;

@end