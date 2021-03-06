//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MapsMainModeController : NSObject <CustomSearchManagerObserver, UITableViewDelegate, TransitDirectionsListViewControllerDelegate, QuickActionMenuPresenterDelegate, MainChromeModeController, CollectionsViewControllerDelegate, DirectionsControllerDelegate, DirectionsTopBarProviderDelegate, DirectionsSearchViewControllerDelegate, DirectionsStepsTableViewControllerDelegate, MapsDebugViewControllerDelegate, MKMapViewDelegate, SearchBarControllerDelegate, SearchBarDelegate, SearchManagerObserver, SearchResultsListViewControllerDelegate, UIGestureRecognizerDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate, MapsActivityViewControllerDelegate, AdvisorySheetViewDelegate, RefinementSelectionDelegate, MapsActivityContainerViewControllerDelegate>
{
    MKMapView *_mapView;
    SearchResult *_navigationTarget;
    id <MKAnnotation> _restoreNavigationAnnotation;
    GEOMapRegion *_restoreNavigationRegion;
    SearchManager *_searchManager;
    CustomSearchManager *_customSearchManager;
    long long _viewMode;
    DirectionsSearchViewController *_directionsSearchViewController;
    ControlBarView *_controlBar;
    UIPopoverController *_exclusivePopover;
    UIButton *_searchListViewControl;
    UIButton *_shareControl;
    UIButton *_settingsControl;
    UIButton *_hideBrowseListViewControl;
    UIButton *_showBrowseListViewControl;
    UIButton *_stopFlyoverButton;
    _Bool _hasRestoredFromDefaults;
    _Bool _registeredForAddressBookChanges;
    _Bool _displayingError;
    UIAlertController *_multipleRefinementAlert;
    RefinementTableViewController *_multipleRefinementTableViewController;
    int _postAlertSearchType;
    _Bool _lockOrientation;
    long long _lockedOrientation;
    _Bool _isShowingKeyboard;
    _Bool _isRotating;
    UIView *_topButtonBarBorder;
    UIView *_showingPanel;
    CollectionsViewController *_collectionsViewController;
    NSInvocation *_hideSettingsViewDidEndInvocation;
    SearchResult *_bookmarkToShow;
    SearchResultsListViewController *_searchResultsListViewController;
    UINavigationController *_searchResultsNavController;
    DirectionsStepsTableViewController *_directionsStepsTableViewController;
    UINavigationController *_directionsStepsNavController;
    TrafficIncidentsViewController *_trafficIncidentsViewController;
    UINavigationController *_trafficIncidentsNavigationController;
    MKAnnotationView *_annotationViewToReSelectAfterExpandedPopoverDismissal;
    VKLabelMarker *_labelMarkerToReSelectAfterExpandedPopoverDismissal;
    CDUnknownBlockType _refinementSearchCompletion;
    _Bool _searchModeEnabled;
    SearchBarController *_searchBarController;
    UINavigationController *_directionsSearchNavigationController;
    SearchResult *_pendingSelectedSearchResult;
    _Bool _isShowingBookmarks;
    _Bool _isShowingPanel;
    _Bool _ignoreMapViewPositionChanges;
    _Bool _isShowingCurrentLocationError;
    _Bool _firstDisplayOccurred;
    _Bool _didLoadFromLaunchURL;
    _Bool _didLoadForBackgroundNavigation;
    _Bool _showsSearchResultsInOverview;
    _Bool _dismissDirectionsSheetOnEnterForeground;
    _Bool _skipRegionChangeOnOverviewPop;
    MKMapView *_externalMapView;
    UILongPressGestureRecognizer *_longPress;
    SteppingModeController *_steppingMode;
    _Bool _hasShownNavModeAdvisory;
    UITapGestureRecognizer *_logTileStateRecognizer;
    long long _3DButtonTextVisibilityCount;
    NSTimer *_gestureCoalesceTimer;
    _Bool _flyoverChangedDuringCurrentGestures;
    _Bool _dismissingPlaceCard;
    CDUnknownBlockType _enqueuedFixedProblemViewControllerShowAction;
    PlacePresentationSelectionManagerContext *_placePresentationSelectionManagerContext;
    NSMutableSet *_becomeContainerMapActions;
    _Bool _showTraffic;
    long long _displayMode;
    _Bool _labelMarkerSelected;
    _Bool _explicitlyRequestedUserLocation;
    UIWindow *_window;
    _Bool _showingDirectionsInfoBar;
    _Bool _isDisplayingRecentsAndSuggestionsPopover;
    _Bool _shouldRestoreSplitView;
    _Bool _shouldRestoreSplitViewAfterSearch;
    _Bool _isLoadingSearchQuery;
    PopoverPresenter *_directionsStepsListPresenter;
    AdaptivePresenter *_shareSheetPresenter;
    AdaptivePresenter *_searchResultsListPresenter;
    ModalPresenter *_directionsSearchPresenter;
    Presenter *_currentPresenter;
    struct {
        CDStruct_2c43369c center;
        struct {
            double latitudeDelta;
            double longitudeDelta;
        } span;
    } _regionBeforeRotation;
    BrowseSplitViewController *_browseSplitViewController;
    SearchResult *_browseSearchResultPendingSelection;
    MainChromeDetailsBarContent *_detailsBarContent;
    _MKPlaceViewController *_peekController;
    _MKPlaceViewController *_popController;
    MapQuickActionMenuPresenter *_quickActionMenuPresenter;
    VKLabelMarker *_pressureLabelMarker;
    _Bool _regionChangingForNavigationEnd;
    DirectionsTopBarProvider *_directionsInfoBar;
    MainChromeViewController *_chromeViewController;
    TransitDirectionsListViewController *_transitDirectionsListViewController;
    CDStruct_02837cd9 _mapRectForNavigationEnd;
}

