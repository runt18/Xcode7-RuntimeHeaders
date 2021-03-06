//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRTRankedLayoutSource : NSObject <FCFetchCoordinatorDelegate>
{
    FRTFeedSettings *_feedSettings;
    FCFetchCoordinator *_fetchCoordinator;
    NSMutableDictionary *_treesByHeadline;
    FCThreadSafeMutableSet *_fulfilledRequests;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FRTHeadlineCardSizer *_sizer;
    FRTAbstractRanker *_ranker;
    FRTAbstractRanker *_adRanker;
    FRTAbstractRanker *_widgetRanker;
    double _tileProminenceScoreBalanceValue;
    long long _qualityOfService;
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) double tileProminenceScoreBalanceValue; // @synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue;
@property(retain, nonatomic) FRTAbstractRanker *widgetRanker; // @synthesize widgetRanker=_widgetRanker;
@property(retain, nonatomic) FRTAbstractRanker *adRanker; // @synthesize adRanker=_adRanker;
@property(retain, nonatomic) FRTAbstractRanker *ranker; // @synthesize ranker=_ranker;
@property(retain, nonatomic) FRTHeadlineCardSizer *sizer; // @synthesize sizer=_sizer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) FCThreadSafeMutableSet *fulfilledRequests; // @synthesize fulfilledRequests=_fulfilledRequests;
@property(retain, nonatomic) NSMutableDictionary *treesByHeadline; // @synthesize treesByHeadline=_treesByHeadline;
@property(retain, nonatomic) FCFetchCoordinator *fetchCoordinator; // @synthesize fetchCoordinator=_fetchCoordinator;
@property(copy, nonatomic) FRTFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
- (void).cxx_destruct;
- (id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4;
- (void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 context:(id)arg3;
- (void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
- (void)rankedLayoutsForRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFeedSettings:(id)arg1 maximumRowSpan:(unsigned long long)arg2 qualityOfService:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end