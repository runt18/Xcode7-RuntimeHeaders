//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPReportComposerIncorrectSearchViewController : RAPReportTableViewController
{
    RAPSearchWhichOneQuestion *_question;
    RAPTablePart *_search;
    _Bool _hasPushedComments;
}

- (void).cxx_destruct;
- (void)_questionDidChange;
- (void)_pushCommentsIfNeeded;
- (void)viewDidLoad;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end