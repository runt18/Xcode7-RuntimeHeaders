//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRApplicationUpdateNotifier : NSObject
{
    _Bool _isPresentingAlert;
    UIViewController *_viewController;
    NSDate *_nextAlertPresentationDate;
    long long _alertPresentationCount;
}

+ (id)sharedApplicationUpdateNotifier;
@property(nonatomic) _Bool isPresentingAlert; // @synthesize isPresentingAlert=_isPresentingAlert;
@property(nonatomic) long long alertPresentationCount; // @synthesize alertPresentationCount=_alertPresentationCount;
@property(copy, nonatomic) NSDate *nextAlertPresentationDate; // @synthesize nextAlertPresentationDate=_nextAlertPresentationDate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (long long)integerRepresentationOfShortVersionString:(id)arg1;
- (long long)minimumOSVersionNumberForUpdate;
- (id)minimumOSVersionStringForUpdate;
- (id)updateInfos;
- (long long)systemVersionNumber;
- (long long)minimumVersionNumber;
- (long long)applicationVersionNumber;
@property(readonly, nonatomic) NSString *systemVersionString;
- (id)minimumVersionString;
@property(readonly, nonatomic) NSString *applicationVersionString;
- (id)applicationName;
- (_Bool)shouldPresentLastAlertForCurrentUpdate;
- (_Bool)isOSUpdateRequired;
- (_Bool)isAlertPresentationIntervalPassed;
- (_Bool)isDeviceAbandoned;
- (_Bool)isAppUpdateRequired;
- (void)launchAppStore;
- (void)updateAlertDidDismiss:(_Bool)arg1;
- (void)showAppUpdateAlert;
- (void)updateAppObsolecenceState;
- (_Bool)shouldShowUpdateAlert;
@property(readonly, nonatomic) _Bool isUpdateRequired;
- (void)persistStates;
- (void)restoreStates;
- (id)persistableProperties;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)setup;
- (id)init;

@end