//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPReportComposerTwoLineSnippetTableViewCell : UITableViewCell
{
    UILabel *_firstLineLabel;
    UILabel *_secondLineLabel;
    NSArray *_leftMarginConstraints;
    NSArray *_rightMarginConstraints;
    NSLayoutConstraint *_collapsibleFirstSecondLineMargin;
    NSArray *_allConstraints;
    UIView *_thirdLineAccessoryView;
}

+ (id)measuringCell;
@property(retain, nonatomic) UIView *thirdLineAccessoryView; // @synthesize thirdLineAccessoryView=_thirdLineAccessoryView;
- (void).cxx_destruct;
- (double)preferredHeightInTableView:(id)arg1;
- (void)updateTextWithReplacements:(id)arg1;
- (id)defaultReplacementAttributes;
- (id)attributedStringFormat;
- (void)layoutMarginsDidChange;
- (void)didMoveToSuperview;
- (void)_updateLeftRightConstraints;
- (void)_recreateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end