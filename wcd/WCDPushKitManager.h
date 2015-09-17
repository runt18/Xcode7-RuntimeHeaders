//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WCDPushKitManager : NSObject <WCDSystemObserver, NSXPCListenerDelegate, APSConnectionDelegate, WCDPKClientDelegate>
{
    NSXPCListener *_xpcListener;
    APSConnection *_productionConnection;
    APSConnection *_developmentConnection;
    NSMutableDictionary *_bundleIDToClient;
    NSHashTable *_clientsDeniedComplicationRegister;
}

+ (id)topicsFromBundleIDs:(id)arg1;
+ (id)topicFromBundleId:(id)arg1;
+ (id)bundleIDsFromTopics:(id)arg1;
+ (id)bundleIDFromTopic:(id)arg1;
+ (id)sharedPushKitManager;
@property(readonly, copy, nonatomic) NSHashTable *clientsDeniedComplicationRegister; // @synthesize clientsDeniedComplicationRegister=_clientsDeniedComplicationRegister;
@property(readonly, copy, nonatomic) NSMutableDictionary *bundleIDToClient; // @synthesize bundleIDToClient=_bundleIDToClient;
@property(readonly, nonatomic) APSConnection *developmentConnection; // @synthesize developmentConnection=_developmentConnection;
@property(readonly, nonatomic) APSConnection *productionConnection; // @synthesize productionConnection=_productionConnection;
@property(readonly, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void).cxx_destruct;
- (void)releaseAssertionForClient:(id)arg1;
- (void)launchClient:(id)arg1;
- (void)releaseAssertionForBundleID:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)clientRequestingComplicationUnregister:(id)arg1;
- (void)clientRequestingComplicationRegister:(id)arg1;
- (void)clientXPCConnectionDidDisconnect:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)systemObserverComplicationsInstalledChanged;
- (void)systemObserverActiveComplicationsChanged;
- (void)debugInfoRequested:(id)arg1;
- (id)stateDump;
- (void)dealloc;
- (void)setUpInitialState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end