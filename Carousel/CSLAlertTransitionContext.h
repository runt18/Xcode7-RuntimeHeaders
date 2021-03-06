//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLAlertTransitionContext : NSObject
{
    unsigned int _transitionReasonForDisappearingAlerts;
    unsigned int _transitionReasonForAppearingAlert;
    id <CUISAlertToAlertAnimatedTransitioning> _customAnimator;
}

@property(retain, nonatomic) id <CUISAlertToAlertAnimatedTransitioning> customAnimator; // @synthesize customAnimator=_customAnimator;
@property(nonatomic) unsigned int transitionReasonForAppearingAlert; // @synthesize transitionReasonForAppearingAlert=_transitionReasonForAppearingAlert;
@property(nonatomic) unsigned int transitionReasonForDisappearingAlerts; // @synthesize transitionReasonForDisappearingAlerts=_transitionReasonForDisappearingAlerts;
- (void).cxx_destruct;
- (id)initWithAppearingReason:(unsigned int)arg1 disappearingReason:(unsigned int)arg2;

@end