//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _DKStarkMonitor : _DKMonitor
{
}

+ (id)_eventWithState:(id)arg1;
+ (id)entitlements;
+ (id)eventStream;
- (void)onCarplayIsConnectedAttributeNotification:(id)arg1;
- (void)onServerConnectionDiedNotification:(id)arg1;
- (void)registerForCallbacks;
- (void)saveCurrentState;
- (void)stop;
- (void)start;

@end