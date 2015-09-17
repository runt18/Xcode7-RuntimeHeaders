//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLUnblankingSynchronizationConnection : NSObject <CSLUnblankingSynchronizationServerInterface>
{
    _Bool _enabled;
    int _pid;
    NSXPCConnection *_connection;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (void)readyForUnblank:(unsigned int)arg1;
- (void)enableUnblankingSynchronization:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPid:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end