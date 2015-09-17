//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkPanButtonContainer : UIView
{
    NSArray *_buttonCycle;
    NSMutableArray *_doneButtonFocusGuides;
    UIBarButtonItem *_doneButton;
}

@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSMutableArray *doneButtonFocusGuides; // @synthesize doneButtonFocusGuides=_doneButtonFocusGuides;
@property(retain, nonatomic) NSArray *buttonCycle; // @synthesize buttonCycle=_buttonCycle;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)setFirstButtonPatternLeft:(_Bool)arg1;
- (void)deactivateFocusGuides;
- (void)activateFocusGuidesForDoneButton;
- (void)activateFocusGuides;
- (void)layoutSubviews;

@end