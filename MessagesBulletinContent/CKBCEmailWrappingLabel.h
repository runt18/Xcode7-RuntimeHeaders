//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CKBCEmailWrappingLabel : UIView
{
    NSString *_text;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
}

@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (float)lastLineBaselineFrameOriginY;
- (void)_setFirstLineBaselineFrameOriginY:(float)arg1;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
- (void)updateLabelText;
- (_Bool)textRequiresBothLabels;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end