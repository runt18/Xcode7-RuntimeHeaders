//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDMeDataTableViewCell : UITableViewCell
{
    UILabel *_displayNameLabel;
    UILabel *_displayValueLabel;
    UIButton *_clearButton;
    UIColor *_normalDisplayValueColor;
    UIColor *_selectedDisplayValueColor;
    _Bool _shouldUseSelectedColorForDisplayValue;
    _Bool _shouldDisplayClearButtonDuringEditing;
    NSString *_displayName;
    NSString *_displayValue;
    UIView *_inputView;
    UIView *_inputAccessoryView;
}

@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) _Bool shouldDisplayClearButtonDuringEditing; // @synthesize shouldDisplayClearButtonDuringEditing=_shouldDisplayClearButtonDuringEditing;
@property(nonatomic) _Bool shouldUseSelectedColorForDisplayValue; // @synthesize shouldUseSelectedColorForDisplayValue=_shouldUseSelectedColorForDisplayValue;
@property(retain, nonatomic) NSString *displayValue; // @synthesize displayValue=_displayValue;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)_updateClearButtonState;
- (void)removeClearButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)addClearButtonTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end