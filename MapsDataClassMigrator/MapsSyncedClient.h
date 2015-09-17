//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol MapsSyncedClient <NSObject>
@property(readonly, nonatomic) _Bool syncSupportsKVO;
@property(readonly, nonatomic) NSArray *syncedItems;
@property(readonly, nonatomic) NSString *syncIdentifier;
- (id <MapsSynced>)newSyncedItemForSyncData:(NSData *)arg1;

@optional
@property(readonly, nonatomic) _Bool syncShouldUseCustomStore;
@property(readonly, nonatomic) _Bool syncShouldUseItemPositions;
@property(readonly, nonatomic) _Bool syncInvertedOrdering;
- (void)syncManagerDidUpdateSyncedItems:(MapsSyncManager *)arg1;
- (void)updateSyncedItemAtIndexes:(NSIndexSet *)arg1;
- (void)removeSyncedItemsAtIndexes:(NSIndexSet *)arg1;
- (void)insertSyncedItems:(NSArray *)arg1 atIndexes:(NSIndexSet *)arg2;
- (_Bool)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned long long)arg2;
@end