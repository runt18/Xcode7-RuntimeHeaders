//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitAppSelectionCell : UITableViewCell
{
    id <TransitAppSelectionCellDelegate> _delegate;
    MKStarRatingView *_ratingsView;
    UILabel *_ratingsCountLabel;
    UILabel *_transitModeLabel;
    UILabel *_priceLabel;
    UIButton *_routeButton;
    _Bool _iconPrerendered;
    NSURL *_artworkImageURL;
    LSApplicationProxy *_appProxy;
    NSDictionary *_appStoreMetadata;
    UILabel *_titleLabel;
    UIImageView *_icon;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *routeButton; // @synthesize routeButton=_routeButton;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *transitModeLabel; // @synthesize transitModeLabel=_transitModeLabel;
@property(retain, nonatomic) MKStarRatingView *ratingsView; // @synthesize ratingsView=_ratingsView;
@property(retain, nonatomic) LSApplicationProxy *appProxy; // @synthesize appProxy=_appProxy;
@property(retain, nonatomic) NSDictionary *appStoreMetadata; // @synthesize appStoreMetadata=_appStoreMetadata;
@property(nonatomic) __weak id <TransitAppSelectionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_labelForTransitModeKeys:(id)arg1;
- (id)_labelForTransitMode:(id)arg1;
- (void)_updateContent;
- (void)_route;
- (id)_iconView;
- (id)ratingsCountLabel;
- (id)_ratingsStringForCount:(unsigned long long)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end