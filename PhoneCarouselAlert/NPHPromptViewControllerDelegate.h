//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NPHPromptViewControllerDelegate <NSObject>
- (void)promptViewController:(NPHPromptViewController *)arg1 didSelectCallBack:(TUDialRequest *)arg2;
- (void)promptViewController:(NPHPromptViewController *)arg1 requestedDial:(TUDialRequest *)arg2;
- (void)promptViewControllerDidSelectCancel:(NPHPromptViewController *)arg1;
@end