//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface HKActivityGlanceViewController : UIViewController <FIUIModelObserver, CUISGlanceServiceViewController, HKActivityGlanceViewDelegate>
{
    FIUIRingsViewController *_ringsController;
    FIUIModel *_model;
    FIUIClientToken *_foregroundQueryToken;
    FIUIClientToken *_backgroundQueryToken;
    double _briskPercentage;
    double _lastSetBriskPercentage;
    double _activeEnergyPercentage;
    double _lastSetActiveEnergyPercentage;
    double _sedentaryPercentage;
    double _lastSetSedentaryPercentage;
    NSDate *_activityCacheEndDate;
    NSDate *_activityCacheStartDate;
    _Bool _waitingToAnimate;
    double _lastAnimatedTime;
    NSUserActivity *_userActivity;
    _Bool _fitnessTrackingEnabled;
    _Bool _viewIsVisible;
    id <CUISGlanceServiceViewControllerDelegate> delegate;
    NSString *_launchBundleID;
    NSDictionary *_glanceContext;
}

@property(retain, nonatomic) NSDictionary *glanceContext; // @synthesize glanceContext=_glanceContext;
@property(retain, nonatomic) NSString *launchBundleID; // @synthesize launchBundleID=_launchBundleID;
@property(nonatomic) __weak id <CUISGlanceServiceViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *prelaunchBundleID;
- (void)glanceViewGetStartedButtonTapped:(id)arg1;
- (void)_animateRings;
- (void)_updateRings;
- (_Bool)_ringsAreEmpty;
- (void)_prepareForRingAnimation;
- (void)playSettleAnimation;
- (void)playSwipeInAnimation;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)_stopForegroundQuery;
- (void)_startForegroundQuery;
- (void)_startBackgroundQuery;
- (void)_updateFromActivityCache:(id)arg1;
- (id)viewsForDynamicAnimation;
- (void)_setObservingWeeklyGoalChangedNotification:(_Bool)arg1;
- (void)_showGetStartedOverlayAndHideLabels;
- (void)_hideGetStartedOverlayAndShowLabels;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) NSUserActivity *glanceUserActivity;
- (void)_setFitnessTrackingEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *duetIdentifier;
@property(readonly, copy, nonatomic) NSString *glanceTitle;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSURL *launchURL;
@property(readonly) Class superclass;

@end