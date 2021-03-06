//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRSchedThreadAggregate : XREventAggregate
{
    struct _XRSchedThreadAggStat _statsByState[9];
    int _minPriority;
    int _maxPriority;
    unsigned long long _tid;
}

- (void)includeData:(const struct XREventAggregateInput *)arg1;
@property(readonly, nonatomic) unsigned long long maxUserTime; // @dynamic maxUserTime;
@property(readonly, nonatomic) unsigned long long minUserTime; // @dynamic minUserTime;
@property(readonly, nonatomic) unsigned long long avgUserTime; // @dynamic avgUserTime;
@property(readonly, nonatomic) unsigned long long totalUserTime; // @dynamic totalUserTime;
@property(readonly, nonatomic) unsigned long long maxSystemTime; // @dynamic maxSystemTime;
@property(readonly, nonatomic) unsigned long long minSystemTime; // @dynamic minSystemTime;
@property(readonly, nonatomic) unsigned long long avgSystemTime; // @dynamic avgSystemTime;
@property(readonly, nonatomic) unsigned long long totalSystemTime; // @dynamic totalSystemTime;
@property(readonly, nonatomic) unsigned long long maxIdleTime; // @dynamic maxIdleTime;
@property(readonly, nonatomic) unsigned long long minIdleTime; // @dynamic minIdleTime;
@property(readonly, nonatomic) unsigned long long avgIdleTime; // @dynamic avgIdleTime;
@property(readonly, nonatomic) unsigned long long totalIdleTime; // @dynamic totalIdleTime;
@property(readonly, nonatomic) unsigned long long maxPriority; // @dynamic maxPriority;
@property(readonly, nonatomic) unsigned long long minPriority; // @dynamic minPriority;
@property(readonly, nonatomic) unsigned long long maxCPUTime; // @dynamic maxCPUTime;
@property(readonly, nonatomic) unsigned long long minCPUTime; // @dynamic minCPUTime;
@property(readonly, nonatomic) unsigned long long avgCPUTime; // @dynamic avgCPUTime;
@property(readonly, nonatomic) unsigned long long totalCPUTime; // @dynamic totalCPUTime;
@property(readonly, nonatomic) unsigned long long totalTime; // @dynamic totalTime;
@property(readonly, nonatomic) unsigned int tenureCount; // @dynamic tenureCount;
- (const struct _XRSchedThreadAggStat *)statsByState;
- (id)init;

@end