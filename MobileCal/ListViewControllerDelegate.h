//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol ListViewControllerDelegate <NSObject>
- (_Bool)listViewControllerContainerHandlesShowEvent;
- (_Bool)wantsScrollingMessagesOnEveryFrameFromListViewController:(ListViewController *)arg1;
- (void)listViewController:(ListViewController *)arg1 didScrollToDate:(NSDate *)arg2;
@end