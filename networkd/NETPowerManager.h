//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NETPowerManager : NSObject
{
    _Bool _powerPluggedIn;
    _Bool _thermalConditionIsGood;
    _Bool _deviceInBatterySaverDiscretionaryMode;
    _Bool _powerStateInDarkWake;
    _Bool _powerWillSleep;
    NSMutableArray *_changeHandlers;
    int _powerSourceNotifyToken;
    int _thermalLevelToken;
    int _batterySaverModeToken;
    int _thermalLevel;
    NSArray *_powerPolicyTable;
    NSObject<OS_dispatch_timer_aggregate> *_wakeTimerAggregate;
    NSObject<OS_xpc_object> *_ccXPCActivityCriteria;
    NSDate *_ccXPCActivityLastRunDate;
    NSMutableArray *_outstandingPowerNapXPCActivityIDs;
    struct IONotificationPort *_sleepWakeNotificationPort;
    unsigned int _sleepWakeNotifier;
    unsigned int _sleepWakeConnection;
    unsigned long long _minTimeslotInterval;
    long long _ccXPCActivityDelay;
    long long _ccXPCActivityGracePeriod;
}

+ (id)sharedPowerManager;
@property unsigned int sleepWakeConnection; // @synthesize sleepWakeConnection=_sleepWakeConnection;
@property unsigned int sleepWakeNotifier; // @synthesize sleepWakeNotifier=_sleepWakeNotifier;
@property struct IONotificationPort *sleepWakeNotificationPort; // @synthesize sleepWakeNotificationPort=_sleepWakeNotificationPort;
@property(retain) NSMutableArray *outstandingPowerNapXPCActivityIDs; // @synthesize outstandingPowerNapXPCActivityIDs=_outstandingPowerNapXPCActivityIDs;
@property(retain) NSDate *ccXPCActivityLastRunDate; // @synthesize ccXPCActivityLastRunDate=_ccXPCActivityLastRunDate;
@property(retain) NSObject<OS_xpc_object> *ccXPCActivityCriteria; // @synthesize ccXPCActivityCriteria=_ccXPCActivityCriteria;
@property long long ccXPCActivityGracePeriod; // @synthesize ccXPCActivityGracePeriod=_ccXPCActivityGracePeriod;
@property long long ccXPCActivityDelay; // @synthesize ccXPCActivityDelay=_ccXPCActivityDelay;
@property unsigned long long minTimeslotInterval; // @synthesize minTimeslotInterval=_minTimeslotInterval;
@property(retain) NSObject<OS_dispatch_timer_aggregate> *wakeTimerAggregate; // @synthesize wakeTimerAggregate=_wakeTimerAggregate;
@property(retain) NSArray *powerPolicyTable; // @synthesize powerPolicyTable=_powerPolicyTable;
@property int thermalLevel; // @synthesize thermalLevel=_thermalLevel;
@property int batterySaverModeToken; // @synthesize batterySaverModeToken=_batterySaverModeToken;
@property int thermalLevelToken; // @synthesize thermalLevelToken=_thermalLevelToken;
@property int powerSourceNotifyToken; // @synthesize powerSourceNotifyToken=_powerSourceNotifyToken;
@property(retain) NSMutableArray *changeHandlers; // @synthesize changeHandlers=_changeHandlers;
@property(readonly) _Bool powerWillSleep; // @synthesize powerWillSleep=_powerWillSleep;
@property(readonly) _Bool powerStateInDarkWake; // @synthesize powerStateInDarkWake=_powerStateInDarkWake;
@property(readonly) _Bool deviceInBatterySaverDiscretionaryMode; // @synthesize deviceInBatterySaverDiscretionaryMode=_deviceInBatterySaverDiscretionaryMode;
@property(readonly) _Bool thermalConditionIsGood; // @synthesize thermalConditionIsGood=_thermalConditionIsGood;
@property(readonly) _Bool powerPluggedIn; // @synthesize powerPluggedIn=_powerPluggedIn;
- (void).cxx_destruct;
- (void)triggerPowerNapActivities;
- (void)cancelPowerNapActivity:(id)arg1;
- (_Bool)schedulePowerNapActivity:(id)arg1 atTime:(unsigned long long)arg2 duration:(unsigned long long)arg3;
- (id)cancelPowerPolicyTimer:(id)arg1;
- (id)updatePowerPolicyTimer:(id)arg1 start:(unsigned long long)arg2 duration:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (unsigned int)getTimeslotForStart:(unsigned long long)arg1 duration:(unsigned long long)arg2;
- (void)_getTimeParametersForStart:(unsigned long long)arg1 duration:(unsigned long long)arg2 timeslot:(unsigned int *)arg3 timerStart:(unsigned long long *)arg4 timerInterval:(unsigned long long *)arg5 leeway:(unsigned long long *)arg6 shouldCancelTimer:(_Bool *)arg7;
- (_Bool)isPowerWorkloadPolicySatisfied:(id)arg1 whenExpensive:(_Bool)arg2 lqm:(int)arg3 unsatisfiedReason:(const char **)arg4;
- (_Bool)isPowerPolicySatisfied:(id)arg1 whenExpensive:(_Bool)arg2 lqm:(int)arg3 unsatisfiedReason:(const char **)arg4;
- (id)powerPolicyForTimeslot:(unsigned int)arg1 workload:(unsigned long long)arg2;
- (void)setWakeTimerDelayAndGracePeriod;
- (void)reevaluateWakeTimerAggregate;
- (id)privateDescription;
- (void)notifyClientsPluggedInChanged;
- (void)notifyClientsBatterySaverModeChanged;
- (void)notifyClientsThermalConditionChanged;
- (void)notifyAllClients;
- (void)unregisterChangeHandler:(id)arg1;
- (void)registerChangeHandler:(id)arg1 ifNeededByParameters:(id)arg2;
- (void)registerChangeHandler:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setupPowerPolicyTable;
- (void)setupBatterSaverMode;
- (void)setupDarkWakeAndSleepNotificationCapabilities;
- (void)setupTimers;
- (void)setupThermalLevel;
- (void)setupPluggedIn;
- (void)updateWillSleep:(_Bool)arg1 notificationID:(long)arg2;
- (void)updateDarkWake:(_Bool)arg1 andWillSleep:(_Bool)arg2;
- (void)updatePluggedIn;
- (void)updateBatterySaverMode;
- (void)updateThermalLevel;
- (void)addPowerInformationToPath:(id)arg1;

@end