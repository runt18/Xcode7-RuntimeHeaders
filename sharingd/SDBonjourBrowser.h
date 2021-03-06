//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDBonjourBrowser : NSObject <SDWormholeClientDelegate, SDAirDropIconCacherDelegate>
{
    _Bool _isAirDrop;
    _Bool _isNetBIOS;
    _Bool _isMyDomain;
    _Bool _isWorkgroups;
    int _maxServices;
    NSString *_domain;
    NSNumber *_isFinder;
    long _mode;
    unsigned int _awdlIndex;
    NSTimer *_restartTimer;
    SDStatusMonitor *_monitor;
    struct _DNSServiceRef_t *_connection;
    double _firstTime;
    double _startTime;
    NSMutableDictionary *_servers;
    NSMutableDictionary *_iconCache;
    NSMutableDictionary *_dnsQueries;
    NSMutableDictionary *_serverCache;
    NSMutableDictionary *_iconCachers;
    NSMutableDictionary *_wormholeRequests;
    struct __CFDictionary *_identityQueries;
    NSString *_bundleID;
    NSArray *_types;
    id <SDBonjourBrowserDelegate> _delegate;
}

@property __weak id <SDBonjourBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSArray *types; // @synthesize types=_types;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)restartAfterDelay:(double)arg1;
- (void)queryRecordTimerCallBack:(id)arg1;
- (void)handleQueryCallBack:(unsigned int)arg1 error:(int)arg2 fullname:(const char *)arg3 rrtype:(unsigned short)arg4 rdlen:(unsigned short)arg5 rdata:(const void *)arg6;
- (void)processNULLRecordUpdate:(const char *)arg1 rdlen:(unsigned short)arg2 rdata:(const void *)arg3;
- (void)processTXTRecordUpdate:(const char *)arg1 rdlen:(unsigned short)arg2 rdata:(const void *)arg3;
- (id)valueForKey:(id)arg1 inTXTRecord:(const void *)arg2 withLength:(unsigned short)arg3;
- (id)serviceFromServiceName:(id)arg1;
- (id)odiskMountPoints:(id)arg1;
- (void)handleBrowseCallBack:(unsigned int)arg1 interface:(unsigned int)arg2 error:(int)arg3 name:(const char *)arg4 type:(const char *)arg5 domain:(const char *)arg6;
- (_Bool)validAirDropInterface:(unsigned int)arg1;
- (void)notifyClientIfDone:(unsigned int)arg1;
- (void)notifyClient;
@property(readonly, copy) NSString *virtualDomain;
@property(readonly, copy) NSString *domain;
- (void)personIconChanged:(id)arg1 iconData:(id)arg2;
- (void)setIconData:(id)arg1 iconHash:(id)arg2 forPerson:(struct __SFNode *)arg3;
- (void)legacyModeChanged:(id)arg1;
- (void)linkStateChanged:(id)arg1;
- (void)wirelessPowerChanged:(id)arg1;
- (void)somethingChanged:(id)arg1;
- (void)screenStatusChanged:(id)arg1;
- (void)consoleUserChanged:(id)arg1;
- (void)lockStatusChanged:(id)arg1;
- (void)airDropPublished:(id)arg1;
- (void)addressBookChanged:(id)arg1;
- (void)cancelIdentityQueries;
- (void)startIdentityQueryForNode:(struct __SFNode *)arg1;
- (void)personInfoChanged:(id)arg1 flags:(id)arg2 cname:(id)arg3 phash:(id)arg4 ehash:(id)arg5 nhash:(id)arg6;
- (void)cancelWormholeRequests;
- (void)startWormholeRequestForNode:(struct __SFNode *)arg1 type:(id)arg2;
- (void)wormholeClient:(id)arg1 event:(long)arg2 withResults:(id)arg3;
- (void)cleanupWormholeRequest:(id)arg1;
- (void)handleIdentityCallback:(struct __CSIdentityQuery *)arg1 event:(long)arg2 error:(struct __CFError *)arg3;
- (void)updateIdentityWithQueryResults:(struct __CSIdentityQuery *)arg1;
- (void)clearCacheAndNotify;
- (void)cancelIdentityQuery:(struct __CSIdentityQuery *)arg1;
- (void)iconCacher:(id)arg1 didStoreDataWithError:(id)arg2;
- (void)iconCacher:(id)arg1 didFetchDataWithError:(id)arg2;
- (id)iconCacherKey:(id)arg1 pictureHash:(id)arg2;
- (void)startPictureQuery:(id)arg1;
- (void)commentChanged:(id)arg1 comment:(id)arg2;
- (void)deviceInfoChanged:(id)arg1 model:(id)arg2 ecolor:(id)arg3 osxvers:(id)arg4;
- (id)redGreenBlueFromEcolor:(id)arg1;
- (void)systemInfoChanged:(id)arg1 diskInfo:(struct __CFDictionary *)arg2;
- (struct __SFNode *)copyNodeForService:(id)arg1;
- (struct __SFNode *)copyNodeForName:(id)arg1;
- (void)ejectDisksIfNecessary:(id)arg1 diskNames:(id)arg2;
- (void)removeService:(id)arg1 type:(id)arg2 domain:(id)arg3;
- (void)cleanupRecordQueryForNetService:(id)arg1 recordType:(unsigned short)arg2;
- (void)cleanupRecordQuery:(id)arg1 type:(id)arg2 domain:(id)arg3 recordType:(unsigned short)arg4;
- (void)cleanupRecordQueryForKey:(id)arg1;
- (void)startRecordQuery:(id)arg1 type:(id)arg2 domain:(id)arg3 recordType:(unsigned short)arg4 interface:(unsigned int)arg5;
- (void)addQueryToDictionary:(struct _DNSServiceRef_t **)arg1 name:(id)arg2 type:(id)arg3 domain:(id)arg4 recordType:(unsigned short)arg5;
- (id)queryKey:(id)arg1 type:(id)arg2 domain:(id)arg3 recordType:(unsigned short)arg4;
- (void)addService:(id)arg1 type:(id)arg2 domain:(id)arg3 interface:(unsigned int)arg4;
@property(readonly, copy) NSArray *nodes;
- (void)updateServerCacheIfNecessary;
- (void)removeInvalidNodes:(id)arg1;
- (void)invalidate;
- (void)stop;
- (void)start;
- (void)updateBrowserState;
- (_Bool)shouldStart;
- (void)advertiseHashes;
- (void)stopConnectionlessAdvertising;
- (void)startConnectionlessAdvertisingWithData:(id)arg1;
- (_Bool)preferVibrantIcons;
- (_Bool)thisIsTheFinder;
- (unsigned int)getInterface:(unsigned int)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)clearCache;
- (void)dealloc;
- (void)restartBrowser:(id)arg1;
@property long mode;
- (id)initWithDomain:(id)arg1 types:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end