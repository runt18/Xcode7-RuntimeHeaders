//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol RemindersCardViewDelegate
- (_Bool)cardViewShouldAllowPanning:(RemindersCardBackgroundView *)arg1;
- (void)cardView:(RemindersCardBackgroundView *)arg1 panned:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (void)cardViewPanDidEnd:(RemindersCardBackgroundView *)arg1;
- (void)cardViewPanDidBegin:(RemindersCardBackgroundView *)arg1;
- (void)cardViewTapped:(RemindersCardBackgroundView *)arg1;
@end