//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol RAPReportViewControllerProtocol <NSObject>
@property(readonly, copy, nonatomic) CDUnknownBlockType completion;
@property(readonly, nonatomic) UIBarButtonItem *sendButtonItem;
@property(readonly, nonatomic) RAPReport *report;
- (void)_send;
- (void)invokeCompletionWithOutcome:(long long)arg1;
- (id)initWithReport:(RAPReport *)arg1 question:(RAPQuestion *)arg2 completion:(void (^)(id, long long))arg3;
@end