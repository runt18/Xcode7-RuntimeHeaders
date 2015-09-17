//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol PUICPageScrollViewControllerDelegate <NSObject>

@optional
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 didScrollToFraction:(float)arg2 betweenIndex:(unsigned int)arg3 andIndex:(unsigned int)arg4;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 didScrollToOffset:(struct CGPoint)arg2;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 didEndSwipeToDeleteAtIndex:(unsigned int)arg2 deleted:(_Bool)arg3;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 didUpdateSwipeToDeleteAtIndex:(unsigned int)arg2 fraction:(float)arg3;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 didBeginSwipeToDeleteAtIndex:(unsigned int)arg2;
- (void)pageScrollViewControllerDidAnimatePageDeletion:(PUICPageScrollViewController *)arg1;
- (void)pageScrollViewControllerIsAnimatingPageDeletion:(PUICPageScrollViewController *)arg1;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 willAnimatePageDeletion:(unsigned int)arg2 destinationIndex:(unsigned int)arg3;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 pageDidDisappearAtIndex:(unsigned int)arg2;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 pageWillDisappearAtIndex:(unsigned int)arg2;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 pageDidAppearAtIndex:(unsigned int)arg2;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 pageWillAppearAtIndex:(unsigned int)arg2;
- (void)pageScrollViewControllerDidStopScrolling:(PUICPageScrollViewController *)arg1;
- (void)pageScrollViewControllerDidStartScrolling:(PUICPageScrollViewController *)arg1;
- (void)pageScrollViewControllerDidScroll:(PUICPageScrollViewController *)arg1;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 didScrollToPageAtIndex:(unsigned int)arg2;
- (struct CGSize)pageScrollViewController:(PUICPageScrollViewController *)arg1 contentViewSizeForPageAtIndex:(unsigned int)arg2;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 configurePage:(PUICPageView *)arg2 atIndex:(unsigned int)arg3;
- (int)pageScrollViewController:(PUICPageScrollViewController *)arg1 scrollDirectionForDeletedIndex:(unsigned int)arg2;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 didDeletePageAtIndex:(unsigned int)arg2;
- (_Bool)pageScrollViewController:(PUICPageScrollViewController *)arg1 canDeletePageAtIndex:(unsigned int)arg2;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 didSelectPageAtIndex:(unsigned int)arg2;
- (_Bool)pageScrollViewController:(PUICPageScrollViewController *)arg1 canSelectPageAtIndex:(unsigned int)arg2;
- (void)pageScrollViewController:(PUICPageScrollViewController *)arg1 didMovePageAtIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (_Bool)pageScrollViewController:(PUICPageScrollViewController *)arg1 canMovePageAtIndex:(unsigned int)arg2;
@end