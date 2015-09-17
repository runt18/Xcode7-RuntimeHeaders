//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoChromeTransitionContext : NSObject
{
    NanoChromeViewItem *_toItem;
    NanoChromeViewItem *_fromItem;
    id <UIViewControllerAnimatedTransitioning> _customTransition;
}

@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> customTransition; // @synthesize customTransition=_customTransition;
@property(retain, nonatomic) NanoChromeViewItem *fromItem; // @synthesize fromItem=_fromItem;
@property(retain, nonatomic) NanoChromeViewItem *toItem; // @synthesize toItem=_toItem;
- (void).cxx_destruct;
- (id)description;

@end