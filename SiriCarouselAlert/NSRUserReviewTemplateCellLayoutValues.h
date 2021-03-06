//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRUserReviewTemplateCellLayoutValues : NSObject <NSRCachedLayoutValues>
{
    float _height;
    float _bodyLabelFirstLineBaselineOriginY;
    float _titleLabelFirstLineBaselineOriginY;
    float _subtitleFirstLineBaseline;
    struct CGSize _bodyLabelFitSize;
    struct CGSize _titleLabelFitSize;
    struct CGSize _subtitleLabelFitSize;
}

@property(nonatomic) float subtitleFirstLineBaseline; // @synthesize subtitleFirstLineBaseline=_subtitleFirstLineBaseline;
@property(nonatomic) float titleLabelFirstLineBaselineOriginY; // @synthesize titleLabelFirstLineBaselineOriginY=_titleLabelFirstLineBaselineOriginY;
@property(nonatomic) float bodyLabelFirstLineBaselineOriginY; // @synthesize bodyLabelFirstLineBaselineOriginY=_bodyLabelFirstLineBaselineOriginY;
@property(nonatomic) struct CGSize subtitleLabelFitSize; // @synthesize subtitleLabelFitSize=_subtitleLabelFitSize;
@property(nonatomic) struct CGSize titleLabelFitSize; // @synthesize titleLabelFitSize=_titleLabelFitSize;
@property(nonatomic) struct CGSize bodyLabelFitSize; // @synthesize bodyLabelFitSize=_bodyLabelFitSize;
@property(nonatomic) float height; // @synthesize height=_height;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end