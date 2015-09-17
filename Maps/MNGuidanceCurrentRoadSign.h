//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNGuidanceCurrentRoadSign : UIView
{
    _Bool _shouldShowSpinner;
    UIImageView *_backgroundView;
    UILabel *_label;
    UIActivityIndicatorView *_activityView;
    UIImageView *_dimmingView;
    UIImage *_backgroundImage;
    UIImage *_noLocationBackgroundImage;
    long long _idiom;
    _Bool _dimmed;
}

+ (id)signImageDimmingForIdiom:(long long)arg1;
+ (id)signImageNoLocationForIdiom:(long long)arg1;
+ (id)signImageForIdiom:(long long)arg1;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) _Bool shouldShowSpinner; // @synthesize shouldShowSpinner=_shouldShowSpinner;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)_activityView;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (void)layoutSubviews;
- (id)_noLocationBackgroundImage;
- (id)initWithFrame:(struct CGRect)arg1 idiom:(long long)arg2;

@end