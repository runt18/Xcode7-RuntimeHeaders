//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRDetailNavigationViewController : NSViewController <XRPageNavigationDelegate, XRPageNavigationDatasource>
{
    NSString *_label;
    XRInstrument *_instrument;
    NSButton *_constructToggleButton;
    XRConstructAndCanvasView *_constructAndCanvasView;
    XRConstructView *_constructView;
    XRCanvasView *_canvasView;
    XRPageNavigationView *_pageNavigationView;
    NSButton *_leftPanelButton;
    NSMutableArray *_pages;
    ConstructAndCanvasPage *_selectedPage;
    ConstructAndCanvasPage *_configPage;
    long long _selectedPageIndex;
}

@property(nonatomic) long long selectedPageIndex; // @synthesize selectedPageIndex=_selectedPageIndex;
@property(retain) ConstructAndCanvasPage *configPage; // @synthesize configPage=_configPage;
@property(retain) ConstructAndCanvasPage *selectedPage; // @synthesize selectedPage=_selectedPage;
@property(retain) NSMutableArray *pages; // @synthesize pages=_pages;
@property NSButton *leftPanelButton; // @synthesize leftPanelButton=_leftPanelButton;
@property __weak XRPageNavigationView *pageNavigationView; // @synthesize pageNavigationView=_pageNavigationView;
@property __weak XRCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property __weak XRConstructView *constructView; // @synthesize constructView=_constructView;
@property __weak XRConstructAndCanvasView *constructAndCanvasView; // @synthesize constructAndCanvasView=_constructAndCanvasView;
@property __weak NSButton *constructToggleButton; // @synthesize constructToggleButton=_constructToggleButton;
@property __weak XRInstrument *instrument; // @synthesize instrument=_instrument;
@property(retain) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)selectedPageViewController;
- (BOOL)canShowConstruct;
- (BOOL)canHideConstruct;
- (BOOL)constructVisible;
- (BOOL)hasConfigPage;
- (long long)_selectedPageIndex;
- (long long)pageCount;
- (void)selectionChanged:(id)arg1 oldSelection:(long long)arg2 newSelection:(long long)arg3;
- (void)_jumpToPage:(id)arg1 animation:(int)arg2;
- (void)leftPanelButtonClicked:(id)arg1;
- (void)removePages;
- (void)removePageAtIndex:(long long)arg1;
- (void)removeConfig;
- (void)addPageWithConstruct:(id)arg1 canvas:(id)arg2;
- (void)setConfigWithConstruct:(id)arg1 canvas:(id)arg2;
- (void)constructToggleButtonClicked:(id)arg1;
- (void)setView:(id)arg1;
- (void)reloadData;
- (id)currentConstruct;
- (id)currentCanvas;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 label:(id)arg3 instrument:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end