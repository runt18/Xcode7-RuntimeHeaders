//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DiffControllerInterface : NSObject <FileMergeRequestProtocol>
{
    NSConnection *connection;
}

- (id)didAbort:(id)arg1;
- (id)didMerge:(id)arg1;
- (oneway void)doDiffForFileSet:(id)arg1;
- (id)init;

@end