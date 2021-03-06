//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RemindersApp : UIApplication <UIApplicationDelegate>
{
    NSMutableArray *_sortedCalendars;
    CLLocationManager *_locationManager;
    UIWindow *_window;
    NSMutableDictionary *_cardControllersByCalendar;
    NSMutableDictionary *_contentControllersByCalendar;
    RemindersCardController *_scheduledCard;
    RemindersScheduledListController *_scheduledList;
}

- (void).cxx_destruct;
- (void)_updateEverConnectedToCar;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)_displayInvitationForUserActivity:(id)arg1;
- (void)_displayScheduledCard;
- (void)_displayCalendar:(id)arg1;
- (id)archivedSortedLists;
- (void)archive:(_Bool)arg1;
- (void)calendarsChanged;
- (void)calendarsChangedWithChangedObjectIDs:(id)arg1;
- (int)highestDisplayOrderInSource:(id)arg1;
- (id)sortedDisplayOrders:(id)arg1;
- (void)assignDisplayOrders:(id)arg1;
- (void)moveCalendar:(id)arg1 toSortedIndex:(long long)arg2;
- (void)deleteCalendar:(id)arg1;
- (void)addCalendar:(id)arg1;
- (id)sortedCalendars;
- (void)_alarmsDidFire;
- (void)eventStoreChanged:(id)arg1;
- (id)createReminderInCalendar:(id)arg1;
- (void)removeUnnecessaryCachedControllers;
- (id)contentControllerForCalendarToDisplay:(id)arg1 useCache:(_Bool)arg2;
- (id)cardControllerForCalendarToDisplay:(id)arg1 useCache:(_Bool)arg2;
- (struct CGRect)detailViewContentRect;
- (void)reenableLocationReminders;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)didRemoveDeactivationReason:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationDidResume;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)reminderURLFromLaunchURL:(id)arg1 openedViaBB:(_Bool *)arg2 isLocation:(_Bool *)arg3;
- (void)dealloc;
- (id)_extendLaunchTest;
- (void)_simulateExternalChange;
- (void)startSearchTestWithName:(id)arg1 options:(id)arg2;
- (void)startScrollListWithCompletedTestWithName:(id)arg1 options:(id)arg2;
- (void)startScrollScheduledRemindersCardTestWithName:(id)arg1 simulateSync:(_Bool)arg2 options:(id)arg3;
- (void)startShowScheduledRemindersCardTestWithName:(id)arg1 options:(id)arg2;
- (void)startScrollRemindersCardStackTestWithName:(id)arg1 options:(id)arg2;
- (_Bool)runTest:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end