//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol FRRelatedArticlesViewControllerDelegate <NSObject>
- (void)relatedArticlesViewController:(FRRelatedArticlesViewController *)arg1 commitPreviewViewController:(UIViewController *)arg2;
- (UIViewController *)relatedArticlesViewController:(FRRelatedArticlesViewController *)arg1 previewViewControllerForTopicCell:(FRRelatedTopicTagCollectionViewCell *)arg2 withTopic:(id <FCTagProviding>)arg3;
- (UIViewController *)relatedArticlesViewController:(FRRelatedArticlesViewController *)arg1 previewViewControllerForCell:(FRFeedCollectionViewCell *)arg2 withHeadline:(id <FCHeadlineProviding>)arg3;
- (void)relatedArticlesViewController:(FRRelatedArticlesViewController *)arg1 didSelectTopicCell:(FRRelatedTopicTagCollectionViewCell *)arg2 withTopic:(id <FCTagProviding>)arg3;
- (void)relatedArticlesViewController:(FRRelatedArticlesViewController *)arg1 didSelectCell:(FRFeedCollectionViewCell *)arg2 withHeadline:(id <FCHeadlineProviding>)arg3;
@end