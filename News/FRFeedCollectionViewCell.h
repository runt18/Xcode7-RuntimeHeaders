//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRFeedCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, FRHeadlineZoomAnimatorOrigin>
{
    _Bool _headlineSeen;
    _Bool _articleRead;
    _Bool _favorite;
    _Bool _liked;
    _Bool _offensive;
    _Bool _shared;
    _Bool _sponsored;
    _Bool _showAccessoryText;
    _Bool _layoutConstraintsWantsBottomBorder;
    _Bool _isShowingActionPanel;
    _Bool _hasThumbnail;
    _Bool _isFullWidth;
    _Bool _isFeatureCandidate;
    CDStruct_69a01191 _delegateFlags;
    NSString *_headlineIdentifier;
    FRTagImageCache *_tagImageCache;
    FCTagController *_tagController;
    FRTFeedSettings *_feedSettings;
    UIView *_innerContentView;
    long long _cellType;
    double _minimumAdDuration;
    FRFeedCollectionViewCellRenderedImageCache *_renderedImageCache;
    id <FCHeadlineProviding> _populatedHeadline;
    FRTHeadlineCollectionViewLayoutAttributes *_appliedLayoutAttributes;
    FRArticleViewContext *_articleContext;
    FRFeedCollectionViewCellAccessoryView *_accessoryView;
    id <FRFeedCollectionViewCellDelegate> _delegate;
    UIImageView *_favoriteImageView;
    UIView *_highlightView;
    FCHeadlineTheme *_theme;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UIFont *_excerptFont;
    FRContentObscuringView *_censorView;
    UIView *_bottomBorder;
    FRFeedCollectionViewCellRenderedCacheRequest *_lastImageCacheRequest;
    NSString *_lastImageCacheRequestToken;
    FRFeedCollectionViewCellAccessoryViewDisplayParameters *_lastDisplayParameters;
    CALayer *_headlineLayer;
    unsigned long long _columnSpan;
    unsigned long long _rowSpan;
    long long _imagePosition;
    FRFeedCollectionViewCellRenderResult *_renderResult;
    struct CGPoint _swipingGestureStartPosition;
    struct CGRect _thumbnailRect;
    struct CGRect _thumbnailContentsRect;
    struct CGRect _titleRect;
    struct CGRect _subtitleRect;
    struct CGRect _excerptRect;
    struct CGRect _logoRect;
}

