//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SLGoogleWebAuthServiceController : UINavigationController <SL_OOPAWebViewControllerDelegate>
{
    SL_OOPAWebViewController *_webViewController;
}

- (void).cxx_destruct;
- (void)webViewController:(id)arg1 didFinishWithSuccess:(_Bool)arg2 response:(id)arg3 error:(id)arg4;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end