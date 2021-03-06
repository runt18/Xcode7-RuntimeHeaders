//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLStuckTransactionDialog : NSObject <CSLAlertSheetViewControllerDelegate>
{
    _Bool _needsDismissalAfterPresentation;
    id <CSLStuckTransactionDialogDelegate> _delegate;
    UIWindow *_window;
    CSLAlertSheetViewController *_alertViewController;
    unsigned int _presentationState;
}

@property(nonatomic) _Bool needsDismissalAfterPresentation; // @synthesize needsDismissalAfterPresentation=_needsDismissalAfterPresentation;
@property(nonatomic) unsigned int presentationState; // @synthesize presentationState=_presentationState;
@property(retain, nonatomic) CSLAlertSheetViewController *alertViewController; // @synthesize alertViewController=_alertViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak id <CSLStuckTransactionDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestCrash;
- (void)_dismissIfNeeded;
- (void)dismiss;
- (void)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end