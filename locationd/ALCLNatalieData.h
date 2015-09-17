//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ALCLNatalieData : PBCodable <NSCopying>
{
    long long _basalNatalies;
    double _duration;
    double _mets;
    long long _natalies;
    double _timestamp;
    int _activityType;
    float _basalMETs;
    int _recordId;
    _Bool _isStanding;
    _Bool _regularEntry;
    struct {
        unsigned int basalNatalies:1;
        unsigned int duration:1;
        unsigned int mets:1;
        unsigned int timestamp:1;
        unsigned int basalMETs:1;
        unsigned int recordId:1;
    } _has;
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long basalNatalies; // @synthesize basalNatalies=_basalNatalies;
@property(nonatomic) long long natalies; // @synthesize natalies=_natalies;
@property(nonatomic) float basalMETs; // @synthesize basalMETs=_basalMETs;
@property(nonatomic) double mets; // @synthesize mets=_mets;
@property(nonatomic) _Bool isStanding; // @synthesize isStanding=_isStanding;
@property(nonatomic) int activityType; // @synthesize activityType=_activityType;
@property(nonatomic) int recordId; // @synthesize recordId=_recordId;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasBasalNatalies;
@property(nonatomic) _Bool hasBasalMETs;
@property(nonatomic) _Bool hasMets;
@property(nonatomic) _Bool hasRecordId;

@end