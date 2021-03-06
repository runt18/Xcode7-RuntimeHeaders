//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRRecommendationBrickTitleProvider : NSObject
{
    FCFeedDescriptor *_feed;
    unsigned long long _titleRotationIndex;
    NSDictionary *_identifierToTitleDictionary;
}

@property(retain, nonatomic) NSDictionary *identifierToTitleDictionary; // @synthesize identifierToTitleDictionary=_identifierToTitleDictionary;
@property(nonatomic) unsigned long long titleRotationIndex; // @synthesize titleRotationIndex=_titleRotationIndex;
@property(retain, nonatomic) FCFeedDescriptor *feed; // @synthesize feed=_feed;
- (void).cxx_destruct;
- (id)rotateTitle:(id)arg1 identifier:(id)arg2;
- (id)recommendationBrickTitle:(id)arg1;
- (id)init;

@end