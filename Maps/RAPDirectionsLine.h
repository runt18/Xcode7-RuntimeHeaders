//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPDirectionsLine : RAPTransitLine
{
    unsigned long long _lineIndex;
}

@property(readonly, nonatomic, getter=_lineIndex) unsigned long long lineIndex; // @synthesize lineIndex=_lineIndex;
- (id)_initWithName:(id)arg1 systemName:(id)arg2 artworkData:(id)arg3 lineIndex:(unsigned long long)arg4 lineFeatureID:(unsigned long long)arg5 primaryDescriptionText:(id)arg6 secondaryDescriptionText:(id)arg7;

@end