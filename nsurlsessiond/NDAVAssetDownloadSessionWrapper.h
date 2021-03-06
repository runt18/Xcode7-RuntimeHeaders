//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NDAVAssetDownloadSessionWrapper : NSObject
{
    AVAssetDownloadSession *_downloadSession;
    AVURLAsset *_asset;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned int _powerAssertion;
    id <NDAVAssetDownloadSessionWrapperDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSURL *_URL;
    NSURL *_destinationURL;
    NSDictionary *_options;
    NSValue *_totalTimeRange;
    unsigned long long _downloadToken;
    unsigned long long _countOfBytesWritten;
    unsigned long long _countOfBytesExpectedToWrite;
}

@property(copy) NSValue *totalTimeRange; // @synthesize totalTimeRange=_totalTimeRange;
@property unsigned long long countOfBytesExpectedToWrite; // @synthesize countOfBytesExpectedToWrite=_countOfBytesExpectedToWrite;
@property unsigned long long countOfBytesWritten; // @synthesize countOfBytesWritten=_countOfBytesWritten;
@property(readonly) unsigned long long downloadToken; // @synthesize downloadToken=_downloadToken;
@property(readonly, retain) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <NDAVAssetDownloadSessionWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelAndDeliverError:(id)arg1;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (void)releasePowerAssertion;
- (void)takePowerAssertion;
- (void)sendProgressUpdate;
- (void)didReceiveMediaSelectionResolutionNotification:(id)arg1;
- (void)didReceiveTimeRangesChangedNotification:(id)arg1;
- (void)didReceiveFileSizeAvailableNotification:(id)arg1;
- (void)didReceiveFailedNotification:(id)arg1;
- (void)didReceiveSucceededNotification:(id)arg1;
- (void)disavowSession;
- (id)initWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 delegate:(id)arg4 queue:(id)arg5;
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 delegate:(id)arg4 queue:(id)arg5;

@end