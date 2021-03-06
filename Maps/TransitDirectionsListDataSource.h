//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitDirectionsListDataSource : NSObject
{
    struct MNRoute *_route;
    NSMutableArray *_items;
    double _listWidthForLeadingInset;
    UIColor *_currentLineColor;
    unsigned long long _stepIdx;
    GEOComposedRouteStep *_currentStep;
    double _transitDirectionsListInstructionsLeadingInset;
}

@property(readonly, nonatomic) double transitDirectionsListInstructionsLeadingInset; // @synthesize transitDirectionsListInstructionsLeadingInset=_transitDirectionsListInstructionsLeadingInset;
@property(readonly, nonatomic) __weak MNRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (void)updateForBoardStepSelectedIndexChange;
- (void)resetArtworkSize;
- (void)measureShieldAndInstructionsWidthForListWidth:(double)arg1 instructionFontsProvider:(CDUnknownBlockType)arg2;
- (id)_titleForWaypoint:(id)arg1;
- (id)_destinationTitle;
- (id)_destinationItem;
- (id)_originTitle;
- (id)_originItem;
- (id)_blockTransferItem;
- (id)_passStopSubItemForStep:(id)arg1 afterStep:(id)arg2 boardStep:(id)arg3 currentRideDuration:(unsigned int)arg4 blockTransferFromColor:(id)arg5;
- (id)_transitTripBoardItem;
- (void)_consumeTransitTripLeg;
- (void)_populateLabelArtworkForItem:(id)arg1 forStep:(id)arg2;
- (id)assetForTransferBetweenAlightingStep:(id)arg1 andBoardingStep:(id)arg2 currentLineColor:(id)arg3;
- (id)_nextStepWithManeuver:(int)arg1;
- (id)_nextTransferStep;
- (void)_createTransferItem;
- (id)_nextLeaveStopStep;
- (id)_mergeTransitRoutingIncidentsForSteps:(id)arg1;
- (void)_createExitItem;
- (void)_consumeAlightStep;
- (id)_goToStopItemForStep:(id)arg1;
- (void)_consumeGoToStop;
- (id)_walkingItemForWalkingLeg:(id)arg1;
- (void)_consumeWalkingLeg;
- (void)buildItems;
- (void)setItem:(id)arg1 expanded:(_Bool)arg2;
- (id)initWithRoute:(struct MNRoute *)arg1;
@property(readonly, nonatomic) NSArray *items;

@end