//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPReportComposerTransitLinePickerPart : RAPTablePart
{
    RAPTransitLineSelectionQuestion *_question;
    RAPTableCheckmarkRadioSection *_whichLineSection;
    NSString *_pickerTitle;
}

- (void).cxx_destruct;
- (id)_whichLineSection;
- (id)initWithQuestion:(id)arg1 pickerTitle:(id)arg2;

@end