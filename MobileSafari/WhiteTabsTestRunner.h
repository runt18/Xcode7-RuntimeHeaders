//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WhiteTabsTestRunner : ReplayPagesTestRunner
{
    unsigned long long _runCount;
    unsigned long long _totalHibernatedTabs;
    unsigned long long _totalLiveTabs;
}

- (void)finishedTestPage:(id)arg1;
- (void)collectPPTResults;
- (id)init;

@end