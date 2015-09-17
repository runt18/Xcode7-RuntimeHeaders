//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDDataProviderOrderController : NSObject
{
    HKHealthStore *_healthStore;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)_notifyObserversForDataType:(id)arg1 withProviders:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setOrderedDataProviderSources:(id)arg1 dataType:(id)arg2;
- (void)getOrderedDataProviderSourcesForDataType:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithHealthStore:(id)arg1;

@end