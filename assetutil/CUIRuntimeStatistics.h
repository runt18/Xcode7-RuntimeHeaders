//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CUIRuntimeStatistics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _notify_token;
    double _wasted_size;
    double _total_size;
}

+ (void)generateLog;
+ (id)sharedRuntimeStatistics;
- (void)addStatisticAllocatedImageSize:(unsigned long long)arg1 roundedSize:(unsigned long long)arg2;
- (void)_logStatistics:(int)arg1;
- (void)dealloc;
- (id)init;

@end