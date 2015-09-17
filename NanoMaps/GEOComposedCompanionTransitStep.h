//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GEOComposedCompanionTransitStep : GEOCompanionStep
{
    _Bool _isArrivalStep;
    NSMutableArray *_primaryInstructions;
    NSMutableArray *_secondaryInstructions;
    NSMutableArray *_tertiaryInstructions;
    NSString *_departureBarInstruction;
    unsigned int _composedRouteStep;
    NSArray *_transitArtworks;
    GEOComposedRouteLeg *_leg;
    GEOComposedRouteStep *_step;
    struct _NSRange _stepIndexRange;
}

@property(nonatomic) _Bool isArrivalStep; // @synthesize isArrivalStep=_isArrivalStep;
@property(retain) GEOComposedRouteStep *step; // @synthesize step=_step;
@property(retain) GEOComposedRouteLeg *leg; // @synthesize leg=_leg;
@property(retain) NSArray *transitArtworks; // @synthesize transitArtworks=_transitArtworks;
@property(nonatomic) struct _NSRange stepIndexRange; // @synthesize stepIndexRange=_stepIndexRange;
@property(nonatomic) unsigned int composedRouteStep; // @synthesize composedRouteStep=_composedRouteStep;
@property(retain, nonatomic) NSString *departureBarInstruction; // @synthesize departureBarInstruction=_departureBarInstruction;
@property(retain, nonatomic) NSMutableArray *tertiaryInstructions; // @synthesize tertiaryInstructions=_tertiaryInstructions;
@property(retain, nonatomic) NSMutableArray *secondaryInstructions; // @synthesize secondaryInstructions=_secondaryInstructions;
@property(retain, nonatomic) NSMutableArray *primaryInstructions; // @synthesize primaryInstructions=_primaryInstructions;
- (void).cxx_destruct;
- (_Bool)isCurrentStepInRoute:(id)arg1 withStatus:(id)arg2;
- (_Bool)hasValidInstructions;
- (int)maneuverType;
- (int)transportType;
- (_Bool)isWalking;
- (id)initWithWalkingLeg:(id)arg1 route:(id)arg2 stepIndexRange:(struct _NSRange)arg3 fromLastStep:(id)arg4;
- (id)initWithTransitStep:(id)arg1 route:(id)arg2 stepIndexRange:(struct _NSRange)arg3;
- (id)_shieldOfSize:(int)arg1 populatingContentRect:(struct CGRect *)arg2;

@end