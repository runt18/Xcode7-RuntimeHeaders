//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol MFMailboxTableViewDelegate <UITableViewDelegate>

@optional
- (void)tableView:(MFMailboxTableView *)arg1 tappedSwipeAction:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(MFMailboxTableView *)arg1 performSwipeAction:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(MFMailboxTableView *)arg1 willPerformSwipeAction:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (NSString *)tableView:(MFMailboxTableView *)arg1 titleForSwipeAction:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (unsigned long long)tableView:(MFMailboxTableView *)arg1 secondaryActionForCellEdge:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
- (unsigned long long)tableView:(MFMailboxTableView *)arg1 primaryActionForCellEdge:(unsigned long long)arg2 atIndexPath:(NSIndexPath *)arg3;
@end