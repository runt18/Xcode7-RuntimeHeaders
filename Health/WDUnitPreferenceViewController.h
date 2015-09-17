//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDUnitPreferenceViewController : UITableViewController
{
    NSSet *_units;
    HKDataUnitGroup *_dataUnitGroup;
    HKUnitController *_unitController;
    NSArray *_rows;
    long long _selectedRowIndex;
    long long _originalSelectedRowIndex;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    _Bool _requiresChangeConfirmation;
}

@property(nonatomic) _Bool requiresChangeConfirmation; // @synthesize requiresChangeConfirmation=_requiresChangeConfirmation;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_updateCurrentUnit:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_sortedUnitPreferenceRows;
- (id)initWithUnits:(id)arg1 dataUnitGroup:(id)arg2 unitController:(id)arg3;

@end