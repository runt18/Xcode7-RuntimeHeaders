//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IOSSHLSuspendAppTransaction : IOSSHLActivateShellTransaction
{
    IOSSHLApplication *_suspendingApplication;
}

- (void).cxx_destruct;
- (_Bool)_isDepartingContext:(id)arg1;
- (id)initWithResultBlock:(CDUnknownBlockType)arg1;
- (id)initWithApplication:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end