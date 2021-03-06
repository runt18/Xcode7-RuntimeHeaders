//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYMTLDesktopReplayControllerSupport : NSObject <DYReplayControllerSupportDesktop>
{
}

- (void)_setupMTLObjectRemapperForPlaybackEngine:(id)arg1;
- (id)experimentResultsGeneratorForPlaybackEngine:(id)arg1;
- (id)startFrameProfiler:(id)arg1;
- (id)newFrameProfilerWithPlaybackEngine:(id)arg1 message:(id)arg2;
- (BOOL)isDebugPlaybackEngine:(id)arg1;
- (void)endPlayback;
- (id)createDebugPlaybackEngineWithCaptureStore:(id)arg1;
- (id)createOverridingPlaybackEngineWithCaptureStore:(id)arg1 experiment:(id)arg2;
- (id)createArchivePlaybackEngineWithCaptureStore:(id)arg1;
- (void)enableDebugFunctions:(id)arg1 playbackEngine:(id)arg2;
- (void)disableDebugFunctions:(id)arg1 playbackEngine:(id)arg2;
- (void)enableDebugDrawCallPresent:(BOOL)arg1 playbackEngine:(id)arg2;
- (void)setWireframeLineColor:(unsigned int)arg1 playbackEngine:(id)arg2;
- (void)setDebugWireframeLineWidth:(float)arg1 playbackEngine:(id)arg2;
- (void)enableDebugWireframePresent:(BOOL)arg1 playbackEngine:(id)arg2;
- (id)initWithCaptureStore:(id)arg1;

@end