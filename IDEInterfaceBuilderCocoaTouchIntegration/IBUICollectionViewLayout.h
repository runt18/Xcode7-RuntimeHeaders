//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUICollectionViewLayout : NSObject <IBDocumentArchiving, NSCoding>
{
    IBUICollectionView *collectionView;
    IBCocoaTouchTargetRuntime *targetRuntime;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(retain, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime;
@property(nonatomic) __weak IBUICollectionView *collectionView; // @synthesize collectionView;
- (void).cxx_destruct;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (long long)cellsGrowthDirection;
- (long long)sectionsGrowthDirection;
- (BOOL)supportsSectionHeadersAndFooters;
- (id)initWithTargetRuntime:(id)arg1;
- (id)init;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibPasteboardTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end