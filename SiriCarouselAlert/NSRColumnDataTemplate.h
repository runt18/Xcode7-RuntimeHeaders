//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRColumnDataTemplate : NSRTemplate <NSRActionableTemplate>
{
    _Bool _hasVerticalSubtitles;
    NSRAction *_action;
    NSRDecoratedString *_decoratedTitle;
    NSArray *_decoratedSubtitles;
    NSRImageResource *_imageResource;
}

@property(nonatomic) _Bool hasVerticalSubtitles; // @synthesize hasVerticalSubtitles=_hasVerticalSubtitles;
@property(retain, nonatomic) NSRImageResource *imageResource; // @synthesize imageResource=_imageResource;
@property(retain, nonatomic) NSArray *decoratedSubtitles; // @synthesize decoratedSubtitles=_decoratedSubtitles;
@property(retain, nonatomic) NSRDecoratedString *decoratedTitle; // @synthesize decoratedTitle=_decoratedTitle;
@property(retain, nonatomic) NSRAction *action; // @synthesize action=_action;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end