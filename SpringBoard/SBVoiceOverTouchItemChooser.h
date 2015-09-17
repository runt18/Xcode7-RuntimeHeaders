//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SBVoiceOverTouchItemChooser : UIView <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    NSArray *_originalList;
    NSArray *_itemCategoryMappings;
    NSArray *_regionDescriptions;
    NSMutableArray *_filteredList;
    NSMutableDictionary *_items;
    long long _totalItemCount;
    NSArray *_sectionHeaders;
    UITableView *_table;
    UIControl *_dimmingView;
    long long _selectedRow;
    NSString *_filter;
    UISearchField *_searchField;
    struct CGRect _keyboardFrame;
    UILabel *_headingLabel;
    NSArray *_categories;
    long long _category;
    _Bool _activateItem;
}

+ (void)setCategories:(id)arg1;
+ (_Bool)isVisible;
+ (void)hide;
+ (void)show:(id)arg1;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hide;
- (_Bool)isVisible;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)show:(id)arg1;
- (void)_displayWithList:(id)arg1 fromRotorSwitch:(_Bool)arg2;
- (void)_resizeHeaderLabel;
- (void)layoutSubviews;
- (void)_resizeItemChooserView;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)dealloc;
- (void)_dimmingViewPressed;
- (void)_orientationChangeNotification;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_updatePositionForKeyboard:(struct CGRect)arg1;
- (double)_positionAccountingForKeyboard:(struct CGRect)arg1;
- (void)_handleSearchFieldTextChange:(id)arg1;
- (void)_rotateWindow;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)_accessibilityActivateActionChosen:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end