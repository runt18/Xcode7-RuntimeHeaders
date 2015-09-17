//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSDefaultDeviceManagerDelegate : NSObject <XCSDeviceManagerDelegate>
{
    NSTimer *_timer;
    DVTDeviceManager *_deviceManager;
    DVTObservingToken *_observingToken;
    id <DVTCancellable> _deviceAddedToken;
    id <DVTCancellable> _deviceRemovedToken;
    id <DVTCancellable> _deviceConnectionAddedToken;
    id <DVTCancellable> _deviceConnectionRemovedToken;
    struct _AMDeviceNotificationContext *_devicePairedToken;
    XCSDeviceManager *_xcsDeviceManager;
}

@property(retain, nonatomic) XCSDeviceManager *xcsDeviceManager; // @synthesize xcsDeviceManager=_xcsDeviceManager;
@property(nonatomic) struct _AMDeviceNotificationContext *devicePairedToken; // @synthesize devicePairedToken=_devicePairedToken;
@property(retain, nonatomic) id <DVTCancellable> deviceConnectionRemovedToken; // @synthesize deviceConnectionRemovedToken=_deviceConnectionRemovedToken;
@property(retain, nonatomic) id <DVTCancellable> deviceConnectionAddedToken; // @synthesize deviceConnectionAddedToken=_deviceConnectionAddedToken;
@property(retain, nonatomic) id <DVTCancellable> deviceRemovedToken; // @synthesize deviceRemovedToken=_deviceRemovedToken;
@property(retain, nonatomic) id <DVTCancellable> deviceAddedToken; // @synthesize deviceAddedToken=_deviceAddedToken;
@property(retain, nonatomic) DVTObservingToken *observingToken; // @synthesize observingToken=_observingToken;
@property(retain, nonatomic) DVTDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)deviceManagerDidEndObservingDevices:(id)arg1;
- (void)deviceManagerWillBeginObservingDevices:(id)arg1;
- (id)localComputerDeviceForDeviceManager:(id)arg1;
- (id)availableDevicesForDeviceManager:(id)arg1;
- (BOOL)deviceManagerShouldMarkMissingDevicesAsDisconnected:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end