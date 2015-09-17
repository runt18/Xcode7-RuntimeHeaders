//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CRWifiScanWifiLocation : PBCodable <NSCopying>
{
    CDStruct_56d48c16 _channels;
    CDStruct_56d48c16 _hiddens;
    CDStruct_56d48c16 _rssis;
    CRWifiLocation *_location;
    NSMutableArray *_macs;
}

@property(retain, nonatomic) CRWifiLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSMutableArray *macs; // @synthesize macs=_macs;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLocation;
- (void)setHiddens:(int *)arg1 count:(unsigned int)arg2;
- (int)hiddensAtIndex:(unsigned int)arg1;
- (void)addHiddens:(int)arg1;
- (void)clearHiddens;
@property(readonly, nonatomic) int *hiddens;
@property(readonly, nonatomic) unsigned int hiddensCount;
- (void)setRssis:(int *)arg1 count:(unsigned int)arg2;
- (int)rssisAtIndex:(unsigned int)arg1;
- (void)addRssis:(int)arg1;
- (void)clearRssis;
@property(readonly, nonatomic) int *rssis;
@property(readonly, nonatomic) unsigned int rssisCount;
- (void)setChannels:(int *)arg1 count:(unsigned int)arg2;
- (int)channelsAtIndex:(unsigned int)arg1;
- (void)addChannels:(int)arg1;
- (void)clearChannels;
@property(readonly, nonatomic) int *channels;
@property(readonly, nonatomic) unsigned int channelsCount;
- (id)macsAtIndex:(unsigned int)arg1;
- (unsigned int)macsCount;
- (void)addMacs:(id)arg1;
- (void)clearMacs;
- (void)dealloc;

@end