//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TripleClickController : PSListController
{
    NSArray *_tripleClickOptions;
    AXAccessQueueTimer *_saveTimer;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)_optionIsDisabled:(int)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)_saveTripleClickOptions;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_saveCachedTripleClickOptions;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)specifiers;
- (void)_removeTripleClickOption:(int)arg1 ifNecessaryFromSpecifiers:(id)arg2 options:(id)arg3;
- (void)_removeTripleClickOption:(int)arg1 fromSpecifiers:(id)arg2 options:(id)arg3;
- (void)_reorderSpecifiers;
- (int)_optionFromSpecifierKey:(id)arg1;
- (void)_handleScannerToggled:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end