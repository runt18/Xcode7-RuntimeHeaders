//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLScreenBackgroundProvider : CSLAlertBackgroundProvider
{
    UIScreen *_screen;
}

@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (void).cxx_destruct;
- (id)image;
- (id)view;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;

@end