//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol HDActivityCacheManagerObserver <NSObject>
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedTodayActivityCache:(HKActivityCache *)arg2 updatedFields:(unsigned int)arg3 error:(NSError *)arg4;

@optional
- (void)activityCacheManagerVoidedActivityCaches:(HDActivityCacheManager *)arg1;
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedYesterdayActivityCache:(HKActivityCache *)arg2 updatedFields:(unsigned int)arg3 error:(NSError *)arg4;
@end