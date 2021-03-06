//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPKPaymentAlertViewController : CUISAlertViewController
{
    _Bool _showsBackground;
    _Bool _registeredForButtonSinglePress;
    id <NPKPaymentAlertViewControllerDelegate> _delegate;
    UIImageView *_staticBlurImageView;
    CSLSButtonHandler *_buttonHandler;
}

@property(retain, nonatomic) CSLSButtonHandler *buttonHandler; // @synthesize buttonHandler=_buttonHandler;
@property(nonatomic) _Bool registeredForButtonSinglePress; // @synthesize registeredForButtonSinglePress=_registeredForButtonSinglePress;
@property(retain, nonatomic) UIImageView *staticBlurImageView; // @synthesize staticBlurImageView=_staticBlurImageView;
@property(nonatomic) __weak id <NPKPaymentAlertViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsBackground; // @synthesize showsBackground=_showsBackground;
- (void).cxx_destruct;
- (void)_unregisterForButtonSinglePress;
- (void)_registerForButtonSinglePress;
- (void)_setBackgroundForSnapshotImage:(id)arg1;
- (void)_updateSnapshot;
- (void)backgroundDidChange;
- (void)prepareForPresentation;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)loadView;
- (void)dealloc;
- (id)initWithPriority:(unsigned int)arg1 serviceName:(id)arg2;

@end