@property(retain, nonatomic) FRFeedCollectionViewCellRenderResult *renderResult; // @synthesize renderResult=_renderResult;
@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(nonatomic) unsigned long long rowSpan; // @synthesize rowSpan=_rowSpan;
@property(nonatomic) unsigned long long columnSpan; // @synthesize columnSpan=_columnSpan;
@property(retain, nonatomic) CALayer *headlineLayer; // @synthesize headlineLayer=_headlineLayer;
@property(retain, nonatomic) FRFeedCollectionViewCellAccessoryViewDisplayParameters *lastDisplayParameters; // @synthesize lastDisplayParameters=_lastDisplayParameters;
@property(retain, nonatomic) NSString *lastImageCacheRequestToken; // @synthesize lastImageCacheRequestToken=_lastImageCacheRequestToken;
@property(retain, nonatomic) FRFeedCollectionViewCellRenderedCacheRequest *lastImageCacheRequest; // @synthesize lastImageCacheRequest=_lastImageCacheRequest;
@property(nonatomic) _Bool isFeatureCandidate; // @synthesize isFeatureCandidate=_isFeatureCandidate;
@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) FRContentObscuringView *censorView; // @synthesize censorView=_censorView;
@property(retain, nonatomic) UIFont *excerptFont; // @synthesize excerptFont=_excerptFont;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) FCHeadlineTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) struct CGRect logoRect; // @synthesize logoRect=_logoRect;
@property(nonatomic) struct CGRect excerptRect; // @synthesize excerptRect=_excerptRect;
@property(nonatomic) struct CGRect subtitleRect; // @synthesize subtitleRect=_subtitleRect;
@property(nonatomic) struct CGRect titleRect; // @synthesize titleRect=_titleRect;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(nonatomic) _Bool isFullWidth; // @synthesize isFullWidth=_isFullWidth;
@property(nonatomic) _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property(retain, nonatomic) UIImageView *favoriteImageView; // @synthesize favoriteImageView=_favoriteImageView;
@property(nonatomic) _Bool isShowingActionPanel; // @synthesize isShowingActionPanel=_isShowingActionPanel;
@property(nonatomic) struct CGPoint swipingGestureStartPosition; // @synthesize swipingGestureStartPosition=_swipingGestureStartPosition;
@property(nonatomic) _Bool layoutConstraintsWantsBottomBorder; // @synthesize layoutConstraintsWantsBottomBorder=_layoutConstraintsWantsBottomBorder;
@property(nonatomic) CDStruct_69a01191 delegateFlags; // @synthesize delegateFlags=_delegateFlags;
@property(nonatomic) __weak id <FRFeedCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FRFeedCollectionViewCellAccessoryView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) FRArticleViewContext *articleContext; // @synthesize articleContext=_articleContext;
@property(readonly, nonatomic) FRTHeadlineCollectionViewLayoutAttributes *appliedLayoutAttributes; // @synthesize appliedLayoutAttributes=_appliedLayoutAttributes;
@property(readonly, nonatomic) id <FCHeadlineProviding> populatedHeadline; // @synthesize populatedHeadline=_populatedHeadline;
@property(retain, nonatomic) FRFeedCollectionViewCellRenderedImageCache *renderedImageCache; // @synthesize renderedImageCache=_renderedImageCache;
@property(nonatomic) double minimumAdDuration; // @synthesize minimumAdDuration=_minimumAdDuration;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(readonly, nonatomic) struct CGRect thumbnailContentsRect; // @synthesize thumbnailContentsRect=_thumbnailContentsRect;
@property(nonatomic) struct CGRect thumbnailRect; // @synthesize thumbnailRect=_thumbnailRect;
@property(retain, nonatomic) UIView *innerContentView; // @synthesize innerContentView=_innerContentView;
@property(copy, nonatomic) FRTFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(nonatomic, getter=isShowingAccessoryText) _Bool showAccessoryText; // @synthesize showAccessoryText=_showAccessoryText;
@property(nonatomic, getter=isSponsored) _Bool sponsored; // @synthesize sponsored=_sponsored;
@property(nonatomic, getter=isShared) _Bool shared; // @synthesize shared=_shared;
@property(nonatomic, getter=isOffensive) _Bool offensive; // @synthesize offensive=_offensive;
@property(nonatomic, getter=isLiked) _Bool liked; // @synthesize liked=_liked;
@property(nonatomic, getter=isFavorite) _Bool favorite; // @synthesize favorite=_favorite;
@property(nonatomic, getter=isArticleRead) _Bool articleRead; // @synthesize articleRead=_articleRead;
@property(nonatomic, getter=isHeadlineSeen) _Bool headlineSeen; // @synthesize headlineSeen=_headlineSeen;
@property(retain, nonatomic) FCTagController *tagController; // @synthesize tagController=_tagController;
@property(retain, nonatomic) FRTagImageCache *tagImageCache; // @synthesize tagImageCache=_tagImageCache;
@property(copy, nonatomic) NSString *headlineIdentifier; // @synthesize headlineIdentifier=_headlineIdentifier;
- (void).cxx_destruct;
- (struct CGRect)headlineZoomOriginImageFrame:(id)arg1;
- (id)headlineZoomOriginBackgroundColor:(id)arg1;
- (unsigned long long)headlineContentType:(id)arg1;
- (struct CGRect)headlineZoomOriginContentsRect:(id)arg1;
- (id)headlineZoomOriginContentsImage:(id)arg1;
- (struct CGRect)headlineZoomOriginContentViewFrame:(id)arg1;
- (double)headlineZoomOriginTitleLabelTopInset:(id)arg1;
- (struct CGRect)headlineZoomOriginFrame:(id)arg1;
- (id)headlineZoomOriginImagePath:(id)arg1;
- (void)_updateObscuringViewVisible:(_Bool)arg1;
- (void)_updateBasedOnHeadlineLayerState;
- (void)_populateAccessoryViewsWithHeadline:(id)arg1;
- (void)_applyBordersForLayoutAttributes:(id)arg1;
- (void)_applyRenderResult:(id)arg1 animated:(_Bool)arg2;
- (void)_renderCellImageWithPopulatedHeadline;
- (void)renderGeneratedCellImageIfNeeded;
- (id)_renderCacheRequestForCurrentCellState;
- (void)_applyHeadlineTheme:(id)arg1;
- (void)_createHeadlineViews;
- (void)_displayActionMenuControlAtPoint:(struct CGPoint)arg1;
- (void)updateRelativeTimeDisplay;
- (void)showOffensiveContentPressed:(id)arg1;
- (void)hideObscuringViewAnimated:(_Bool)arg1;
- (void)showObscuringViewForMode:(long long)arg1 animated:(_Bool)arg2;
- (void)setShared:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setOffensive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setArticleRead:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setArticleSeen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setArticleSeen:(_Bool)arg1;
- (void)setLiked:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFavorite:(_Bool)arg1 animated:(_Bool)arg2;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)prepareForReuse;
- (void)willMoveToWindow:(id)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGRect)frameForHeadlineExcerpt;
- (struct CGRect)frameForHeadlineTitle;
- (struct CGRect)frameForHeadlineImage;
- (void)populateWithHeadline:(id)arg1 theme:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)_setUpCellAfterCreating;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end