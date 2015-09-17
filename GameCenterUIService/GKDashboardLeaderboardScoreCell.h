//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKDashboardLeaderboardScoreCell : GKRectShadowCell
{
    GKScore *_score;
    GKDashboardPlayerPhotoView *_playerView;
    UILabel *_rankLabel;
    UILabel *_nameLabel;
    UILabel *_scoreLabel;
    UIView *_topLine;
    UIView *_bottomLine;
}

+ (id)highRankNib;
+ (id)lowRankNib;
+ (struct CGSize)defaultSize;
@property(nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(nonatomic) GKDashboardPlayerPhotoView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
@property(nonatomic) _Bool linesVisible; // @dynamic linesVisible;
- (void)setupForScore:(id)arg1;
@property(readonly, nonatomic) UIView *popoverSourceView;
- (void)dealloc;

@end