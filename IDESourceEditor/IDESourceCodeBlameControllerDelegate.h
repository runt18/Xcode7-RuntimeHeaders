//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDESourceCodeBlameControllerDelegate <NSObject>
- (void)blameController:(IDESourceCodeBlameController *)arg1 showRevision:(DVTSourceControlRevision *)arg2;
- (void)blameController:(IDESourceCodeBlameController *)arg1 diffAgainstRevision:(DVTSourceControlRevision *)arg2;
- (void)blameController:(IDESourceCodeBlameController *)arg1 compareToRevision:(DVTSourceControlRevision *)arg2;
- (void)blameController:(IDESourceCodeBlameController *)arg1 compareRevisionToPreviousRevision:(DVTSourceControlRevision *)arg2;

@optional
- (void)blameController:(IDESourceCodeBlameController *)arg1 didEncounterError:(NSError *)arg2;
@end