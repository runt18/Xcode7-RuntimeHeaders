//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ASTStepperCell : PSTableCell
{
    UIStepper *_stepper;
    UILabel *_label;
    id <ASTStepperCellDelegate> _stepperDelegate;
}

@property(nonatomic) id <ASTStepperCellDelegate> stepperDelegate; // @synthesize stepperDelegate=_stepperDelegate;
- (void)layoutSubviews;
- (void)_stepperChanged:(id)arg1;
- (void)_updateLabel;
- (long long)buttonCount;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end