//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TabBarItemView : UIView
{
    UIView *_border;
    UIView *_borderOverlay;
    UIImageView *_closeButtonImageView;
    UIImageView *_closeButtonOverlayImageView;
    UIView *_titleClipperView;
    UILabel *_titleLabel;
    UILabel *_titleOverlayLabel;
    NSString *_titleText;
    TabBar *_tabBar;
    NSString *_truncatedTitleText;
    struct CGSize _truncatedTitleTextSize;
    _Bool _titleWasTruncated;
    _Bool _active;
    _Bool _reordering;
    _Bool _hidesTitleText;
    UIButton *_closeButton;
    long long _visibleEdge;
    double _titleLayoutWidth;
    long long _titleAnchorEdge;
    double _titleAnchorAdditionalOffset;
}

@property(nonatomic) double titleAnchorAdditionalOffset; // @synthesize titleAnchorAdditionalOffset=_titleAnchorAdditionalOffset;
@property(nonatomic) long long titleAnchorEdge; // @synthesize titleAnchorEdge=_titleAnchorEdge;
@property(nonatomic) double titleLayoutWidth; // @synthesize titleLayoutWidth=_titleLayoutWidth;
@property(nonatomic) _Bool hidesTitleText; // @synthesize hidesTitleText=_hidesTitleText;
@property(nonatomic) long long visibleEdge; // @synthesize visibleEdge=_visibleEdge;
@property(nonatomic, getter=isReordering) _Bool reordering; // @synthesize reordering=_reordering;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)setTitleText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithTabBar:(id)arg1;
- (void)_layoutCloseButton;
- (void)_layoutEdges;
- (void)_layoutTitleClipperView;
- (void)updateTabBarStyle;
- (void)updateTitleTruncation;
- (void)_updateTitleBlends;
- (void)_layoutTitleLabelUsingCachedTruncation;
- (void)_layoutTitleLabel;
- (struct CGRect)_titleBoundingBox;
- (_Bool)_canUseCachedTitleTruncationOnBoundsChange;
- (struct CGRect)_titleBounds;
- (id)_truncatedTitleWithFont:(id)arg1 desiredWidth:(double)arg2 truncatedSize:(struct CGSize *)arg3;

@end