//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NRRegistryDaemon : NSObject <NSXPCListenerDelegate, NRPairedDeviceRegistryXPCDaemonDelegate, NRLocalPropertyMonitorObserver, NRRemoteObjectClassCDelegate, NRRemoteObjectClassDDelegate, NRRemoteObjectDelegate, NRStateMachineDelegate, NRXPCProxyDelegate, NRRegistryProxyDelegate, NRRecoveryManagerDelegate>
{
    unsigned long long _devicesUpdateCounter;
    _Bool _notFirstIDSInit;
    _Bool _isSecurePropertiesLoaded;
    _Bool _initRemoteProperties;
    _Bool _runBridgeDialogRunsBridge;
    _Bool _lastUnpairAlertPresented;
    _Bool _version4CompatibilityWorkaround;
    _Bool _isStateMachineEnabled;
    _Bool _isRemoteUserRequestedAbort;
    _Bool _isPairedWhenUnpairing;
    _Bool _isFakePairingStateUnknown;
    unsigned int _xpcTransactionHasBegun;
    int _pairedStateNotifyToken;
    int _statusCodeNotifyToken;
    int _compatibilityStateNotifyToken;
    int _devicesUpdateCounterNotifyToken;
    NSDate *_pairedDevicesFreshness;
    NSMutableDictionary *_pairedDevices;
    NSMutableDictionary *_discoveredDevices;
    NRStateMachine *_machine;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSMutableArray *_xpcClients;
    NSXPCListener *_xpcListener;
    NSXPCConnection *_xpcLaunchDConnection;
    NSMutableDictionary *_pairingClients;
    NRLocalPropertyMonitor *_localProperties;
    PCPersistentTimer *_saveTimer;
    PCPersistentTimer *_redisplayRunBridgeAlertTimer;
    PCPersistentTimer *_xpcTransactionTimer;
    NSLock *_xpcTransactionTimerLock;
    NRRemoteObjectClassD *_idsService;
    NRRemoteObjectClassC *_idsServiceClassC;
    NSObject *_backupManager;
    MCProfileConnection *_mcConnection;
    id <NSObject> _mcConnectionSettingsChangedNotificationToken;
    struct __CFRunLoopSource *_runBridgeDialogRunLoopSource;
    struct __CFUserNotification *_runBridgeDialog;
    NRRecoveryManager *_recoveryManager;
    unsigned long long _lastUnpairReason;
    long long _version4CompatibilityWorkaroundVersion;
    long long _oldVersion4CompatibilityWorkaroundVersion;
    long long _maxPairingCompatibilityVersion;
    long long _minPairingCompatibilityVersion;
    NSMutableArray *_bluetoothInitBlocks;
    NSLock *_bluetoothInitBlockLock;
    NSLock *_bluetoothUnpairBlockSetsLock;
    NSMutableDictionary *_bluetoothUnpairBlockSets;
    NRAlbertPairingReporter *_albertPairingReporter;
}

