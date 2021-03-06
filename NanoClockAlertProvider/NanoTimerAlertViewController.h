//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoTimerAlertViewController : NanoClockAlertViewController
{
    float _buttonHeight;
    float _buttonSideOffset;
    float _buttonBottomOffset;
    float _buttonTopEdgeInset;
    float _buttonFontSize;
    float _labelBaselineOffset;
    float _labelFontSize;
    float _labelLineHeight;
    float _labelSideOffset;
    NTKTimer *_timer;
    UILabel *_timerLabel;
    UIButton *_dismissButton;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UILabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(readonly, nonatomic) NTKTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)stopSound;
- (void)playSound;
- (void)_dismissButtonTapped:(id)arg1;
- (id)alertContentView;
- (id)_labelParagraphStyle;
- (id)_buttonFont;
- (id)_labelFont;
- (void)_addConstraints;
- (id)initWithTimer:(id)arg1;

@end