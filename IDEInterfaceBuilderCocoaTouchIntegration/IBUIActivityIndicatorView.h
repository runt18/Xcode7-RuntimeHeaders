//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUIActivityIndicatorView : IBUIView <IBDocumentArchiving, NSCoding>
{
    int style;
    BOOL hidesWhenStopped;
    BOOL animating;
    NSColor *color;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingInspectedAnimating;
+ (id)keyPathsForValuesAffectingInspectedHidesWhenStopped;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy, nonatomic) NSColor *color; // @synthesize color;
@property(nonatomic) BOOL animating; // @synthesize animating;
@property(nonatomic) BOOL hidesWhenStopped; // @synthesize hidesWhenStopped;
@property(nonatomic) int style; // @synthesize style;
- (void).cxx_destruct;
- (void)verifyDecodedStyle:(id)arg1;
- (void)setInspectedAnimating:(BOOL)arg1;
- (BOOL)inspectedAnimating;
- (void)setInspectedHidesWhenStopped:(BOOL)arg1;
- (BOOL)inspectedHidesWhenStopped;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (id)ibWidgetType;
- (long long)ibPreferredResizeDirection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end