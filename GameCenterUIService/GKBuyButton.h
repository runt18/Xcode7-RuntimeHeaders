//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKBuyButton : UIControl
{
    GKLabel *_titleLabel;
    GKColorPalette *_palette;
}

@property(retain, nonatomic) GKColorPalette *palette; // @synthesize palette=_palette;
@property(retain, nonatomic) GKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)wasDepressed;
- (void)wasPressed;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end