//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NSRSiriAlertViewControllerDelegate <NSObject>
- (void)alertViewControllerDidReceiveUsefulUserResult:(CUISAlertViewController *)arg1;
- (_Bool)backlightIsOnForAlertViewController:(CUISAlertViewController *)arg1;
- (_Bool)deviceIsUILockedForAlertViewController:(CUISAlertViewController *)arg1;
- (void)alertViewControllerWantsToStartSpeechRequest:(CUISAlertViewController *)arg1;
- (void)alertViewControllerIsDeactivating:(CUISAlertViewController *)arg1;
- (void)alertViewControllerWantsDeactivation:(CUISAlertViewController *)arg1 animated:(_Bool)arg2;
- (void)alertViewControllerIsActivating:(CUISAlertViewController *)arg1;
- (void)alertViewControllerDidStopListening:(CUISAlertViewController *)arg1;
- (void)alertViewControllerDidFailToStartListening:(CUISAlertViewController *)arg1;
- (void)alertViewControllerDidStartListening:(CUISAlertViewController *)arg1;
- (void)alertViewControllerWillStartListening:(CUISAlertViewController *)arg1;
- (void)alertViewControllerDidDeclineToStartRequest:(CUISAlertViewController *)arg1;
- (void)alertViewControllerBacklightDidTurnOff:(CUISAlertViewController *)arg1;
- (void)alertViewControllerBacklightDidTurnOn:(CUISAlertViewController *)arg1;
@end