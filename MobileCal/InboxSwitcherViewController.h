//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface InboxSwitcherViewController : UIViewController <InboxNewSectionViewControllerDelegate, InboxRepliedSectionViewControllerDelegate>
{
    CalendarModel *_model;
    UISegmentedControl *_segmentedControl;
    UIViewController *_currentViewController;
    InboxNewSectionViewController *_newSectionViewController;
    InboxRepliedSectionViewController *_repliedSectionViewController;
    id <InboxSwitcherViewControllerDelegate> _switcherDelegate;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(nonatomic) __weak id <InboxSwitcherViewControllerDelegate> switcherDelegate; // @synthesize switcherDelegate=_switcherDelegate;
- (void).cxx_destruct;
- (id)_showViewControllerAtIndex:(long long)arg1;
- (id)_viewControllerForIndex:(long long)arg1;
- (void)segmentedControlValueChanged:(id)arg1;
- (void)inboxWillDismiss;
- (id)showRepliedSection;
- (id)showNewSection;
- (void)inboxRepliedSectionViewController:(id)arg1 inspectEvent:(id)arg2;
- (void)inboxNewSectionViewController:(id)arg1 viewCommentsForEvent:(id)arg2;
- (void)inboxNewSectionViewController:(id)arg1 inspectEvent:(id)arg2;
- (void)inboxNewSectionViewController:(id)arg1 shouldCloseAnimated:(_Bool)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)_setDoneButtonState;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end