//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SearchBar : UIView <MainChromeTopBarContent>
{
    id <SearchBarDelegate> _delegate;
    UITextField *_searchField;
    PassthruSearchBar *_searchBar;
    MapsLargerHitTargetButton *_directionsButton;
    MapsLargerHitTargetButton *_shareButton;
    long long _suspensionCount;
    long long _lightness;
    _Bool _didPerformInitialSetup;
    UIView *_defaultLeftView;
    NSMutableDictionary *_cachedImages;
    TokenView *_tokenView;
    MainChromeViewController *_chromeViewController;
}

+ (id)shareButtonUsingGlyphs:(_Bool)arg1;
+ (id)directionsButtonUsingGlyphs:(_Bool)arg1;
+ (double)defaultHeight;
@property(nonatomic) MainChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) PassthruSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) UITextField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak id <SearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TokenView *tokenView; // @synthesize tokenView=_tokenView;
- (void).cxx_destruct;
- (void)_updateSearchFieldAppearance;
- (void)_updateSearchBarIcon;
- (void)_updateClearButton;
- (void)setBackdropLightness:(long long)arg1 animation:(id)arg2;
- (void)endSuspendingTapDelegateMessages;
- (void)beginSuspendingTapDelegateMessages;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_shareButtonTapped:(id)arg1;
- (void)_directionsButtonTapped:(id)arg1;
- (id)presentationSourceForShareSheet;
- (id)presentationSourceForDirectionsSearch;
- (void)showToken:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)_setPlaceHolder;
- (void)performInitialSetup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end