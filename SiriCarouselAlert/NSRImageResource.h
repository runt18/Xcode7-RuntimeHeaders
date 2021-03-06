//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRImageResource : NSObject
{
    int _placeholderType;
    UIImage *_image;
    UIImage *_placeholderImage;
    NSRDecoratedString *_monogram;
    struct CGSize _size;
    int _renderingMode;
    _Bool _backgroundNeeded;
    id <NSRImageResourceDelegate> _delegate;
    NSURL *_identifier;
}

@property(readonly, nonatomic) NSURL *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <NSRImageResourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isShowingPlaceholderImage;
- (_Bool)isBackgroundNeeded;
- (void)imageDidLoad;
- (id)placeholderMonogramDecoratedString;
- (void)_loadPlaceholderImageForSize:(int)arg1;
- (id)imageWithFallbackPlaceholderSize:(int)arg1;
- (struct CGSize)scaledSizeThatFitsSize:(struct CGSize)arg1;
- (_Bool)isValidImage;
- (id)initWithSize:(struct CGSize)arg1 renderingMode:(int)arg2 backgroundNeeded:(_Bool)arg3 identifier:(id)arg4;
- (id)initWithPlaceholderType:(int)arg1 monogram:(id)arg2 size:(struct CGSize)arg3 renderingMode:(int)arg4 backgroundNeeded:(_Bool)arg5 identifier:(id)arg6;

@end