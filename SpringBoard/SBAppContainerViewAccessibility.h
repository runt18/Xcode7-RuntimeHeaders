//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SBAppContainerViewAccessibility : __SBAppContainerViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)setWantsPinResizeGrabber:(_Bool)arg1 withPercent:(double)arg2;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axAnnotateAffordanceView;
- (id)_axAffordanceView;

@end