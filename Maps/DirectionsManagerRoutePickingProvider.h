//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DirectionsManagerRoutePickingProvider : NSObject <DirectionsManagerObserver, RoutePickingProvider>
{
    DirectionsManagerLoadingResult *_displayableRoutesResult;
    DirectionsManagerLoadingResult *_lastRequestedResult;
    NSHashTable *_lastKnownRoutesFromRouteSet;
    _Bool _isWaitingForLoadingToStart;
    NSError *_currentError;
    RoutePickingTiming *_overrideTiming;
    RoutePickingModeController *_routePickingMode;
    DirectionsWaypoint *_startWaypoint;
    DirectionsWaypoint *_endWaypoint;
    CDStruct_4db06779 _timepoint;
}

@property(nonatomic) CDStruct_4db06779 timepoint; // @synthesize timepoint=_timepoint;
@property(retain, nonatomic) DirectionsWaypoint *endWaypoint; // @synthesize endWaypoint=_endWaypoint;
@property(retain, nonatomic) DirectionsWaypoint *startWaypoint; // @synthesize startWaypoint=_startWaypoint;
@property(nonatomic) __weak RoutePickingModeController *routePickingMode; // @synthesize routePickingMode=_routePickingMode;
- (void).cxx_destruct;
- (void)writeTraceToFile;
- (id)latestReportAProblemRecording;
- (void)beginLoadingRoutesFromWaypoint:(id)arg1 toWaypoint:(id)arg2 mode:(unsigned long long)arg3 traits:(id)arg4 timepoint:(CDStruct_4db06779)arg5 sortOption:(int)arg6 routeHandle:(id)arg7 tracePlayer:(id)arg8 withFeedback:(id)arg9 withUserInfo:(id)arg10;
- (void)directionsManagerDidAppendNewRoutesInCurrentRouteSet:(id)arg1;
- (void)directionsManager:(id)arg1 didLoadRoute:(id)arg2;
- (void)directionsManagerDidFailToLoadMoreRoutes:(id)arg1 withError:(id)arg2;
- (void)directionsManagerDidFailToLoadInitialRoutes:(id)arg1 withError:(id)arg2;
- (void)directionsManagerDidStartLoad:(id)arg1;
- (void)directionsManagerDidReset:(id)arg1;
- (void)_updateResultFromDirectionsManager;
- (void)_clearResultAndNoteChanged;
- (void)_clearResultAndNoteChangedWithError:(id)arg1;
- (id)lastRequestedDisplayableRoutes;
- (id)displayableRoutes;
- (id)lastRequestedTiming;
- (unsigned long long)lastRequestedTransportType;
- (id)currentError;
- (_Bool)isLoading;
- (void)dealloc;
- (void)_commonInit;
- (void)setOverrideTiming:(id)arg1;
- (id)initWithOriginWaypoint:(id)arg1 destinationWaypoint:(id)arg2;
- (id)initFromDirectionsManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end