//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RemindersScheduledListController : RemindersListController <UIGestureRecognizerDelegate>
{
    EKReminder *_newTodayReminder;
    EKReminder *_newTomorrowReminder;
    NSMutableDictionary *_headerViews;
    UITapGestureRecognizer *_tableTapRecognizer;
    NSDateComponents *_firstVisibleDateComponentsBeforeReload;
}

+ (double)headerHeight;
- (void).cxx_destruct;
- (id)dueDateStringForReminder:(id)arg1 date:(id)arg2;
- (_Bool)shouldRemoveSectionForDelete:(id)arg1;
- (void)setCellProperties:(id)arg1 fromReminder:(id)arg2 ignoringTitle:(_Bool)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)indexPathForNewReminderInSection:(long long)arg1;
- (id)reminderAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isTodayUncompletedSection:(long long)arg1;
- (void)updateShowCompletedButton;
- (void)showCompletedReminders;
- (void)setStatus:(int)arg1 animated:(_Bool)arg2;
- (_Bool)saveNewReminder:(id)arg1 withTitle:(id)arg2;
- (void)beginEditingNewReminderInSection:(long long)arg1;
- (void)setupReminder:(id)arg1 inSection:(long long)arg2;
- (_Bool)reminderIsDueToday:(id)arg1;
- (id)timeDueToday;
- (_Bool)isTomorrowSection:(long long)arg1;
- (_Bool)matchesReminder:(id)arg1;
- (long long)modelIndexForTableSection:(long long)arg1;
- (_Bool)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(struct CGPoint)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateTableTapRecognizer;
- (void)_tableTapped:(id)arg1;
- (void)headerEditButtonTapped;
- (void)configureHeaderView:(id)arg1;
- (unsigned long long)positionOfDeadlineInCells;
- (_Bool)hasReminderAtIndexPath:(id)arg1;
- (_Bool)shouldLoadOnAppearing;
- (_Bool)isScheduled;
- (void)reloadChangedObjectIDs;
- (void)modelFinishedInitialLoad:(id)arg1;
- (id)scheduledListModel;
- (Class)classForListModel;
- (int)headerViewStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end