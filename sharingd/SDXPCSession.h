//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDXPCSession : NSObject <NSXPCListenerDelegate, SDConnectionManagerDelegate>
{
    NSXPCListener *_xpcManagerListener;
    NSMutableArray *_connections;
}

+ (id)sharedSession;
@property(retain) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain) NSXPCListener *xpcManagerListener; // @synthesize xpcManagerListener=_xpcManagerListener;
- (void).cxx_destruct;
- (void)connectionManagerDidInvalidate:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end