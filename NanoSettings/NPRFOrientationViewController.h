//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFOrientationViewController : NPRFBaseTableViewController
{
}

- (void)orientationInvertedChangedEvent;
- (void)setLeftCrownOrientation:(_Bool)arg1;
- (void)setRightWristOrientation:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithStyle:(int)arg1;

@end