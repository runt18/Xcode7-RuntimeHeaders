//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DirectionsFieldsView : UIView
{
    UITextField *_startDirectionsField;
    UITextField *_endDirectionsField;
    UIButton *_swapDirectionsButton;
    UIImage *_swapButtonImagePortrait;
    UIImage *_swapButtonImageLandscape;
    UIView *_coverView;
    struct CGRect _initialFrame;
    struct CGRect _finalFrame;
    UISnapshotView *_initialSnapshot;
    UISnapshotView *_finalSnapshot;
    _Bool _compact;
}

@property(nonatomic, getter=isCompact) _Bool compact; // @synthesize compact=_compact;
@property(retain, nonatomic) UIButton *swapDirectionsButton; // @synthesize swapDirectionsButton=_swapDirectionsButton;
@property(retain, nonatomic) UITextField *endDirectionsField; // @synthesize endDirectionsField=_endDirectionsField;
@property(retain, nonatomic) UITextField *startDirectionsField; // @synthesize startDirectionsField=_startDirectionsField;
- (void).cxx_destruct;
- (void)deleteSnapshots;
- (void)crossFade;
- (void)installSnapshots;
- (id)_coverView;
- (void)takeFinalSnapshot;
- (void)takeInitialSnapshot;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)_newAnimatedTextField;
- (id)_swapButtonImageLandscape;
- (id)_swapButtonImagePortrait;
- (id)initWithFrame:(struct CGRect)arg1;

@end