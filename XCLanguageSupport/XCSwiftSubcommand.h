//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSwiftSubcommand : NSObject
{
    int _pid;
    NSArray *_inputs;
    NSArray *_outputs;
    NSString *_commandLine;
    IDEActivityLogSectionRecorder *_logSectionRecorder;
}

@property(readonly) IDEActivityLogSectionRecorder *logSectionRecorder; // @synthesize logSectionRecorder=_logSectionRecorder;
@property(readonly, copy) NSString *commandLine; // @synthesize commandLine=_commandLine;
@property(readonly, copy) NSArray *outputs; // @synthesize outputs=_outputs;
@property(readonly, copy) NSArray *inputs; // @synthesize inputs=_inputs;
@property(readonly) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (id)initWithPid:(int)arg1 inputs:(id)arg2 outputs:(id)arg3 commandLine:(id)arg4 logSectionRecorder:(id)arg5;

@end