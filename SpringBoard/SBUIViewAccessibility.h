//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SBUIViewAccessibility : __SBUIViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)accessibilityCustomActions;
- (void)_axAddCustomActionWithName:(id)arg1 gesture:(unsigned long long)arg2 toArray:(id)arg3;
- (_Bool)_axPerformGestureForAction:(id)arg1;
- (_Bool)_accessibilitySupportsActivateAction;
- (_Bool)_accessibilityPointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_accessibilityOverridesInvalidFrames;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityActivate;
- (id)accessibilityHint;
- (_Bool)_axIsDividerForOverlay;

@end