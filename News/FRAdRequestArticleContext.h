//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRAdRequestArticleContext : FRNonBatchedAdRequestContent
{
    NSDictionary *_campaignData;
    unsigned long long _creativeType;
}

@property(nonatomic) unsigned long long creativeType; // @synthesize creativeType=_creativeType;
@property(copy, nonatomic) NSDictionary *campaignData; // @synthesize campaignData=_campaignData;
- (void).cxx_destruct;

@end