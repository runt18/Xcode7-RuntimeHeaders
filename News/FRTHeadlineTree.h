//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRTHeadlineTree : NSObject
{
    long long _minimumRowSpan;
    long long _maximumRowSpan;
    NSMutableArray *_allRankedLayouts;
    id <FCHeadlineProviding> _headline;
    struct __CFDictionary *_values;
}

@property(nonatomic) struct __CFDictionary *values; // @synthesize values=_values;
@property(retain, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property(retain, nonatomic) NSMutableArray *allRankedLayouts; // @synthesize allRankedLayouts=_allRankedLayouts;
@property(nonatomic) long long maximumRowSpan; // @synthesize maximumRowSpan=_maximumRowSpan;
@property(nonatomic) long long minimumRowSpan; // @synthesize minimumRowSpan=_minimumRowSpan;
- (void).cxx_destruct;
- (id)rankedLayoutWithRowSpan:(long long)arg1 columnSpan:(long long)arg2 imagePosition:(long long)arg3 imageHeight:(double)arg4;
- (void)insertRankedLayout:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithHeadline:(id)arg1;

@end