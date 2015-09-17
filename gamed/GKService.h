//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKService : NSObject
{
    GKClientProxy *_clientProxy;
    GKDataTransport *_transport;
    GKPlayerInternal *_localPlayer;
    GKPlayerCredential *_credential;
}

+ (Class)interfaceClass;
+ (unsigned long long)requiredEntitlements;
+ (id)serviceForBundleID:(id)arg1 localPlayer:(id)arg2;
+ (id)serviceFromService:(id)arg1;
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3;
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 credential:(id)arg3;
@property(retain) GKPlayerCredential *credential; // @synthesize credential=_credential;
@property(retain) GKPlayerInternal *localPlayer; // @synthesize localPlayer=_localPlayer;
@property(retain) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain) GKClientProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
- (id)transactionGroup;
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;
- (_Bool)requiresAuthentication;
- (void)dealloc;
- (id)initWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;
- (id)initWithoutCredentialWithTransport:(id)arg1 forClient:(id)arg2;
- (void)_coreInitWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;

@end