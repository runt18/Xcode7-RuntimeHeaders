//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NMReply : PBCodable <NSCopying>
{
    double _enqueuedTimeInterval;
    double _responseTime;
    NSMutableArray *_arguments;
    NSMutableArray *_compressedArguments;
    NSString *_senderUUID;
    struct {
        unsigned int enqueuedTimeInterval:1;
        unsigned int responseTime:1;
    } _has;
}

@property(nonatomic) double enqueuedTimeInterval; // @synthesize enqueuedTimeInterval=_enqueuedTimeInterval;
@property(nonatomic) double responseTime; // @synthesize responseTime=_responseTime;
@property(retain, nonatomic) NSString *senderUUID; // @synthesize senderUUID=_senderUUID;
@property(retain, nonatomic) NSMutableArray *compressedArguments; // @synthesize compressedArguments=_compressedArguments;
@property(retain, nonatomic) NSMutableArray *arguments; // @synthesize arguments=_arguments;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasEnqueuedTimeInterval;
@property(nonatomic) _Bool hasResponseTime;
@property(readonly, nonatomic) _Bool hasSenderUUID;
- (id)compressedArgumentAtIndex:(unsigned int)arg1;
- (unsigned int)compressedArgumentsCount;
- (void)addCompressedArgument:(id)arg1;
- (void)clearCompressedArguments;
- (id)argumentAtIndex:(unsigned int)arg1;
- (unsigned int)argumentsCount;
- (void)addArgument:(id)arg1;
- (void)clearArguments;
- (_Bool)decompressArguments;
- (void)addArgument:(id)arg1 withCompressionType:(int)arg2;
- (id)argumentForTag:(int)arg1;

@end