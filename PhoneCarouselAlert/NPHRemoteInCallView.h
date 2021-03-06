//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPHRemoteInCallView : UIView
{
    UILabel *_displayLabel;
    UILabel *_descriptionLabel;
    NPHRoundButton *_hangupButton;
    UIButton *_pullCallButton;
    UIButton *_pullCallRevealButton;
    NSMutableArray *_noPullCallButtonsConstraints;
    NSMutableArray *_showRevealPullCallButtonConstraints;
    _Bool _showFullPullCallButton;
    _Bool _showPullCallButton;
    _Bool _updatingDuration;
    id <NPHRemoteInCallViewDelegate> _delegate;
    NPHCall *_displayedCall;
    CADisplayLink *_durationUpdater;
}

@property(nonatomic, getter=isUpdatingDuration) _Bool updatingDuration; // @synthesize updatingDuration=_updatingDuration;
@property(retain, nonatomic) CADisplayLink *durationUpdater; // @synthesize durationUpdater=_durationUpdater;
@property(nonatomic, getter=shouldShowPullCallButton) _Bool showPullCallButton; // @synthesize showPullCallButton=_showPullCallButton;
@property(retain, nonatomic) NPHCall *displayedCall; // @synthesize displayedCall=_displayedCall;
@property(nonatomic) __weak id <NPHRemoteInCallViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)showFullPullCallButton:(_Bool)arg1;
- (void)_createConstraints;
- (void)_pullCallTouchUp:(id)arg1;
- (void)_remoteInCallTouchUp:(id)arg1;
- (id)_createHangupButton;
- (void)_pullCallRevealTouchUp:(id)arg1;
- (id)_createPullCallRevealButton;
- (id)_createPullCallButton;
- (id)_createDescriptionLabel;
- (id)_createDisplayLabel;
- (void)_updateDuration:(id)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end