//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKMultiplayerBulletin : GKGameplayBulletin
{
}

+ (_Bool)shouldProcessNotification;
- (id)customInviteSoundPathForBundleID:(id)arg1;
- (void)setGameInviteMessage;
- (void)loadLocalizedGameNameForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithPushNotification:(id)arg1;
- (id)URLContext;

@end