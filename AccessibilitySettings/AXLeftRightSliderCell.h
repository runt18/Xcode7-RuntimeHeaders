//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXLeftRightSliderCell : PSSliderTableCell
{
    UILabel *_leftLabel;
    UILabel *_rightLabel;
}

- (id)newControl;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (_Bool)_accessibilityIgnoreInternalLabels;

@end