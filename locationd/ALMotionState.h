//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ALMotionState : PBCodable <NSCopying>
{
    double _timestamp;
    ALCMMotionContextMotionState *_motion;
    ALCLNatalieFeatures *_natalieFeatures;
    _Bool _regularEntry;
    CDStruct_b5306035 _has;
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(retain, nonatomic) ALCLNatalieFeatures *natalieFeatures; // @synthesize natalieFeatures=_natalieFeatures;
@property(retain, nonatomic) ALCMMotionContextMotionState *motion; // @synthesize motion=_motion;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasNatalieFeatures;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end