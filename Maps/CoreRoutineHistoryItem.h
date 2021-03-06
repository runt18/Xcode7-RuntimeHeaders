//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CoreRoutineHistoryItem : NSObject <HistoryItem>
{
    SearchResult *_searchResult;
    long long _locationOfInterestType;
}

@property(nonatomic) long long locationOfInterestType; // @synthesize locationOfInterestType=_locationOfInterestType;
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void).cxx_destruct;
- (double)timestamp;
- (long long)type;
- (id)initWithSearchResult:(id)arg1 andLocationOfInterestType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end