//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _RemindersPriorityPickerCell : UITableViewCell
{
    UISegmentedControl *_priorityPicker;
}

@property(readonly, nonatomic) UISegmentedControl *priorityPicker; // @synthesize priorityPicker=_priorityPicker;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) long long priority;
- (void)setColor:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end