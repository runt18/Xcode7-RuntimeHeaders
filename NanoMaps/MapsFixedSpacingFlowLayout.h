//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MapsFixedSpacingFlowLayout : UICollectionViewFlowLayout
{
    float _fixedInterItemSpacing;
}

@property(nonatomic) float fixedInterItemSpacing; // @synthesize fixedInterItemSpacing=_fixedInterItemSpacing;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

@end