@property(readonly, nonatomic) CDStruct_90e2a262 mapRectForNavigationEnd; // @synthesize mapRectForNavigationEnd=_mapRectForNavigationEnd;
@property(readonly, nonatomic, getter=isRegionChangingForNavigationEnd) _Bool regionChangingForNavigationEnd; // @synthesize regionChangingForNavigationEnd=_regionChangingForNavigationEnd;
@property(nonatomic) _Bool didLoadForBackgroundNavigation; // @synthesize didLoadForBackgroundNavigation=_didLoadForBackgroundNavigation;
@property(nonatomic) _Bool skipRegionChangeOnOverviewPop; // @synthesize skipRegionChangeOnOverviewPop=_skipRegionChangeOnOverviewPop;
@property(nonatomic) _Bool showsSearchResultsInOverview; // @synthesize showsSearchResultsInOverview=_showsSearchResultsInOverview;
@property(retain, nonatomic) NSMutableSet *becomeContainerMapActions; // @synthesize becomeContainerMapActions=_becomeContainerMapActions;
@property(nonatomic) _Bool hasShownNavModeAdvisory; // @synthesize hasShownNavModeAdvisory=_hasShownNavModeAdvisory;
@property(retain, nonatomic) TransitDirectionsListViewController *transitDirectionsListViewController; // @synthesize transitDirectionsListViewController=_transitDirectionsListViewController;
@property(retain, nonatomic) SteppingModeController *steppingMode; // @synthesize steppingMode=_steppingMode;
@property(readonly, nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(retain, nonatomic) SearchResult *bookmarkToShow; // @synthesize bookmarkToShow=_bookmarkToShow;
@property(nonatomic) __weak MainChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(retain, nonatomic) DirectionsTopBarProvider *directionsInfoBar; // @synthesize directionsInfoBar=_directionsInfoBar;
@property(nonatomic) long long lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(nonatomic) _Bool lockOrientation; // @synthesize lockOrientation=_lockOrientation;
@property(retain, nonatomic) SearchResult *navigationTarget; // @synthesize navigationTarget=_navigationTarget;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)quickActionMenuWillPresent:(id)arg1;
- (id)mapServiceTraitsForQuickActionPresenter:(id)arg1;
- (_Bool)shouldQuickActionMenuPresenter:(id)arg1 presentAtLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)_quickActionMenuPresenterSelectLabelMarkerAfterDelay;
- (void)quickActionMenuPresenter:(id)arg1 selectedRemoveDroppedPinOf:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedShowPlaceCard:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedShareLocationOf:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedViewWebsiteFor:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedCall:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedDirectionsTo:(id)arg2;
- (id)getSearchResultsListViewController;
- (void)_startFlyoverTourAnimation:(unsigned long long)arg1 animation:(id)arg2 annotation:(id)arg3;
- (void)_stopFlyoverTourAnimation;
- (void)presentationController:(id)arg1 oldSearchResult:(id)arg2 becameNewSearchResult:(id)arg3;
- (void)presentationController:(id)arg1 completedActivityOfType:(id)arg2 forSearchResult:(id)arg3;
- (_Bool)presentationController:(id)arg1 shouldShowReportAProblemForSearchResult:(id)arg2;
- (_Bool)presentationController:(id)arg1 shouldShowDirectionsForSearchResult:(id)arg2;
- (void)presentationController:(id)arg1 searchForAddress:(id)arg2;
- (void)presentationController:(id)arg1 removeFavoriteForMapItem:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)presentationController:(id)arg1 addFavoriteForMapItem:(id)arg2 title:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)presentationController:(id)arg1 hasFavoriteForMapItem:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)presentationController:(id)arg1 addBookmarkForSearchResult:(id)arg2 title:(id)arg3;
- (void)presentationController:(id)arg1 showTransitLine:(id)arg2;
- (void)presentationController:(id)arg1 showFlyoverTourForSearchResult:(id)arg2;
- (void)presentationController:(id)arg1 showRouteToSearchResult:(id)arg2 inMode:(unsigned long long)arg3;
- (_Bool)shouldShowPlacePresentationOptionInCalloutForAnnotationView:(id)arg1;
- (_Bool)shouldShowPlacePresentationOptionInCalloutForLabelMarker:(id)arg1;
- (_Bool)shouldShowFlyoverButtonForSearchResult:(id)arg1;
- (_Bool)shouldShowDirectionsButtonForSearchResult:(id)arg1;
- (_Bool)shouldChangeMKApplicationStateForLabelMarker:(id)arg1;
- (void)selectedSearchResultDidChange:(id)arg1;
- (void)updateMKApplicationStateAfterDeselection;
- (id)placePresentationSelectionManagerContext;
- (void)mapsActivityViewController:(id)arg1 activityCompleted:(_Bool)arg2;
- (void)mapsActivityContainerViewControllerCancel:(id)arg1 animated:(_Bool)arg2;
- (void)_presentViewControllerWithShareSheetPresentation:(id)arg1;
- (void)_shareControlTapped:(id)arg1;
- (id)_selectedSearchResultOrPOI;
- (_Bool)_showingRoute;
- (id)mapsActivityMapView;
- (void)mapsActivityViewControllerPrint:(id)arg1;
- (void)mapsActivityViewController:(id)arg1 addBookmarkWithSearchResult:(id)arg2 title:(id)arg3;
- (void)directionsController:(id)arg1 displayDirectionsWithoutNavigationToSelectedRouteWithOptions:(long long)arg2;
- (_Bool)_setupAndStartDirectionsRequiringNavigation:(_Bool)arg1;
- (void)_handleLogTileState:(id)arg1;
@property(retain, nonatomic) DirectionsPlan *directionsPlan;
- (id)directionsPlanWithFidelity:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool canPlayTrace;
- (void)_showOrUpdateSteppingModeWithDesiredTrackingMode:(id)arg1 settingsFromBlock:(CDUnknownBlockType)arg2;
- (void)showOrUpdateSteppingModeToStep:(id)arg1;
- (struct CGRect)visibleMapBounds;
- (void)_dismissTransitDirectionList:(id)arg1;
- (void)_directionsListViewButtonTapped:(id)arg1;
- (void)_dismissDirectionsStepsListAnimated:(_Bool)arg1;
- (void)_dismissDirectionsStepsList;
- (id)directionsStepsNavController;
- (id)directionsStepsTableViewController;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (void)transitDirectionsListViewController:(id)arg1 didTapClusteredVehiclesCell:(id)arg2;
- (void)transitDirectionsListViewController:(id)arg1 didTapRowForItem:(id)arg2;
- (_Bool)transitDirectionsListViewControllerShouldAllowInfoCardsForEndpoints:(id)arg1;
- (void)_presentDirectionsStepsListWithPositioning:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)directionsController:(id)arg1 presentDirectionsStepsListWithPositioning:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setBrowseListSelectionToMapSelection;
- (void)_hideBrowseResultsList:(id)arg1;
- (void)_showBrowseResultsList:(id)arg1;
- (void)_showBrowseResultsListManually:(id)arg1;
- (void)_hideBrowseResultsListManually:(id)arg1;
- (id)browseSplitViewController;
- (void)_searchResultsListClearButtonClicked:(id)arg1;
- (void)_presentSearchResultsList:(id)arg1;
- (void)_dismissSearchResultsList;
- (id)searchResultsNavController;
- (id)searchResultsListViewController;
- (int)searchMode;
- (_Bool)_shouldShowDirectionsAffordanceForAnnotation:(id)arg1;
- (void)refinementSelected:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)directionsControllerDidStartLoad:(id)arg1;
- (void)searchForRouteFromAddress:(id)arg1 toAddress:(id)arg2 directionsMode:(unsigned long long)arg3 withFeedback:(id)arg4;
- (void)endBackgroundNavigation;
- (void)_displayOrScheduleDisplayOfEnqueuedFixedProblemInvokedAfterWait:(_Bool)arg1;
- (void)displayOrScheduleDisplayOfEnqueuedFixedProblem:(CDUnknownBlockType)arg1;
- (void)dismissAllModalViewsIfPresentWithCompletion:(CDUnknownBlockType)arg1;
- (CDStruct_90e2a262)regionCenteredAt:(CDStruct_c3b9c2ee)arg1 zoomLevel:(double)arg2;
@property(readonly, nonatomic) double defaultZoomLevelForSearching;
- (_Bool)supportsSearchingFromURL:(id)arg1;
- (_Bool)_showDirectionsToSearchResult:(id)arg1 transportType:(unsigned long long)arg2;
- (void)_showDirectionsFromSearchResult:(id)arg1 orToSearchResult:(id)arg2 directionsMode:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_showDirectionsFromSearchResult:(id)arg1 orToSearchResult:(id)arg2 inMode:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)modalDismissViewControllerDidComplete:(id)arg1;
- (void)addBookmarkWithName:(id)arg1 fromSearchResult:(id)arg2;
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;
- (_Bool)mapView:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3 fromTrackingButton:(_Bool)arg4;
- (void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
- (void)_goToSearchResult:(id)arg1;
- (void)_showTransitAttributionForRouteStep:(id)arg1 animate:(_Bool)arg2;
- (void)dismissPlaceCard;
- (void)presentPlaceCardForSearchResult:(id)arg1 animated:(_Bool)arg2;
- (id)mapViewCurrentRouteMatch:(id)arg1;
- (void)directionsController:(id)arg1 didSetEndPin:(id)arg2;
- (void)directionsController:(id)arg1 isRecalculating:(_Bool)arg2;
- (void)directionsController:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)directionsControllerDidStartNavigationSession:(id)arg1;
- (void)directionsControllerDidReset:(id)arg1;
- (void)directionsControllerDidChangeRoute:(id)arg1;
- (void)directionsControllerHasReachedEndOfLeg:(id)arg1 willContinueGuidance:(_Bool)arg2;
- (void)directionsControllerHasArrived:(id)arg1;
- (void)directionsControllerUpdatedETA:(id)arg1;
- (void)directionsController:(id)arg1 didChangeSelectedRouteIndex:(unsigned long long)arg2;
- (void)directionsModeDidChange;
- (void)_reportLoadingErrorIfNeeded:(id)arg1 canInterrupt:(_Bool)arg2;
- (void)directionsControllerDidFailToLoadMoreRoutes:(id)arg1 withError:(id)arg2 canInterruptUser:(_Bool)arg3;
- (void)directionsControllerDidFailToLoadInitialRoutes:(id)arg1 withError:(id)arg2 canInterruptUser:(_Bool)arg3;
- (void)directionsControllerDidCancelLoad:(id)arg1;
- (void)directionsControllerDidProceedWithExternalOverview:(id)arg1;
- (void)startPreparedBackgroundNavigation;
- (void)directionsControllerDidLoad:(id)arg1;
- (void)_showNavModeAdvisoryIfNecessary;
- (void)_startDirectionsRequiringNavigation:(_Bool)arg1;
- (void)advisorySheetWasSupersededByIncidentalInteraction:(id)arg1;
- (void)advisorySheetWasTapped:(id)arg1;
- (void)advisorySheetButtonWasTapped:(id)arg1;
- (void)_startFlyoverTourFromAdvisorySheet:(id)arg1;
- (void)screenWasInteractedWith:(id)arg1;
- (void)showAnnouncementForFlyover:(id)arg1;
- (_Bool)_isFlyoverAvailable;
- (_Bool)shouldShowFlyoverButtonForLabelMarker:(id)arg1;
- (void)directionsController:(id)arg1 steppingModeChoseEnd:(id)arg2;
- (void)directionsController:(id)arg1 steppingModeChoseOverview:(id)arg2;
- (void)directionsControllerNavigationModeChoseEndNavigation:(id)arg1;
- (void)directionsControllerNavigationModeChoseOverview:(id)arg1;
- (void)_transitionToOverview;
- (void)_updateDetailsBarIfPossible;
- (id)detailsBarContent;
- (void)_delayedGoToRouteStepAnimated;
- (void)_reportCurrentLocationFailure;
- (void)_reportSearchError:(id)arg1;
- (void)cleanUI;
- (CDUnknownBlockType)presentInterruptionOfKind:(long long)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canPresentInterruptionOfKind:(long long)arg1;
- (void)searchManagerDidClearSearchResults:(id)arg1;
- (void)searchManagerSearchCanceled:(id)arg1;
- (void)searchManagerSearchFailed:(id)arg1 withError:(id)arg2;
- (void)searchManager:(id)arg1 didManuallySetResults:(id)arg2;
- (void)searchManager:(id)arg1 didReceiveRefinementResults:(id)arg2;
- (void)searchManager:(id)arg1 didReceiveResults:(id)arg2 scrollToResults:(_Bool)arg3 displayPlaceCardForResult:(id)arg4;
- (void)searchManager:(id)arg1 didReceiveCategoryResults:(id)arg2;
- (void)_searchManagerResultsChanged;
- (void)searchManager:(id)arg1 willPerformSearchForQuery:(id)arg2;
- (void)updateSearchBarWithSearchManager:(id)arg1;
- (void)searchResultsListViewController:(id)arg1 didCommitPreviewForSearchResult:(id)arg2 withCenterCoordinate:(CDStruct_c3b9c2ee)arg3 zoomLevel:(double)arg4;
- (void)searchResultsListViewController:(id)arg1 didPopRowForSearchResult:(id)arg2;
- (void)searchResultsListViewController:(id)arg1 didTapRowForSearchResult:(id)arg2;
- (void)searchResultsListViewController:(id)arg1 didTapDisclosureForSearchResult:(id)arg2;
- (_Bool)placePresentationSelectionManager:(id)arg1 shouldUseDefaultPlaceCardPresentationForViewController:(id)arg2;
- (_Bool)directionsStepsTableViewControllerShouldAllowInfoCardsForEndpoints:(id)arg1;
- (void)directionsStepsTableViewController:(id)arg1 didTapDisclosureForSearchResult:(id)arg2;
- (void)directionsStepsTableViewController:(id)arg1 didTapRowForRouteStep:(id)arg2;
- (void)_resolveRefinementForSearch:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_searchForResult:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_dropPinsForSearchResults:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForSearchResult:(id)arg3;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (void)resumeNavigationIfNeeded;
- (void)directionsInfoBarChoseResumeInOverview:(id)arg1;
- (void)directionsInfoBarChoseEndInOverview:(id)arg1;
- (void)directionsInfoBarDidStartDirections:(id)arg1;
- (void)directionsInfoBarDidCancelDirections:(id)arg1;
- (void)directionsInfoBarDidClearDirections:(id)arg1;
- (void)_updateUserSpecifiedZoomLevel:(_Bool)arg1;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (_Bool)_isDisplayingTrafficIncident;
- (_Bool)_isDisplayingPlaceCard;
- (void)closeCollectionsViewController:(id)arg1;
- (void)collectionsViewController:(id)arg1 choseHistoryItem:(id)arg2;
- (void)collectionsViewController:(id)arg1 choseAddress:(id)arg2;
- (void)collectionsViewController:(id)arg1 choseBookmark:(id)arg2;
- (void)collectionsViewController:(id)arg1 didShowCategory:(id)arg2;
- (void)collectionsViewController:(id)arg1 choseCategory:(id)arg2;
- (void)_dismissCollectionsViewControllerAnimated:(_Bool)arg1;
- (void)_searchForHistoryItem:(id)arg1 completedQuery:(id)arg2 source:(int)arg3;
- (void)_routeFromSearchResult:(id)arg1 toAddressBookAddress:(id)arg2 withFeedback:(id)arg3 withUserInfo:(id)arg4;
- (void)_routeFromSearchResult:(id)arg1 toAddressBookAddress:(id)arg2 withFeedback:(id)arg3;
- (void)_routeFromSearchResult:(id)arg1 toAddress:(id)arg2 withFeedback:(id)arg3;
- (void)routeFromAddress:(id)arg1 toAddress:(id)arg2 withFeedback:(id)arg3;
- (void)_routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 routeHandle:(id)arg3 timePoint:(id)arg4 tracePlayer:(id)arg5 withFeedback:(id)arg6 origin:(long long)arg7;
- (void)_routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 routeHandle:(id)arg3 timePoint:(id)arg4 tracePlayer:(id)arg5 withFeedback:(id)arg6 historyItem:(id)arg7 origin:(long long)arg8;
- (void)routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 routeHandle:(id)arg3 timePoint:(id)arg4 withFeedback:(id)arg5 origin:(long long)arg6;
- (void)showRoutingAppsFromSearchResult:(id)arg1 toSearchResult:(id)arg2;
- (void)_routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 overrideDirectionsMode:(unsigned long long)arg3 routeHandle:(id)arg4 timePoint:(id)arg5 tracePlayer:(id)arg6 withFeedback:(id)arg7 historyItem:(id)arg8 origin:(long long)arg9;
- (void)_routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 overrideDirectionsMode:(unsigned long long)arg3 routeHandle:(id)arg4 timePoint:(id)arg5 tracePlayer:(id)arg6 withFeedback:(id)arg7;
- (void)clearRouteAnimated:(_Bool)arg1;
- (void)_clearOverlayRoutesAnimated:(_Bool)arg1;
- (void)_setShowingDirectionsInfoBar:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateShowingRouteAnimated:(_Bool)arg1;
- (void)_clearCustomSearchResult;
- (void)_clearRouteStartAndEnd;
- (void)submitCancelUsage;
- (id)quickActionMenuHandlerForSearchBar:(id)arg1;
- (void)searchBarDidPresentPopover:(id)arg1 shouldReselectAnnotation:(_Bool)arg2;
- (void)searchBar:(id)arg1 chosePopularCategoryResult:(id)arg2;
- (void)searchBar:(id)arg1 chosePopularNearbyResult:(id)arg2;
- (void)searchBar:(id)arg1 choseHistoryItem:(id)arg2;
- (void)searchBar:(id)arg1 choseBookmark:(id)arg2;
- (void)searchBarCancelButtonWasTapped:(id)arg1;
- (void)searchBarShareButtonWasTapped:(id)arg1;
- (void)searchBarDirectionsButtonWasTapped:(id)arg1;
- (void)searchBar:(id)arg1 didShowCategory:(id)arg2;
- (void)searchBar:(id)arg1 choseCategory:(id)arg2;
- (void)searchBarController:(id)arg1 previewActionShareLocationOf:(id)arg2;
- (void)searchBarController:(id)arg1 previewActionViewWebsiteFor:(id)arg2;
- (void)searchBarController:(id)arg1 previewActionCall:(id)arg2;
- (void)searchBarController:(id)arg1 previewActionDirectionsTo:(id)arg2;
- (id)quickActionMenuHandlerForSearchBarController:(id)arg1;
- (void)searchBarControllerDismissImmediately:(id)arg1;
- (void)searchBarController:(id)arg1 didCommitPreviewForSearchResult:(id)arg2 withCenterCoordinate:(CDStruct_c3b9c2ee)arg3 zoomLevel:(double)arg4;
- (id)refreshedTraits;
- (id)searchBarControllerTraits:(id)arg1;
- (void)searchBarControllerDidEndEditing:(id)arg1;
- (void)searchBarControllerDidBeginEditing:(id)arg1;
- (void)searchBarController:(id)arg1 didSelectHistoryItem:(id)arg2 completedQuery:(id)arg3;
- (void)searchBarControllerDidClear:(id)arg1;
- (void)searchBarController:(id)arg1 didSearchForNearbyCategory:(id)arg2 source:(int)arg3;
- (void)searchBarController:(id)arg1 didSearchForCategory:(id)arg2 source:(int)arg3;
- (void)searchBarController:(id)arg1 didSearchForItem:(id)arg2 source:(int)arg3;
- (void)searchBarController:(id)arg1 didSelectCategoryResult:(id)arg2;
- (id)searchBarController:(id)arg1 delegateForSearchBar:(id)arg2;
- (void)searchNearbyCategory:(id)arg1;
- (void)searchCategory:(id)arg1;
- (void)_dismissDirectionsSheet:(_Bool)arg1;
- (void)_presentDirectionsSheetAnimated:(_Bool)arg1 positioning:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)presentationSourceForDirectionsSheet;
- (void)_presentDirectionsSheetAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)directionsController:(id)arg1 presentDirectionsSheetWithPositioning:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setShowingSearch:(_Bool)arg1 animated:(_Bool)arg2;
- (void)mapView:(id)arg1 didStopFlyoverTourCompleted:(_Bool)arg2;
- (void)mapViewWillStartFlyoverTour:(id)arg1;
- (void)mapView:(id)arg1 canEnter3DModeDidChange:(_Bool)arg2;
- (void)mapView:(id)arg1 didBecomePitched:(_Bool)arg2;
- (void)_dismissSettingsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showBookmark;
- (void)_choseBookmark:(id)arg1 forSearchType:(int)arg2;
- (void)cancelQuickActionMenuPresentation:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_createCustomSearchResultForDroppedPinAtPoint:(CDStruct_c3b9c2ee)arg1 animated:(_Bool)arg2;
- (void)dropPin;
- (_Bool)_replaceSearchResult:(id)arg1 withSearchResult:(id)arg2;
- (void)_setSearchResult:(id)arg1 forSearchType:(int)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)searchForAddressString:(id)arg1 source:(int)arg2;
- (void)searchForAddress:(id)arg1 source:(int)arg2;
- (void)searchForString:(id)arg1 scrollToResults:(_Bool)arg2 source:(int)arg3;
- (void)searchForString:(id)arg1 traits:(id)arg2 scrollToResults:(_Bool)arg3 source:(int)arg4;
- (void)searchForExternalURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (void)mapView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)cancelSearches;
- (void)modeDidAppear:(_Bool)arg1;
@property(nonatomic) _Bool locationPulseEnabled;
- (_Bool)_isDisplayingCollectionsViewController;
- (void)_restoreFromDefaults;
- (void)_importLegacyDefaults;
- (void)_restoreDisplayedInfoCard;
@property(readonly, nonatomic) SearchResult *customSearchResult;
- (void)setCustomSearchResult:(id)arg1 animated:(_Bool)arg2;
- (void)customSearchManager:(id)arg1 didReplaceCustomSearchResult:(id)arg2 animated:(_Bool)arg3 shouldSelectOnMap:(_Bool)arg4;
- (void)customSearchManager:(id)arg1 didModifyCustomSearchResult:(id)arg2;
- (_Bool)canDisplayTraffic;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)_updateTopBarBackdrop;
- (void)_updateTopBarContentAnimated:(_Bool)arg1;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)layoutForUnobscuredBoundsChange;
- (void)hideChrome:(_Bool)arg1 withDuration:(double)arg2;
- (void)_updateTapToHideBehavior;
- (void)_updateSelection;
- (void)_updateCallout;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (void)addBecomingContainerMapAction:(CDUnknownBlockType)arg1;
- (void)setMapView:(id)arg1;
- (void)_setupMapView;
- (void)_routeUsingDirectionsSearchFieldsWithFeedback:(id)arg1 withUserInfo:(id)arg2;
- (void)_routeUsingDirectionsSearchFieldsWithFeedback:(id)arg1;
- (id)directionsSearchViewControllerTraits:(id)arg1;
- (void)directionsSearchViewController:(id)arg1 didSelectDirectionsMode:(unsigned long long)arg2;
- (void)directionsSearchViewControllerDidSelectRoutingApp:(id)arg1;
- (void)directionsSearchViewControllerDidRoute:(id)arg1;
- (void)directionsSearchViewControllerDidCancel:(id)arg1;
- (void)directionsSearchViewControllerDidSelectFavorites:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)resetForLaunchURL;
- (void)mapDisplayDidResume;
- (void)mapDisplayWillSuspend;
- (double)mapView:(id)arg1 shouldDelayTapResponse:(id)arg2 onAnnotationView:(id)arg3 forDuration:(double)arg4;
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 didDecelerate:(_Bool)arg4;
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;
- (void)_gestureCoalesceTimerFired:(id)arg1;
- (void)_updateRatingsReviewsAndTransitForAnnotationView:(id)arg1 labelMarker:(id)arg2 searchResult:(id)arg3;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapViewWillStartRenderingMap:(id)arg1;
- (void)debugController:(id)arg1 choseTracePlayer:(id)arg2 startNav:(_Bool)arg3;
- (id)fullScreenViewController;
- (id)allVisibleMapViewsForDebugController:(id)arg1;
- (void)debugControllerDidFinish:(id)arg1;
- (_Bool)shouldAllowHybridAvailabilityAdvisory;
- (_Bool)shouldAllowTransitAvailabilityAdvisory;
- (_Bool)displayNavigationAlertAndShouldContinue;
- (id)selectedSearchResult;
- (void)_stopFlyoverButtonTapped:(id)arg1;
- (void)_updateControlBarItemsAnimated:(_Bool)arg1;
- (void)_refreshShareControlAvailability;
- (id)_stopFlyoverButton;
- (id)_shareControl;
- (id)_settingsControl;
- (id)_directionsListViewControl;
- (id)_showBrowseListViewControl;
- (id)_hideBrowseListViewControl;
- (id)_searchListViewControl;
- (id)_trackingButton;
- (id)calloutSearchResult;
- (id)calloutViewController;
- (id)calloutPopoverController;
- (void)setViewMode:(long long)arg1;
- (long long)viewMode;
- (void)viewModeDidChange;
- (void)trafficDisplayDidChange;
- (void)_removeLegacyDefaults;
- (unsigned long long)_transportTypeForControl:(id)arg1;
- (void)displayAlertWithTitle:(id)arg1 message:(id)arg2 postAlertSearchType:(int)arg3;
@property(readonly, nonatomic) UIAlertController *multipleRefinementAlert;
- (_Bool)canChangeMapModeType;
- (void)beginSearch;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_resetTracking:(_Bool)arg1;
- (_Bool)supportsLocateOnLaunch;
- (_Bool)_currentDisplayModeSupportsLocateOnLaunch;
- (void)willChangeToLightLevel:(long long)arg1 animation:(id)arg2;
- (void)_stopCurrentLocationUpdate;
- (void)_startCurrentLocationUpdate;
- (void)_locationManagerApprovalDidChange:(id)arg1;
- (void)performIfLocationServicesAvailable:(CDUnknownBlockType)arg1;
- (void)updateBlurDisabledBackgroundColor:(id)arg1 blurViewStyle:(long long)arg2 transitionToBackdropStyle:(long long)arg3;
- (void)didRotate;
- (void)willAnimateRotationWithDuration:(double)arg1;
- (void)willRotateWithDuration:(double)arg1;
- (unsigned long long)supportedInterfaceOrientations;
@property(readonly, nonatomic) _Bool shouldTrackLocationAutomatically;
- (_Bool)shouldAutorotate;
@property(readonly, nonatomic) DirectionsSearchViewController *directionsSearchViewController; // @synthesize directionsSearchViewController=_directionsSearchViewController;
@property(readonly, nonatomic) SearchBarController *searchBarController;
- (id)searchManager;
- (void)_updateMapApplicationState;
- (_Bool)_showingDirections;
- (void)_setDisplayMode:(long long)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end