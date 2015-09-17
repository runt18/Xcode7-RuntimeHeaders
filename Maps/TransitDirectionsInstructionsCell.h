//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitDirectionsInstructionsCell : TransitDirectionsIconCell
{
    UILabel *_primaryLabel;
    NSLayoutConstraint *_primaryLabelTrailingToContentView;
    UILabel *_secondaryLabel;
    UIImageView *_stationArtworkImageView;
    UIImageView *_platformArtworkImageView;
    NSLayoutConstraint *_centeringImageViewToSecondaryLabelConstraint;
    MapsLargerHitTargetButton *_detailButton;
    NSLayoutConstraint *_topToPrimaryBaselineConstraint;
    NSLayoutConstraint *_primaryBaselineToSecondaryBaselineConstraint;
    NSLayoutConstraint *_secondarylastBaselineToBottomConstraint;
    NSLayoutConstraint *_platformArtworkBottomToBottomConstraint;
    NSLayoutConstraint *_stationArtworkTrailingToPrimaryLabelLeadingConstraint;
    NSLayoutConstraint *_platformArtworkTrailingToSecondaryLabelLeadingConstraint;
    NSLayoutConstraint *_secondaryLabelLeadingToPrimaryLabelLeadingConstraint;
    NSLayoutConstraint *_secondaryLabelFirstBaselineToPlatformArtworkBottomConstraint;
    id <TransitDirectionsInstructionsCellDelegate> _delegate;
}

+ (id)_secondaryFont;
+ (id)_primaryFont;
+ (id)fontsForInstructions;
@property(nonatomic) __weak id <TransitDirectionsInstructionsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIImageView *platformArtworkImageView; // @synthesize platformArtworkImageView=_platformArtworkImageView;
@property(readonly, nonatomic) UIImageView *stationArtworkImageView; // @synthesize stationArtworkImageView=_stationArtworkImageView;
@property(readonly, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void).cxx_destruct;
- (void)configureWithItem:(id)arg1;
- (void)_detailButtonTapped:(id)arg1;
- (id)_detailButtonFont;
- (void)_contentSizeCategoryDidChange;
- (double)_minPlatformArtworkBottomToBottomDistance;
- (double)_secondaryFirstBaselineToBottomPlatformArtworkDistance;
- (double)_primaryBaselineToSecondaryBaselineDistance;
- (double)_topToPrimaryBaselineDistance;
- (double)_secondaryLastBaselineToBotomDistance;
- (void)_updateExpandButton;
- (void)updateConstraints;
- (id)_initialConstraints;
- (void)prepareForReuse;
- (void)_createSubviews;

@end