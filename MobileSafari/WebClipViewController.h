//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WebClipViewController : UITableViewController <UITextFieldDelegate, _SFBookmarkTextEntryTableViewControllerDelegate>
{
    UITableViewCell *_titleCell;
    UITableViewCell *_addressCell;
    UIImageView *_iconImageView;
    _Bool _suspendAfterDismiss;
    _Bool _delegateNotifiedOfResult;
    _Bool _canEditAndSave;
    UIWebClip *_webClip;
    NSObject<WebClipViewControllerDelegate> *_delegate;
}

@property(nonatomic) _Bool canEditAndSave; // @synthesize canEditAndSave=_canEditAndSave;
@property(nonatomic) __weak NSObject<WebClipViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) UIWebClip *webClip; // @synthesize webClip=_webClip;
- (void).cxx_destruct;
- (_Bool)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2;
- (_Bool)_canEditFieldsInCurrentViewController;
- (_Bool)_shouldUseTranslucentAppearance;
- (void)dealloc;
- (struct CGSize)preferredContentSize;
- (struct CGSize)contentSizeForViewInPopoverView;
- (void)_textFieldChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)_canAddWebClip;
- (void)_add;
- (void)_cancel;
- (void)_updateCells;
- (id)_titleCell;
- (void)_updateIconViewFrame;
- (struct CGPoint)_centerForIconView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateUIAnimated:(_Bool)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end