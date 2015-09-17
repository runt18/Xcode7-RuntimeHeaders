//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLTilesManagerSyncStoreDelegate : NSObject <SYStoreDelegate>
{
    struct CLTilesManager *_manager;
}

- (CDUnknownBlockType)beginSyncingAllObjectsForStore:(id)arg1;
- (void)syncStore:(id)arg1 peerFinishedProcessingMessageWithContext:(id)arg2;
- (_Bool)syncStoreShouldPerformInitialFullSync:(id)arg1;
- (void)syncStoreDidUnpair:(id)arg1;
- (void)syncStoreDidSetupAfterPairing:(id)arg1;
- (void)syncStore:(id)arg1 encounteredErrorInFullSync:(id)arg2;
- (void)syncStoreDidCompleteFullSync:(id)arg1;
- (void)syncStoreAllObjectsDeleted:(id)arg1;
- (void)syncStoreDidUpdate:(id)arg1;
- (void)syncStoreWillUpdate:(id)arg1;
- (void)syncStore:(id)arg1 objectDeleted:(id)arg2;
- (void)syncStore:(id)arg1 objectUpdated:(id)arg2;
- (void)syncStore:(id)arg1 objectAdded:(id)arg2;
- (id)initWithTilesManager:(struct CLTilesManager *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end