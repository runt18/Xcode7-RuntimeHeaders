//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WebBookmarksServerReadingListHandler : NSObject
{
    WebBookmarkCollection *_collection;
    NSObject<OS_xpc_object> *_readingListQueue;
    NSTimer *_readingListQueueTimer;
    unsigned long long _readingListQueueRetryCount;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleAddToReadingListWithMessage:(id)arg1 forConnection:(id)arg2;
- (id)_localizedAppNameForPID:(int)arg1;
- (void)_commitReadingListQueue;
- (void)_clearReadingListQueueTimer;
- (void)_readingListQueueTimerDidFire:(id)arg1;
- (void)_queueReadingListItems:(id)arg1;
- (void)_restoreReadingListQueue;
- (id)_readingListQueueBackupPath;
- (void)_addItemsToReadingList:(id)arg1;
- (void)_addReadingListItemWithAddress:(id)arg1 title:(id)arg2 previewText:(id)arg3 clientBundle:(id)arg4 clientName:(id)arg5;
- (id)init;

@end