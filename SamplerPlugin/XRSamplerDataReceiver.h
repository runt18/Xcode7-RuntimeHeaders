//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRSamplerDataReceiver : NSObject
{
    XRStorageManager *_storage;
    XRBacktraceRepository *_repository;
    XRDevice *_device;
    XRSamplerRun *_run;
    NSDate *_startDate;
    UniquingTable *_uniquer;
    unsigned long long _sampleRate;
    unsigned long long _updateRate;
    NSObject<OS_dispatch_queue> *_workQueue;
    int _options;
    void *_queuedEvents;
    unsigned int _queuedSize;
    unsigned int _queuedCount;
    unsigned long long _markTimestamp;
    unsigned long long _latestTimestamp;
    NSMutableIndexSet *_validRecordingPids;
    BOOL _stopRecording;
    BOOL _skipRecording;
    NSString *_pmiEventMnemonic;
    NSString *_pmiCounterName;
    unsigned long long _pmiEventThreshold;
    unsigned int _timestampHandle;
    unsigned int _tidHandle;
    unsigned int _backtraceHandle;
    unsigned int _backtraceIDHandle;
    unsigned int _runningTimeHandle;
    unsigned int _cpuHandle;
    unsigned int _threadStateHandle;
    BOOL _isPMIMode;
    unsigned long long *_lastUpdatePerCore;
}

+ (id)descriptorIdentifier;
- (void).cxx_destruct;
- (id)errorString;
- (void)voteForEpoch:(id)arg1;
- (void)markAndFlushQueue;
- (void)queueEventWithTimestamp:(unsigned long long)arg1 thread:(unsigned long long)arg2 backtrace:(unsigned int)arg3 cpu:(unsigned int)arg4 threadState:(unsigned int)arg5;
- (unsigned long long)calculateCoreDelta:(unsigned long long)arg1 cpu:(unsigned int)arg2;
- (void)_takeSampleOfTask:(unsigned int)arg1 pid:(int)arg2 samplingContext:(struct sampling_context_t *)arg3 threadInfo:(struct __CFDictionary *)arg4;
- (void)setRecordingPaused:(BOOL)arg1;
- (void)stopRecordingPid:(int)arg1;
- (BOOL)recordPid:(int)arg1;
- (void)dealloc;
- (id)initWithRun:(id)arg1 device:(id)arg2 startDate:(id)arg3 sampleRate:(unsigned long long)arg4 updateRate:(unsigned long long)arg5 options:(int)arg6 pmiEventMnemonic:(id)arg7 pmiEventThreshold:(unsigned long long)arg8 pmiCounterName:(id)arg9;

@end