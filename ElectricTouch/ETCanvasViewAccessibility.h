//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ETCanvasViewAccessibility : __ETCanvasViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_checkForIdle;
- (void)_accessibilityAnnounceStopped;
- (void)_endMessage:(id)arg1 withSend:(_Bool)arg2;
- (void)_messageStartedOfType:(unsigned short)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
- (_Bool)accessibilityElementsHidden;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityActivate;
- (void)dealloc;
- (void)_AccessibilitySetDisableDirectTouchTimer:(id)arg1;
- (id)_accessibilityDisableDirectTouchTimer;
- (void)_accessibilitySetIsDirectTouching:(_Bool)arg1;
- (_Bool)_accessibilityIsDirectTouching;

@end