//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLBulletinDeduplicatorItem : NSObject <NSCopying>
{
    _Bool _shouldPlayLightsAndSirens;
    _Bool _hasFiredFake;
    _Bool _hasFiredReal;
    _Bool _isWithdrawn;
    _Bool _isWaitingForMatch;
    NSString *_localSectionID;
    NSString *_mirroredSectionID;
    NSString *_universalSectionID;
    NSString *_publisherMatchID;
    BBBulletin *_realBulletin;
    BBBulletin *_fakeBulletin;
    unsigned int _feed;
    NSString *_realBulletinID;
    NSString *_fakeBulletinID;
    NSDate *_autoFireDate;
    NSDate *_createdDate;
}

@property(readonly, copy, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(copy, nonatomic) NSDate *autoFireDate; // @synthesize autoFireDate=_autoFireDate;
@property(copy, nonatomic) NSString *fakeBulletinID; // @synthesize fakeBulletinID=_fakeBulletinID;
@property(copy, nonatomic) NSString *realBulletinID; // @synthesize realBulletinID=_realBulletinID;
@property(nonatomic) _Bool isWaitingForMatch; // @synthesize isWaitingForMatch=_isWaitingForMatch;
@property(nonatomic) _Bool isWithdrawn; // @synthesize isWithdrawn=_isWithdrawn;
@property(nonatomic) _Bool hasFiredReal; // @synthesize hasFiredReal=_hasFiredReal;
@property(nonatomic) _Bool hasFiredFake; // @synthesize hasFiredFake=_hasFiredFake;
@property(nonatomic) _Bool shouldPlayLightsAndSirens; // @synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens;
@property(nonatomic) unsigned int feed; // @synthesize feed=_feed;
@property(retain, nonatomic) BBBulletin *fakeBulletin; // @synthesize fakeBulletin=_fakeBulletin;
@property(retain, nonatomic) BBBulletin *realBulletin; // @synthesize realBulletin=_realBulletin;
@property(copy, nonatomic) NSString *publisherMatchID; // @synthesize publisherMatchID=_publisherMatchID;
@property(copy, nonatomic) NSString *universalSectionID; // @synthesize universalSectionID=_universalSectionID;
@property(copy, nonatomic) NSString *mirroredSectionID; // @synthesize mirroredSectionID=_mirroredSectionID;
@property(copy, nonatomic) NSString *localSectionID; // @synthesize localSectionID=_localSectionID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasReceivedFake;
- (_Bool)hasReceivedReal;
@property(readonly, nonatomic) NSDate *expiryDate;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isReadyToWithdraw;
@property(readonly, nonatomic) _Bool isReadyToFire;
- (id)init;

@end