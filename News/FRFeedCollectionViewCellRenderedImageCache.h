//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRFeedCollectionViewCellRenderedImageCache : NSObject <FCOperationThrottlerDelegate>
{
    NSMutableDictionary *_imageCache;
    NSMutableOrderedSet *_cacheIdentifiersRecentlyUsedInOrder;
    NSMapTable *_tokensToOperations;
    NSOperationQueue *_imageOpQueue;
    NSMutableOrderedSet *_highPriorityRenderRequestSet;
    NSMutableOrderedSet *_lowPriorityRenderRequestSet;
    NSObject<OS_dispatch_queue> *_requestSetAccessQueue;
    FCOperationThrottler *_renderOperationThrottler;
    NSObject<OS_dispatch_group> *_opQueueEmptyGroup;
}

+ (void)clearOnDiskCache;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *opQueueEmptyGroup; // @synthesize opQueueEmptyGroup=_opQueueEmptyGroup;
@property(retain, nonatomic) FCOperationThrottler *renderOperationThrottler; // @synthesize renderOperationThrottler=_renderOperationThrottler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestSetAccessQueue; // @synthesize requestSetAccessQueue=_requestSetAccessQueue;
@property(retain, nonatomic) NSMutableOrderedSet *lowPriorityRenderRequestSet; // @synthesize lowPriorityRenderRequestSet=_lowPriorityRenderRequestSet;
@property(retain, nonatomic) NSMutableOrderedSet *highPriorityRenderRequestSet; // @synthesize highPriorityRenderRequestSet=_highPriorityRenderRequestSet;
@property(retain, nonatomic) NSOperationQueue *imageOpQueue; // @synthesize imageOpQueue=_imageOpQueue;
@property(retain, nonatomic) NSMapTable *tokensToOperations; // @synthesize tokensToOperations=_tokensToOperations;
@property(retain, nonatomic) NSMutableOrderedSet *cacheIdentifiersRecentlyUsedInOrder; // @synthesize cacheIdentifiersRecentlyUsedInOrder=_cacheIdentifiersRecentlyUsedInOrder;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (id)_dequeueNextRequestFromSet:(id)arg1;
- (id)_dequeueNextHighPriorityRequest;
- (id)_dequeueNextLowPriorityRequest;
- (void)_ensureOnDiskRepresentationForRequest:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)clearAllRequests;
- (void)clearLowPriorityRenderRequests;
- (void)addLowPriorityRenderRequest:(id)arg1;
- (void)addHighPriorityRenderRequest:(id)arg1;
- (void)executeOnNextEmptyCacheQueue:(CDUnknownBlockType)arg1;
- (void)clearInMemoryCache;
- (void)cancelImageOperationWithToken:(id)arg1;
- (void)_pruneCacheAccordingToLRU;
- (id)storageKeyForIdentifier:(id)arg1;
- (id)cacheGeneratedCellRenderResultForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedCellRenderResultForRequest:(id)arg1;
- (void)dealloc;
- (id)sharedFileCache;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end