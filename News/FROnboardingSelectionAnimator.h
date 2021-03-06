//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FROnboardingSelectionAnimator : NSObject <FROnboardingAnimator>
{
    _Bool _isRunning;
    _Bool _quickPress;
    _Bool _resetStartTimeOfPhase;
    _Bool _queueUpUndimplingAfterDoneDimpling;
    FROnboardingSubscribableItem *_item;
    long long _currentPhase;
    FRAnimationFloatFunction *_animationSolver;
    double _startTimeOfPhase;
    double _durationOfPhase;
    double _phasePercentComplete;
    double _startingDimpleScaleValue;
    double _currentScaleValue;
}

@property(nonatomic) _Bool queueUpUndimplingAfterDoneDimpling; // @synthesize queueUpUndimplingAfterDoneDimpling=_queueUpUndimplingAfterDoneDimpling;
@property(nonatomic) double currentScaleValue; // @synthesize currentScaleValue=_currentScaleValue;
@property(nonatomic) double startingDimpleScaleValue; // @synthesize startingDimpleScaleValue=_startingDimpleScaleValue;
@property(nonatomic) double phasePercentComplete; // @synthesize phasePercentComplete=_phasePercentComplete;
@property(nonatomic) _Bool resetStartTimeOfPhase; // @synthesize resetStartTimeOfPhase=_resetStartTimeOfPhase;
@property(nonatomic) double durationOfPhase; // @synthesize durationOfPhase=_durationOfPhase;
@property(nonatomic) double startTimeOfPhase; // @synthesize startTimeOfPhase=_startTimeOfPhase;
@property(retain, nonatomic) FRAnimationFloatFunction *animationSolver; // @synthesize animationSolver=_animationSolver;
@property(nonatomic) _Bool quickPress; // @synthesize quickPress=_quickPress;
@property(nonatomic) long long currentPhase; // @synthesize currentPhase=_currentPhase;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) FROnboardingSubscribableItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateTickWithAnimationEngine:(id)arg1 sessionTimeAtLastTick:(double)arg2 currentSessionTime:(double)arg3;
- (void)updateCellWithCurrentStateOfItem:(id)arg1;
- (void)addedToAnimationEngine:(id)arg1;
- (void)restartDimple;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end