//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NLWeeklyGoalDigestView : UIView
{
    CUISAlertPlatterView *_digestPlatterView;
    UILabel *_titleLabel;
    NSDictionary *_titleAttributes;
    UILabel *_digestLabel;
    NSDictionary *_digestAttributes;
    float _titleHeight;
    float _digestHeight;
    double _mostRecentWeeklyGoalInCalories;
    int _numberOfTimesAchieved;
    NLWeeklyGoalGraphLayer *_graphLayer;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_populateGraphViewWithWeeklyGraphSamples:(id)arg1 forWeeklyGoal:(double)arg2;
- (void)_populateDigestStringWithMostRecentWeeklyGoal:(double)arg1 numTimesGoalAchieved:(int)arg2;
- (void)_populateTitleView;
- (id)init;
- (void)_unitPreferencesDidChange;
- (void)dealloc;
- (id)initWithMostRecentWeeklyGoal:(double)arg1 numTimesGoalAchieved:(int)arg2 weeklyEnergyBurnGraphSamples:(id)arg3 roundedCorners:(unsigned int)arg4;

@end