//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoNavMapModeController : NSObject <NanoNavMapViewControllerDelegate, PassThroughViewControllerDelegate, MKMapViewDelegatePrivate, NMGizmoXPC, NanoNavChromeModeController>
{
    NanoNavMapViewController *_viewController;
    NanoNavCameraController *_cameraController;
    _Bool _startedCameraController;
    int _previousDisplayRate;
    int _nonInteractiveMainLoopRate;
    int _previousMarkerMode;
    unsigned int _lastTransitStep;
    NanoStatusBarPercentDrivenAnimation *_currentStatusbarAnimation;
    NanoAppChromeViewController *_chromeViewController;
}

@property(nonatomic) ChromeViewController *chromeViewController;
- (void).cxx_destruct;
- (void)_debug_fetchStateSnapshot:(CDUnknownBlockType)arg1;
- (void)historyUpdated;
- (void)pinsUpdated;
- (void)bookmarksUpdated;
- (void)mapViewDidStopUserInteraction:(id)arg1;
- (void)mapViewDidStartUserInteraction:(id)arg1;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (id)mapViewCurrentRouteMatch:(id)arg1;
- (void)nanoNavMapViewController:(id)arg1 displayingStepIndex:(unsigned int)arg2 animated:(_Bool)arg3;
- (id)passThroughView;
- (void)_updateCamera:(_Bool)arg1;
- (void)_stopTracking;
- (void)_startTrackingAnimated:(_Bool)arg1;
- (void)statusBarWasTapped;
- (void)showEphemeralData;
- (void)hideEphemeralData;
- (void)refreshTitle;
- (void)_refreshRouteStatus;
- (_Bool)respectBackButtonPopping;
- (void)handleNavigationStepChanged;
- (void)handleNavigationRouteStatusChanged;
- (void)handleNavigationRouteDetailsAndStatusChanged;
- (id)actionGroup;
- (id)transitionControllerForPopToMode:(id)arg1;
- (id)transitionControllerForPushFromMode:(id)arg1;
- (id)viewController;
- (_Bool)shouldAllowActivityContinuation;
- (void)modeWillAppear:(_Bool)arg1;
- (_Bool)allowsEdgeSwipePop;
- (_Bool)showsMapView;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end