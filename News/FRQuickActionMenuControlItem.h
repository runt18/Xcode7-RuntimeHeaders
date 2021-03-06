//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRQuickActionMenuControlItem : UIView
{
    NSString *_title;
    UIImageView *_overlayImageView;
    CDUnknownBlockType _selectionBlock;
    FRQuickActionMenuControl *_quickActionMenuControl;
    UIButton *_button;
}

+ (id)quickActionMenuControlItemWithTitle:(id)arg1 icon:(id)arg2 selectionBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak FRQuickActionMenuControl *quickActionMenuControl; // @synthesize quickActionMenuControl=_quickActionMenuControl;
@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
@property(retain, nonatomic) UIImageView *overlayImageView; // @synthesize overlayImageView=_overlayImageView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_buttonTapped;
@property(readonly, nonatomic) UIImageView *iconView;
- (id)initWithFrame:(struct CGRect)arg1;

@end