//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLWristDetectionSensor : NSObject
{
    _Bool _isDetectingOnWrist;
    int _onWristState;
    NSObject<OS_dispatch_source> *_owdTimer;
    CSLDeviceLockDisableAssertion *_owdDetectingAssertion;
    unsigned int _powerAssertion;
    _Bool _lastEventWasTimeout;
    NSDate *_lastTimeoutDate;
    NSObject<OS_dispatch_source> *_stackshotTimer;
    NSArray *_timeoutObservers;
    CSLWristDetectionTimeoutSource *_timeoutSource;
    id <CSLWristDetectionSensorDelegate> _delegate;
    NSDate *_wristDetectTriggerDate;
}

@property(retain) NSDate *wristDetectTriggerDate; // @synthesize wristDetectTriggerDate=_wristDetectTriggerDate;
@property(nonatomic) __weak id <CSLWristDetectionSensorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_uptime;
- (void)_handleDelayedProximityEventWithTimeoutDate:(id)arg1;
- (void)_logTimeoutEventIfNeededWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTimeoutObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_endOnWristDetectionIfInProgress;
- (void)_didBeginOnWristDetectionWithTimeout:(double)arg1;
- (void)_setOnWristState:(int)arg1;
- (void)_handleOnWristNotification:(id)arg1;
- (_Bool)_canBeginWristDetection;
- (void)_startWristDetectionWithTimeout:(double)arg1;
- (double)_preferredTimeout;
- (int)onWristState;
- (_Bool)isDetectingOnWrist;
- (void)startWristDetectionIfPossible;
- (id)init;

@end