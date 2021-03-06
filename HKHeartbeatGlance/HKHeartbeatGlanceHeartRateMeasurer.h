//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface HKHeartbeatGlanceHeartRateMeasurer : UIViewController
{
    HKHealthStore *_healthStore;
    HKAnchoredObjectQuery *_heartRateQuery;
    NSDate *_measuringStartDate;
    unsigned long long _measuringStartMonotonicTime;
    HKQuantitySample *_latestSample;
    NSTimer *_fakeTimer;
    id <HKHeartbeatGlanceHeartRateMeasurerDelegate> _delegate;
    NSDate *_lastReadingDate;
    double _lastReading;
}

+ (double)mesurementTimeout;
+ (double)measurementTimeout;
@property(readonly, nonatomic) NSDate *lastReadingDate; // @synthesize lastReadingDate=_lastReadingDate;
@property(readonly, nonatomic) double lastReading; // @synthesize lastReading=_lastReading;
@property(nonatomic) __weak id <HKHeartbeatGlanceHeartRateMeasurerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_measurementTimedOut;
- (void)_cancelMeasurementTimeout;
- (void)_startMeasurementTimeout;
- (_Bool)isMeasuring;
- (void)stopMeasuring;
- (void)startMeasuring;
- (void)_provideFakeReading;
- (void)_updateCurrentHeartRateWithReading:(id)arg1;
- (void)_updateHistoricalHeartRateWithReadings:(id)arg1;
- (void)grabLatestHeartrate;
- (id)_heartRateSampleType;
- (id)init;

@end