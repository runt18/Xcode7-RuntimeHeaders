//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCATRecipesController : AXNamedItemsListController
{
    NSArray *_launchToRecipeSpecifiers;
}

@property(retain, nonatomic) NSArray *launchToRecipeSpecifiers; // @synthesize launchToRecipeSpecifiers=_launchToRecipeSpecifiers;
- (id)_launchToRecipeSummary:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (_Bool)shouldAllowSelection;
- (void)didSaveItems;
- (id)setName:(id)arg1 forItem:(id)arg2;
- (id)nameForItem:(id)arg1;
- (SEL)settingsSetter;
- (SEL)settingsGetter;
- (void)dealloc;

@end