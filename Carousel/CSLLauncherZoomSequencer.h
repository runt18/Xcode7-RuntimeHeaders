//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLLauncherZoomSequencer : NSObject <CSLCrownInputEventHandler>
{
    float _zoom;
    _Bool _interactive;
    id <CSLLauncherZoomSequencerDelegate> _delegate;
    float _start;
    float _end;
    float _initialSpringDelaySeconds;
}

+ (id)standardZoomSequencer;
@property(readonly, nonatomic) float zoom; // @synthesize zoom=_zoom;
@property(nonatomic) float initialSpringDelaySeconds; // @synthesize initialSpringDelaySeconds=_initialSpringDelaySeconds;
@property(nonatomic) float end; // @synthesize end=_end;
@property(nonatomic) float start; // @synthesize start=_start;
@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic) __weak id <CSLLauncherZoomSequencerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleCrownInputEvent:(id)arg1;
- (void)completeWithSnap;
- (void)begin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end