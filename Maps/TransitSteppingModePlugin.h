//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitSteppingModePlugin : NSObject <SteppingModePlugin>
{
    NSArray *_signs;
    NSMutableDictionary *_auxViewCache;
    GEOMapAccess *_mapAccess;
    SteppingSignView *_steppingSizingView;
    id <CellVendor> _cellVendor;
    MNRoute *_route;
}

@property(retain, nonatomic) MNRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (void)reloadSignAtIndex:(long long)arg1;
- (void)rectForSignAtIndex:(long long)arg1 currentStepIndex:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (struct CGSize)sizeForSignAtIndex:(long long)arg1 fittingSize:(struct CGSize)arg2;
- (struct _NSRange)stepRangeForSignIndex:(long long)arg1;
- (long long)signIndexForStepIndex:(long long)arg1;
- (long long)signIndexForStep:(id)arg1;
- (id)lastStepAtSignIndex:(long long)arg1;
- (id)firstStepAtSignIndex:(long long)arg1;
- (id)stepAtSignIndex:(long long)arg1;
@property(readonly) long long numberOfSigns;
- (void)_configureSteppingSignView:(id)arg1 withSign:(id)arg2;
- (id)_guidanceAccessoryItemForSign:(id)arg1;
- (id)auxViewAtIndex:(long long)arg1;
- (id)signAtIndex:(long long)arg1;
@property(nonatomic) __weak id <CellVendor> cellVendor; // @synthesize cellVendor=_cellVendor;
- (id)initWithRoute:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end