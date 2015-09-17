//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface LargeWeekViewController : WeekViewController <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate, EnqueuablePopoverPresentationManagedNavigationControllerDelegate, ABPersonViewControllerDelegate, UIPopoverPresentationControllerDelegate, UIAdaptivePresentationControllerDelegate>
{
    _Bool _shouldRePresentPopoverAfterDrag;
    EKEventGestureController *_gestureController;
    EKDayOccurrenceView *_selectedOccurrenceView;
    EKDayOccurrenceView *_selectedOccurrenceFrontmostClonedView;
    _Bool _isTransformingInterfaceSize;
    _Bool _isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
    _Bool _shouldPresentEventCommentsForSelectedOccurrence;
    _Bool _isPresentingPageSheet;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (double)minimumHourScale;
- (struct _NSRange)visibleRangeForOffset:(double)arg1;
- (void)draggingDone;
- (void)overlayCalendarDidChange;
- (void)_showMonthOverlayInCellAtOffset:(double)arg1 animated:(_Bool)arg2;
- (void)snapTargetScrollOffset:(inout struct CGPoint *)arg1 withVelocity:(struct CGPoint)arg2;
- (double)scrollToDisplayedDateAnimated:(_Bool)arg1;
- (id)pushedListViewControllerWithDate:(id)arg1 animated:(_Bool)arg2;
- (id)pushedDayViewControllerWithDate:(id)arg1 animated:(_Bool)arg2;
- (void)customizeWeekGroupView:(id)arg1;
- (double)headerVerticalOffset;
- (_Bool)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2;
- (void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(_Bool)arg3;
- (_Bool)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(_Bool)arg4 span:(long long)arg5;
- (void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(_Bool)arg3;
- (_Bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)eventViewControllerUseMinimalModeAfterTraitCollectionChange:(id)arg1;
- (int)editorHideTransition;
- (int)editorShowTransition;
- (id)_occurrenceViewForPopoverSource;
- (void)enqueueableManagedNavigationController:(id)arg1 requestsConfigurationOfPropertiesForPopoverPresentationController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enqueuableNavigationController:(id)arg1 requestsDeferShowViewControllerUntilReady:(CDUnknownBlockType)arg2;
- (_Bool)isReadyToShowViewControllersInsideEnqueueableManagedNavigationController:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)_rePresentEditPopoverFromTargetView:(id)arg1;
- (void)_setMinimalModeIfNeededOnEventViewController:(id)arg1;
- (void)_displayEventDetailsViewControllerForSelectedEventWithOccurrenceView:(id)arg1 showComments:(_Bool)arg2;
- (void)_displayEventDetailsViewControllerForEvent:(id)arg1 showComment:(_Bool)arg2;
- (void)_cleanupSelectionState;
- (void)_setSelectedEvent:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)_presentEventViewController:(id)arg1 forOccurrenceView:(id)arg2 animated:(_Bool)arg3 showComments:(_Bool)arg4;
- (void)_occurrenceViewDidEndSelection:(id)arg1;
- (void)_displayOccurrenceViewAsSelectedAndFrontmost:(id)arg1;
- (void)_closeEventPresentationAnimated:(_Bool)arg1;
- (void)_presentDetailViewControllerAsPageSheet:(id)arg1;
- (void)eventViewControllerInlineEditButtonWasTapped:(id)arg1;
- (_Bool)eventViewControllerShouldHandleInlineEdit:(id)arg1;
- (_Bool)eventViewControllerShouldShowInlineEditButtonForInvitations:(id)arg1;
- (_Bool)eventViewControllerShouldHideInlineEditButton;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventViewControllerWillFinishEditingEvent:(id)arg1 deleted:(_Bool)arg2;
- (void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)eventViewDelegateShouldCreateOwnEditViewController:(id)arg1;
- (_Bool)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1;
- (void)eventViewControllerWillBeginEditingEvent:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)updatePalette:(id)arg1;
@property(nonatomic) _Bool isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
- (void)_weekViewDidEndScrolling:(id)arg1;
- (void)updateBannerDateStrings;
- (void)updateNavigationBarDisplayedDateString;
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_tooFarToAnimate:(id)arg1;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3 showComments:(_Bool)arg4;
- (void)_showSelectedEvent;
- (_Bool)allowsOverriddenToolbarItems;
- (_Bool)allowsOverriddenRightNavigationBarItems;
- (long long)presentationStyleOverrideForChildViewControllers;
- (Class)managedNavigationControllerType;
- (void)showViewController:(id)arg1 sender:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_resizeInterfaceForWindowSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end