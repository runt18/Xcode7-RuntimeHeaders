//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBIPadIdiom : IBiOSIdiom
{
}

- (struct CGSize)pageSheetFixedSizeForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (struct CGSize)formSheetFixedSizeForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (BOOL)regularWidthDetailIsFullScreen:(id)arg1 screenMetrics:(id)arg2;
- (long long)legacyTypeForScreenMetrics:(id)arg1;
- (id)screenMetricsForLegacyType:(long long)arg1;
- (double)defaultOverviewZoomFactor;
- (id)supportedOSVersions;
- (id)supportedAdBannerSizes;
- (int)defaultOrientationForArchiving;
- (id)defaultOrientationMetrics;
- (id)defaultScreenMetricsForArchiving;
- (id)defaultScreenMetrics;
- (id)backwardsDeploymentConfiguration;
- (id)presentedConcreteScreenMetrics;
- (id)iPadTwoThirdsScreenMetrics;
- (id)iPadHalfScreenMetrics;
- (id)iPadOneThirdScreenMetrics;
- (id)iPadFullScreenMetrics;
- (id)screenMetrics;
- (id)presentationOrderedSiblingIdioms;
- (id)resourceIdiomVariant;
- (id)designatedIdiomForConfigurations;
- (BOOL)ignoresStatusBarForUIBarStyleComputation;
- (BOOL)supportsSearchBarsEmbeddedInBarButtonItems;
- (BOOL)supportsTopToolbars;
- (id)icon;
- (BOOL)wantsRoundedCornersOn6AndEarlier;
- (int)defaultStatusBarStyleFor6AndEarlier;
- (id)xibArchiveType;
- (id)iPhoneSimulatorDeviceEnvVar;
- (id)colorListName;
- (id)archiveIdentifier;
- (id)identifier;
- (id)idiomName;

@end