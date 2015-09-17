//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLStatusBarStateAggregator : NSObject <CSLSConnectionStatusObserver, RadiosPreferencesDelegate>
{
    unsigned int _coalescentBlockDepth;
    _Bool _hasPostedOnce;
    unsigned int _itemPostState[27];
    CDStruct_7953f186 _data;
    int _actions;
    NSHashTable *_postObservers;
    _Bool _notifyingPostObservers;
    _Bool _24HourMode;
    NSDateFormatter *_timeItemDateFormatter;
    NSTimer *_timeItemTimer;
    NSString *_timeItemTimeString;
    _Bool _showingNotChargingItem;
    unsigned int _connectionStatus;
    unsigned int _lastConnectionStatus;
    NSDate *_lastConnectedDate;
    _Bool _showDisconnectedItem;
    RadiosPreferences *_airplaneModeController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_noteBacklightStateDidTurnOn:(id)arg1;
- (void)connectionStatusDidChange:(unsigned int)arg1 lastConnection:(id)arg2;
- (void)airplaneModeChanged;
- (void)_resetTimeItemFormatter;
- (void)_restartTimeItemTimer;
- (void)_stopTimeItemTimer;
- (void)_requestActions:(int)arg1;
- (void)_notifyItemChanged:(int)arg1;
- (_Bool)_setItem:(int)arg1 enabled:(_Bool)arg2;
- (void)_postItem:(int)arg1 withState:(unsigned int)arg2;
- (void)updateStatusBarItem:(int)arg1;
- (void)_noteConnectionStatusChanged;
- (void)_setShowingDisconnectedItem;
- (_Bool)_shouldShowDisconnectedItem;
- (void)_updateDisconnectedItems;
- (void)_noteNotChargingStatusChanged;
- (void)_setShowingNotChargingItem;
- (_Bool)_shouldShowNotChargingItem;
- (void)_updateBatteryItems;
- (void)_updateTimeItems;
- (void)_registerForNotifications;
- (void)removePostingObserver:(id)arg1;
- (void)addPostingObserver:(id)arg1;
- (void)sendStatusBarActions:(int)arg1;
- (void)endCoalescentBlock;
- (void)beginCoalescentBlock;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end