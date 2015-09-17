//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRCountersRun : XRSamplerRun
{
    unsigned long long _updateRate;
    BOOL _pidCaching;
    BOOL _missingEntryWarning;
    NSObject<OS_dispatch_queue> *_workQueue;
    UniquingTable *_uniquer;
    void *_queuedEvents;
    unsigned int _queuedSize;
    unsigned int _queuedCount;
    unsigned long long _markTimestamp;
    unsigned long long _latestTimestamp;
    NSMutableArray *_events;
    NSMutableArray *_formulas;
    NSMutableArray *_formulaEvaluators;
    NSMutableArray *_eventsAndFormulas;
    NSMutableArray *_eventsThenFormulas;
    unsigned long long _numberOfEventAndFormulaGraphsCached;
    unsigned long long *_graphIndexRemapping;
    unsigned int _timestampHandle;
    unsigned int _tidHandle;
    unsigned int _backtraceHandle;
    unsigned int _backtraceIDHandle;
    unsigned int _runningTimeHandle;
    unsigned int _cpuHandle;
    unsigned int _threadStateHandle;
    unsigned int _counterValuesHandle;
}

+ (void)initialize;
@property(nonatomic) unsigned long long updateRate; // @synthesize updateRate=_updateRate;
- (void).cxx_destruct;
- (void)markAndFlushQueue:(BOOL)arg1;
- (void)_queueEventWithTimestamp:(unsigned long long)arg1 thread:(unsigned long long)arg2 backtrace:(unsigned int)arg3 cpu:(unsigned int)arg4 threadState:(unsigned int)arg5 counterValues:(unsigned long long *)arg6;
- (id)eventDescriptorForIdentifier:(id)arg1;
- (BOOL)loadDTPerformanceSessionDataFromPaths:(id)arg1 error:(id *)arg2;
- (unsigned long long)eventIndexForEventOrFormulaIndex:(unsigned long long)arg1;
- (double)evaluateFormulaAtIndex:(unsigned long long)arg1 withEventArray:(double *)arg2 arrayCount:(unsigned long long)arg3;
- (BOOL)isFormulaAtEventOrFormulaIndex:(unsigned long long)arg1;
- (unsigned long long)eventOrFormulaIndexForDisplayedIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfGraphs;
@property(readonly, nonatomic) unsigned long long formulasCount;
@property(readonly, nonatomic) unsigned long long eventsCount;
@property(readonly, nonatomic) unsigned long long eventsAndFormulasCount;
- (id)formulaEvaluatorAtIndex:(unsigned int)arg1;
- (id)eventsAndFormulas;
- (void)setCountersFromModel:(id)arg1;
- (void)processRecord:(struct _CPRecord *)arg1 enqueue:(BOOL)arg2;
- (void)prepareForDevice:(id)arg1 options:(int)arg2 pid:(int)arg3;
- (id)backtracesForCategory:(id)arg1 timeRange:(struct XRTimeRange)arg2 savedIndex:(unsigned long long *)arg3;
- (id)backtraceRepository;
- (unsigned long long)weightCount;
- (unsigned long long)_currentTimestamp;
- (BOOL)stopRecordingWithPid:(int)arg1;
- (BOOL)startRecordingWithPid:(int)arg1;
- (id)workQueue;
- (id)initWithCoder:(id)arg1;
- (id)_storagePathForVersion:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end