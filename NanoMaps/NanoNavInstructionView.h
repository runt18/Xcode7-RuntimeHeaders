//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoNavInstructionView : UIView
{
    UIView *_backgroundView;
    UILayoutGuide *_instructionsGuide;
    MapsAutoLayoutContext *_layoutContext;
    MapsAutoLayoutContext *_contentContext;
    MapsAutoLayoutContext *_headerContext;
    MapsAutoLayoutContext *_lastBaselineContext;
    _Bool _ephemeralDataHidden;
    UIView *_contentView;
    UIView<NanoNavInstructionHeaderView> *_headerView;
}

@property(nonatomic) _Bool ephemeralDataHidden; // @synthesize ephemeralDataHidden=_ephemeralDataHidden;
@property(retain, nonatomic) UIView<NanoNavInstructionHeaderView> *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)setEphemeralDataHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_instructionForArrivalStepWithDestinationName:(id)arg1 arrived:(_Bool)arg2;
- (void)_updateLastBaselineConstraint;
- (void)_setupBaseConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end