//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CRDiscoveredVehicle : NSObject
{
    NSString *_identifier;
    CRVehicleAccessory *_accessory;
    CRVehicleBluetoothDevice *_bluetoothDevice;
}

@property(nonatomic) __weak CRVehicleBluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
@property(nonatomic) __weak CRVehicleAccessory *accessory; // @synthesize accessory=_accessory;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bluetoothAddress;
@property(readonly, nonatomic) _Bool isConnecting;
@property(readonly, copy, nonatomic) NSString *debugConnectionStatusDescription;
@property(readonly, copy, nonatomic) NSString *connectionStatusDescription;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)init;

@end