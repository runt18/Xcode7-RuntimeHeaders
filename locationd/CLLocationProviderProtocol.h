//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CLLocationProviderProtocol <CLNotifierServiceProtocol>
- (void)setSimulationEnabled:(_Bool)arg1;
- (void)shutdown;
- (void)start;
- (void)updateNotification:(int)arg1 withRegistrationInfo:(CLNotifierData *)arg2 forClient:(byref id <CLLocationProviderClientProtocol>)arg3;
@end