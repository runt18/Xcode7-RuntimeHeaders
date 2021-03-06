//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface BKTVOutController : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSSet *_queue_replayCloneContextIDs;
    int _queue_currentVirtualDisplayClientPID;
    _Bool _queue_starkSimulatorAttached;
    unsigned int _queue_currentCloneMirroringMode;
    _Bool _queue_cloneRotationDisabled;
    _Bool _queue_forceTVOutMode;
    _Bool _cloneRotationDisabled;
    int _tvOutMode;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isCloneRotationDisabled) _Bool cloneRotationDisabled; // @synthesize cloneRotationDisabled=_cloneRotationDisabled;
@property int tvOutMode; // @synthesize tvOutMode=_tvOutMode;
- (void)stopListeningForSettingsChanges;
- (void)startListeningForSettingsChanges;
- (void)_tetherSettingChanged:(id)arg1;
- (void)_handleIapServerConnectionDied;
@property(retain, nonatomic) NSSet *replayCloneContextIDs;
- (void)setVirtualDisplayClientPID:(int)arg1;
- (void)setCloneMirroringMode:(unsigned int)arg1;
- (void)_queue_setInitialTVModeIfNeeded;
- (void)_queue_updateLayerKitSettings;
- (void)updateSettings;
- (void)_queue_updateWirelessCloneDisplay;
- (void)_writeCurrentScreenSizeToAggregated:(struct CGSize)arg1;
- (void)_queue_addClone:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end