//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNBannerSource : NSObject <MNRemoteStateObserver, SBUIBannerTargetManagerObserver, SBUIBannerSource>
{
    CPDistributedMessagingCenter *_requestsCenter;
    unsigned long long _alert;
    MNLockScreenBundleController *_remoteGuidanceSource;
    NSString *_currentUpdatesGroupIdentifier;
    NSString *_obsoletedUpdatesGroupIdentifier;
    NSMapTable *_bannerInfoByTarget;
    NSData *_cachedShieldImageData;
    NSString *_cachedShieldPointString;
    NSData *_cachedShieldMediumImageData;
    NSString *_cachedShieldMediumPointString;
    _Bool _cachedShieldAppliedToCurrentDisplay;
    _Bool _isNewStage;
    _Bool _hasPrepPhase;
}

@property(copy, nonatomic) NSString *obsoletedUpdatesGroupIdentifier; // @synthesize obsoletedUpdatesGroupIdentifier=_obsoletedUpdatesGroupIdentifier;
@property(copy, nonatomic) NSString *currentUpdatesGroupIdentifier; // @synthesize currentUpdatesGroupIdentifier=_currentUpdatesGroupIdentifier;
@property(nonatomic) __weak MNLockScreenBundleController *remoteGuidanceSource; // @synthesize remoteGuidanceSource=_remoteGuidanceSource;
- (void).cxx_destruct;
- (void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2;
- (void)bannerViewWillAppear:(id)arg1;
- (id)newBannerViewForContext:(id)arg1;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (id)peekNextBannerItemForTarget:(id)arg1;
- (void)_mapsApplicationDidTerminate;
- (void)_cacheShieldImage:(id)arg1;
- (void)_clearCachedShieldData;
- (void)_processTrafficAlertChange:(id)arg1 targetBannerInfo:(id)arg2;
- (void)_processManeuverChange:(id)arg1 targetBannerInfo:(id)arg2;
- (void)guidanceDidChange:(id)arg1;
- (void)_enqueueNewTrafficAlertBannerItemOnTarget:(id)arg1 forGuidanceChange:(id)arg2;
- (void)_enqueueNewNavManeuverBannerItemOnTarget:(id)arg1 forGuidanceChange:(id)arg2 sticky:(_Bool)arg3;
- (void)_enqueue:(id)arg1 forTarget:(id)arg2;
- (id)_bannerInfoForTarget:(id)arg1;
- (void)dismissAll;
- (void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2;
- (void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2;
- (void)dealloc;
- (id)initWithRemoteGuidanceSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end