+ (void)decrementConnectionCounter;
+ (_Bool)paranoidWriteData:(id)arg1 toFile:(id)arg2 withFileProtection:(_Bool)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NRAlbertPairingReporter *albertPairingReporter; // @synthesize albertPairingReporter=_albertPairingReporter;
@property(retain, nonatomic) NSMutableDictionary *bluetoothUnpairBlockSets; // @synthesize bluetoothUnpairBlockSets=_bluetoothUnpairBlockSets;
@property(retain, nonatomic) NSLock *bluetoothUnpairBlockSetsLock; // @synthesize bluetoothUnpairBlockSetsLock=_bluetoothUnpairBlockSetsLock;
@property(retain, nonatomic) NSLock *bluetoothInitBlockLock; // @synthesize bluetoothInitBlockLock=_bluetoothInitBlockLock;
@property(retain, nonatomic) NSMutableArray *bluetoothInitBlocks; // @synthesize bluetoothInitBlocks=_bluetoothInitBlocks;
@property(nonatomic) _Bool isFakePairingStateUnknown; // @synthesize isFakePairingStateUnknown=_isFakePairingStateUnknown;
@property(nonatomic) _Bool isPairedWhenUnpairing; // @synthesize isPairedWhenUnpairing=_isPairedWhenUnpairing;
@property(nonatomic) int devicesUpdateCounterNotifyToken; // @synthesize devicesUpdateCounterNotifyToken=_devicesUpdateCounterNotifyToken;
@property(nonatomic) int compatibilityStateNotifyToken; // @synthesize compatibilityStateNotifyToken=_compatibilityStateNotifyToken;
@property(nonatomic) int statusCodeNotifyToken; // @synthesize statusCodeNotifyToken=_statusCodeNotifyToken;
@property(nonatomic) int pairedStateNotifyToken; // @synthesize pairedStateNotifyToken=_pairedStateNotifyToken;
@property(nonatomic) _Bool isRemoteUserRequestedAbort; // @synthesize isRemoteUserRequestedAbort=_isRemoteUserRequestedAbort;
@property(nonatomic) _Bool isStateMachineEnabled; // @synthesize isStateMachineEnabled=_isStateMachineEnabled;
@property(nonatomic) long long minPairingCompatibilityVersion; // @synthesize minPairingCompatibilityVersion=_minPairingCompatibilityVersion;
@property(nonatomic) long long maxPairingCompatibilityVersion; // @synthesize maxPairingCompatibilityVersion=_maxPairingCompatibilityVersion;
@property(nonatomic) long long oldVersion4CompatibilityWorkaroundVersion; // @synthesize oldVersion4CompatibilityWorkaroundVersion=_oldVersion4CompatibilityWorkaroundVersion;
@property(nonatomic) long long version4CompatibilityWorkaroundVersion; // @synthesize version4CompatibilityWorkaroundVersion=_version4CompatibilityWorkaroundVersion;
@property(nonatomic) _Bool version4CompatibilityWorkaround; // @synthesize version4CompatibilityWorkaround=_version4CompatibilityWorkaround;
@property(nonatomic) _Bool lastUnpairAlertPresented; // @synthesize lastUnpairAlertPresented=_lastUnpairAlertPresented;
@property(nonatomic) unsigned long long lastUnpairReason; // @synthesize lastUnpairReason=_lastUnpairReason;
@property(retain, nonatomic) NRRecoveryManager *recoveryManager; // @synthesize recoveryManager=_recoveryManager;
@property(nonatomic) _Bool runBridgeDialogRunsBridge; // @synthesize runBridgeDialogRunsBridge=_runBridgeDialogRunsBridge;
@property(nonatomic) struct __CFUserNotification *runBridgeDialog; // @synthesize runBridgeDialog=_runBridgeDialog;
@property(nonatomic) struct __CFRunLoopSource *runBridgeDialogRunLoopSource; // @synthesize runBridgeDialogRunLoopSource=_runBridgeDialogRunLoopSource;
@property(nonatomic) _Bool initRemoteProperties; // @synthesize initRemoteProperties=_initRemoteProperties;
@property(nonatomic) _Bool isSecurePropertiesLoaded; // @synthesize isSecurePropertiesLoaded=_isSecurePropertiesLoaded;
@property(retain, nonatomic) id <NSObject> mcConnectionSettingsChangedNotificationToken; // @synthesize mcConnectionSettingsChangedNotificationToken=_mcConnectionSettingsChangedNotificationToken;
@property(retain, nonatomic) MCProfileConnection *mcConnection; // @synthesize mcConnection=_mcConnection;
@property(retain, nonatomic) NSObject *backupManager; // @synthesize backupManager=_backupManager;
@property(nonatomic) _Bool notFirstIDSInit; // @synthesize notFirstIDSInit=_notFirstIDSInit;
@property(retain, nonatomic) NRRemoteObjectClassC *idsServiceClassC; // @synthesize idsServiceClassC=_idsServiceClassC;
@property(retain, nonatomic) NRRemoteObjectClassD *idsService; // @synthesize idsService=_idsService;
@property(nonatomic) unsigned int xpcTransactionHasBegun; // @synthesize xpcTransactionHasBegun=_xpcTransactionHasBegun;
@property(retain, nonatomic) NSLock *xpcTransactionTimerLock; // @synthesize xpcTransactionTimerLock=_xpcTransactionTimerLock;
@property(retain, nonatomic) PCPersistentTimer *xpcTransactionTimer; // @synthesize xpcTransactionTimer=_xpcTransactionTimer;
@property(retain, nonatomic) PCPersistentTimer *redisplayRunBridgeAlertTimer; // @synthesize redisplayRunBridgeAlertTimer=_redisplayRunBridgeAlertTimer;
@property(retain, nonatomic) PCPersistentTimer *saveTimer; // @synthesize saveTimer=_saveTimer;
@property(retain, nonatomic) NRLocalPropertyMonitor *localProperties; // @synthesize localProperties=_localProperties;
@property(retain, nonatomic) NSMutableDictionary *pairingClients; // @synthesize pairingClients=_pairingClients;
@property(retain, nonatomic) NSXPCConnection *xpcLaunchDConnection; // @synthesize xpcLaunchDConnection=_xpcLaunchDConnection;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSMutableArray *xpcClients; // @synthesize xpcClients=_xpcClients;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *deviceQueue; // @synthesize deviceQueue=_deviceQueue;
@property(retain, nonatomic) NRStateMachine *machine; // @synthesize machine=_machine;
@property(retain, nonatomic) NSMutableDictionary *discoveredDevices; // @synthesize discoveredDevices=_discoveredDevices;
@property(retain, nonatomic) NSMutableDictionary *pairedDevices; // @synthesize pairedDevices=_pairedDevices;
@property(retain, nonatomic) NSDate *pairedDevicesFreshness; // @synthesize pairedDevicesFreshness=_pairedDevicesFreshness;
@property(readonly, nonatomic) unsigned long long devicesUpdateCounter; // @synthesize devicesUpdateCounter=_devicesUpdateCounter;
- (void).cxx_destruct;
- (void)remoteObject:(id)arg1 receivedPairingModeRequest:(unsigned short)arg2;
- (void)remoteObject:(id)arg1 receivedPropertyRequestWithRequestIdentifier:(id)arg2;
- (void)remoteObject:(id)arg1 receivedPropertyChanges:(id)arg2 isAllProperties:(_Bool)arg3;
- (void)remoteObject:(id)arg1 receivedUnpairRequestWithAdvertisedName:(id)arg2 shouldObliterate:(_Bool)arg3 withPairingFailureCode:(id)arg4 withAbortReason:(id)arg5 withRequestIdentifier:(id)arg6;
- (void)_updatePairedDevicePropertiesFromIDSDevice:(id)arg1;
- (void)_isIDSReady;
- (void)remoteObjectIDSServiceUnavailable:(id)arg1;
- (void)remoteObjectIDSServiceAvailable:(id)arg1 withIDSDevice:(id)arg2;
- (void)remoteObjectAllowedTrafficClassifiersDidReset:(id)arg1;
- (void)_updateIDSIsReadyWithBOOL:(_Bool)arg1 andBOOL:(_Bool)arg2;
- (void)initIDSAsync;
- (void)xpcAddRemoveRecoveryStepIDSFinalize:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)xpcAddRemoveRecoveryStepObliterate:(_Bool)arg1 withStatePath:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)xpcAddRemoveRecoveryStepResetNVRAM:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)xpcAddRemoveRecoveryStepICloudDeletePaymentCards:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)xpcAddRemoveRecoveryStepStockholmReset:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)xpcAddRemoveRecoveryStepIDSUnpair:(_Bool)arg1 withPairingDeviceID:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)xpcAddRemoveRecoveryStepUnpairBluetooth:(_Bool)arg1 withPairingDeviceID:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)xpcAddRemoveRecoveryStepDeletePairingStore:(_Bool)arg1 withPairingDeviceID:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)xpcAddRemoveRecoveryStepRemoteUnpair:(_Bool)arg1 withAdvertisedName:(id)arg2 andPairedDeviceID:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)xpcAddRemoveRecoveryStepIDSUnpairStart:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)xpcAddRemoveRecoveryStepDeleteAccounts:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)xpcAddRemoveRecoveryStepBackup:(_Bool)arg1 withPairingDeviceID:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)xpcAddRemoveRecoveryStepDisableDaemons:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)xpcSetObliterationEnabled:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)xpcTriggerRecovery:(CDUnknownBlockType)arg1;
- (void)xpcRecoveryDescription:(CDUnknownBlockType)arg1;
- (void)xpcRetriggerUnpairInfoDialogWithBlock:(CDUnknownBlockType)arg1;
- (id)getPairingID;
- (void)xpcResumePairingClientCrashMonitoring:(CDUnknownBlockType)arg1;
- (void)xpcSuspendPairingClientCrashMonitoring:(CDUnknownBlockType)arg1;
- (void)xpcQueryStatus:(id)arg1 statusData:(CDUnknownBlockType)arg2;
- (void)xpcSendStatus;
- (_Bool)_xpcConnectToNanoRegistryLaunchDService;
- (void)_unpairWithDeviceID:(id)arg1 shouldObliterate:(_Bool)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)xpcUnpairWithDeviceID:(id)arg1 shouldObliterate:(_Bool)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)abortPairingUserRequested;
- (void)xpcProxyLostConnection:(id)arg1;
- (void)_enterCompatibilityState:(unsigned short)arg1 withDeviceID:(id)arg2;
- (void)xpcEnterCompatibilityState:(unsigned short)arg1 withDeviceID:(id)arg2;
- (void)_pairingShouldContinue;
- (void)xpcPairingShouldContinue;
- (void)_notifyPasscode:(id)arg1 withDeviceID:(id)arg2;
- (void)xpcNotifyPasscode:(id)arg1 withDeviceID:(id)arg2;
- (void)_notifyActivationCompleted:(id)arg1 withSuccess:(_Bool)arg2;
- (void)xpcNotifyActivationCompleted:(id)arg1 withSuccess:(_Bool)arg2;
- (void)_appTerminatedAbortPairing;
- (void)xpcAbortPairingReason:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)handleDeadPairingClient;
- (void)shouldAddPairingClientWithBool:(_Bool)arg1 andClientUUID:(id)arg2;
- (void)_gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)xpcGizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)_gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)xpcGizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)_companionPasscodePairWithDeviceID:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)xpcCompanionPasscodePairWithDeviceID:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)_companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)xpcCompanionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)xpcGetPairingStorePathAndPairingID:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool pairing;
- (void)_setValue:(id)arg1 forProperty:(id)arg2 deviceID:(id)arg3;
- (unsigned long long)incrementDevicesUpdateCounter;
- (unsigned long long)readDevicesUpdateCounter;
- (void)xpcSetValue:(id)arg1 forProperty:(id)arg2 deviceID:(id)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)xpcStartListener;
- (void)updateFromBTState;
- (void)processEvent:(id)arg1;
- (void)checkIfVersion4WorkaroundVersionChanged;
- (void)xpcSubmitAlbertPairingReport:(CDUnknownBlockType)arg1;
- (void)xpcTriggerVersion4Workaround;
- (void)pushVersion4CompatibilityMessageIfNeeded;
- (_Bool)shouldVersion4CompatibilityBeEnabled;
- (void)startRecovery;
- (_Bool)hasRecoverySteps;
- (void)_redisplayRunBridgeDialog:(id)arg1;
- (void)setRedisplayRunBridgeDialogTimer;
- (void)clearRedisplayRunBridgeAlertTimer;
- (_Bool)isDeviceUnlocked;
- (void)clearPairingAgentDelegate;
- (void)setPairingAgentDelegate;
- (void)updateLastUnpairReason:(unsigned long long)arg1;
- (id)sharedRecoveryManager;
- (void)unregisterAccountFromiCloud;
- (void)sendXPCCompatibilityStateDidChangeMessage:(unsigned short)arg1 withDeviceID:(id)arg2;
- (void)displayUpdateCompanionDialog;
- (void)displayRunBridgeDialog:(unsigned long long)arg1;
- (id)localizedString:(id)arg1;
- (void)displayRunBridgeDialog;
- (void)runBridgeNotificationCallbackWithNotification:(struct __CFUserNotification *)arg1 withResponseFlags:(unsigned long long)arg2;
- (void)fakePairingUnpair:(CDUnknownBlockType)arg1;
- (void)fakePairingPair:(id)arg1;
- (void)checkFakePairingStatus;
- (void)_finishedCheckingFakePairingStatus:(unsigned int *)arg1 again:(unsigned int *)arg2;
- (void)requestGizmoTransitionToCompatibilityState:(unsigned short)arg1 retryDelay:(long long)arg2;
- (void)requestGizmoTransitionToCompatibilityState:(unsigned short)arg1;
- (void)IDSLocalSetupUnpairStart;
- (void)setBridgeBadge;
- (void)clearBridgeBadge;
- (_Bool)_checkIfFakePairingIsEnabled;
- (_Bool)isFakePairingEnabled;
- (_Bool)isDemoModeEnabled;
- (void)IDSSetTrafficMode:(unsigned short)arg1;
- (id)getCompatibilityStateString:(unsigned short)arg1;
- (void)deleteAccounts;
- (void)sendXPCOOBKeyChanged:(id)arg1;
- (id)getOOBKey;
- (void)beginDiscovery;
- (void)sendRemoteUnpairingDidBeginNotification;
- (id)getAdvertisedNameFromDevice:(id)arg1;
- (void)clearStateMachineTimeout:(id)arg1;
- (void)createStateMachineTimeout:(id)arg1 withDuration:(double)arg2;
- (void)resumeStateMachineTimeout:(id)arg1;
- (void)suspendStateMachineTimeout:(id)arg1;
- (void)clearStateMachineTimeouts;
- (void)IDSLocalSetupComplete;
- (void)setOOBPairingEnabled:(_Bool)arg1;
- (void)beginBackup;
- (void)notifyPairingBeginning:(id)arg1;
- (void)updateDeviceAdvertisedName:(id)arg1 withAdvertisedName:(id)arg2;
- (id)getDiscoveredDevice:(id)arg1 withAdvertisedName:(id)arg2 withBluetoothPeer:(id)arg3;
- (void)createDiscoveredDevice:(id)arg1 withAdvertisedName:(id)arg2 withBluetoothPeer:(id)arg3;
- (void)createDiscoveredDevice:(id)arg1 withAdvertisedName:(id)arg2;
- (void)beginAdvertising:(id)arg1;
- (_Bool)isBluetoothPaired:(id)arg1;
- (void)checkIfIdle:(id)arg1;
- (void)xpcTransactionDidEnd;
- (void)xpcExpireTransactionAfterDelay;
- (void)xpcTransactionDidBegin;
- (void)_setXPCTransactionTimer;
- (void)_clearXPCTransactionWithoutLock;
- (void)_clearXPCTransaction;
- (void)_createXPCTransactionLock;
- (void)notifyStateChanged;
- (void)IDSConnectPairedDevice:(id)arg1;
- (void)IDSDeletePairedDevice:(id)arg1;
- (_Bool)isIDSPaired:(id)arg1;
- (id)IDSGetPairedDevices;
- (void)IDSAddPairedDevice:(id)arg1;
- (void)IDSLocalSetupUnpair;
- (void)IDSLocalSetupStop;
- (void)IDSLocalSetupStart;
- (void)notifyActivationBeginning:(id)arg1;
- (void)setIsActive:(_Bool)arg1 withDeviceID:(id)arg2;
- (void)setIsPaired:(_Bool)arg1 withDeviceID:(id)arg2;
- (void)sendPropertyRequestWithTimeout:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_updatePropertiesWithProperties:(id)arg1;
- (void)idsSendProperties:(id)arg1 thisIsAllOfThem:(_Bool)arg2;
- (id)_getSunriseDate;
- (void)localMonitor:(id)arg1 propertiesDidChange:(id)arg2 thisIsAllOfThem:(_Bool)arg3;
- (void)resetStockholm;
- (void)deleteLocalPairingStore:(id)arg1;
- (_Bool)createLocalPairingStore:(id)arg1;
- (void)obliterateDevice:(id)arg1;
- (void)_deleteAllCards:(CDUnknownBlockType)arg1;
- (void)_obliterateIfPasscode:(id)arg1;
- (void)obliterateIfPasscode;
- (void)sendIDSUnpairRequest:(_Bool)arg1;
- (void)enableDaemonsWithBlock:(CDUnknownBlockType)arg1;
- (void)disableDaemonsWithBlock:(CDUnknownBlockType)arg1;
- (void)disableDaemons;
- (void)enableDaemons;
- (void)pollProperties;
- (void)refreshPropertyCache;
- (void)removeDeviceFromPairedList:(id)arg1;
- (void)sendXPCBTPairRequestMessage:(id)arg1;
- (void)sendXPCDeviceNeedsPasscodeMessage:(id)arg1 passcode:(id)arg2;
- (void)sendXPCUnpairSuccessMessage:(id)arg1;
- (void)sendXPCPairFailureMessage:(id)arg1 error:(id)arg2;
- (void)moveDeviceToPairedList:(id)arg1;
- (void)sendCreateDeviceMessageWithDeviceID:(id)arg1;
- (void)activateDevice:(id)arg1;
- (void)respondToBluetoothPasscodePairingRequest:(id)arg1 key:(id)arg2;
- (void)failBluetoothPairingRequest:(id)arg1;
- (void)sendXPCPairSuccessMessage:(id)arg1;
- (void)respondToBluetoothOOBPairingRequest:(id)arg1 key:(id)arg2;
- (void)sendBluetoothUnpairingRequest:(id)arg1;
- (void)forceEndDiscovery;
- (void)forceEndAdvertising;
- (void)cancelCompanionBluetoothPairingRequest:(id)arg1;
- (void)sendCompanionBluetoothPairingRequest:(id)arg1;
- (void)grabPairingAgent;
- (void)updateIsPairedAggDKey:(id)arg1;
- (id)makeLocalPairingStorePairingID:(id)arg1;
- (id)getLocalPairingStorePairingID:(id)arg1;
- (id)_deviceForDeviceID:(id)arg1;
- (void)unpairBluetoothDevicesWithPeers:(id)arg1 andQueue:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (void)fireBluetoothUnpairBlocksWithPeer:(id)arg1;
- (void)unregisterBluetoothUnpairBlockWithToken:(id)arg1;
- (id)registerBluetoothUnpairBlockWithIdentifier:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getBluetoothPairedPeersWithQueue:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (id)getPairedPeer:(id)arg1;
- (id)_pathToUnpairTriggerFile;
- (id)_pathToNanoRegistryUnpairTriggerFileDirectory;
- (id)_pathToRecoveryStateFile;
- (id)_pathToSecureDevicePropertiesFile;
- (id)_pathToStateMachineStateFile;
- (id)_pathToDevicePropertiesFile;
- (id)_pathToNanoRegistryPairingStorePathDirectory;
- (id)_pathToNanoRegistryStateDirectory;
- (_Bool)_saveNRState;
- (void)scheduleSave;
- (id)secureDataFile;
- (id)dataFile;
- (id)archiveObject:(id)arg1 withSecureItems:(_Bool)arg2;
- (void)dealloc;
- (_Bool)loadSecureProperties;
- (void)recoveryManagerDidBeginRecovery:(id)arg1;
- (void)recoveryManagerDidEndRecovery:(id)arg1;
- (void)reportPairingError;
- (void)resetRecoverySteps;
- (_Bool)isInternalInstall;
- (void)normalizeDaemonState;
- (void)deviceUnlocked;
- (_Bool)managedConfigurationWatchDisabled;
- (void)unregisterManagedConfigurationChanged;
- (void)registerManagedConfigurationChanged:(CDUnknownBlockType)arg1;
- (void)enableStateMachine;
- (unsigned long long)readNotifyToken:(int)arg1;
- (void)updateNotifyToken:(int)arg1 withValue:(unsigned long long)arg2 withNotificationName:(id)arg3;
- (void)initNotifyTokens;
- (int)getNotifyTokenWithName:(id)arg1;
- (void)initializeAndShouldLoadStateMachine:(_Bool)arg1;
- (void)initLocalProperties;
- (void)checkAndUpdateLastUnpairReason;
- (void)allocateDictionaries;
- (void)ackXPCEvents;
- (id)init;
- (_Bool)initializeStateMachineAndShouldLoad:(_Bool)arg1;
- (_Bool)sanityCheckState;
- (void)findPairedDeviceWithBlock:(CDUnknownBlockType)arg1;
- (id)findPairedDevice;
- (_Bool)pairingCompatibilityVersionInit;
- (void)initBluetoothWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)loadFromNewStateFiles;
- (_Bool)unpairTriggerFileDoesNotExist;
- (void)createUnpairTriggerFile:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end