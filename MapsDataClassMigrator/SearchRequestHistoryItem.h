//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SearchRequestHistoryItem : NSObject <SyncingHistoryItem, NSCopying, HistoryItem>
{
    MSPHistoryEntryStorage *_storage;
}

- (void).cxx_destruct;
- (id)ticketForSource:(int)arg1;
@property(retain, nonatomic) NSString *syncIdentifier;
@property(nonatomic) double position;
@property(nonatomic) double timestamp;
@property(retain, nonatomic) NSString *locationDisplayString;
@property(readonly, nonatomic) NSString *displayQuery;
- (long long)type;
@property(readonly, nonatomic) MSPHistoryEntryStorage *storage;
- (void)updateWithStorage:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *data;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTicket:(id)arg1;
- (id)initWithSearchRequestStorage:(id)arg1;
- (id)initWithDisplayQuery:(id)arg1 locationDisplayString:(id)arg2 timestamp:(double)arg3 mapRegion:(id)arg4;
- (id)init;
@property(readonly, nonatomic) NSData *syncData;
- (_Bool)updateFromSyncData:(id)arg1;
@property(readonly, nonatomic) _Bool isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end