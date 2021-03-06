//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPKNotificationUIViewController : CUISBulletinClientViewController <NPKPassViewDelegate>
{
    _Bool _handleScrollViewDidEndScrolling;
    BBBulletin *_bulletin;
    NPKTransientPassAssertion *_transientPassAssertion;
}

+ (void)initialize;
@property(retain, nonatomic) NPKTransientPassAssertion *transientPassAssertion; // @synthesize transientPassAssertion=_transientPassAssertion;
@property(nonatomic) _Bool handleScrollViewDidEndScrolling; // @synthesize handleScrollViewDidEndScrolling=_handleScrollViewDidEndScrolling;
@property(retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)didFinishScrollingAnimationsWithContentOffset:(struct CGPoint)arg1;
- (void)willBeginDragging;
- (struct CGPoint)contentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)contentOffsetDidChange:(struct CGPoint)arg1;
@property(readonly, nonatomic) NSString *passUniqueID;
- (void)passViewNeedsResetState:(id)arg1;
- (void)passView:(id)arg1 hideStatusBar:(_Bool)arg2 animated:(_Bool)arg3;
- (void)passView:(id)arg1 didUpdateHeight:(float)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithBulletin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end