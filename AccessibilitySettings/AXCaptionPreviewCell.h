//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXCaptionPreviewCell : PSTableCell
{
    AXCaptionPreviewView *_captionPreviewView;
    AXCloudShadowView *_shadowView;
    double _xOffset;
}

+ (struct CGSize)imageSize;
+ (struct CGSize)previewSize;
@property(readonly, nonatomic) double xOffset; // @synthesize xOffset=_xOffset;
- (void)layoutSubviews;
- (_Bool)cellEnabled;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (id)captionPreviewView;
- (void)didMoveToSuperview;

@end