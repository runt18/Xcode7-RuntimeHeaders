//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSPInterfaceTable : IBSPAbstractContainerView <IBDocumentArchiving, NSCoding>
{
}

+ (id)keyPathsForValuesAffectingIbInspectedNumberOfItems;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (long long)layout;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibTrackableHeightKeyPath;
- (id)ibTrackableWidthKeyPath;
- (void)ibPopulateWarnings:(id)arg1 forDocument:(id)arg2 inConfiguration:(id)arg3 withStorage:(id)arg4 context:(id)arg5;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (double)ibInspectedDefaultSpacing;
- (void)setIbInspectedNumberOfItems:(unsigned long long)arg1;
- (unsigned long long)ibInspectedNumberOfItems;
- (int)ibStoryboardSeparationTypeForChild:(id)arg1 storyboardEquivalent:(id)arg2;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibChildrenInMarshallingOrderInDocument:(id)arg1 fileType:(long long)arg2;
- (id)ibTransformPlistValue:(id)arg1 forKeyPath:(id)arg2 plistKey:(id)arg3 document:(id)arg4 configuration:(id)arg5 reason:(long long)arg6;
- (void)ibEnumeratePlistKeysForKeyPath:(id)arg1 document:(id)arg2 reason:(long long)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)ibItemPasteboardType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end