//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKGameStatServicePrivate : GKGameStatService <GKGameStatServicePrivate>
{
}

+ (unsigned long long)requiredEntitlements;
+ (Class)interfaceClass;
- (oneway void)getHypotheticalLeaderboardRanksForScores:(id)arg1 forGameDescriptor:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (oneway void)getAchievementLeaderboardForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end