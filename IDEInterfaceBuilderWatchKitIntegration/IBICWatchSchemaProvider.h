//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICWatchSchemaProvider : NSObject <IBICSchemaProvider>
{
    IBICPlatform *_watchPlatform;
    IBICIdiom *_universalIdiom;
    IBICIdiom *_watchIdiom;
    IBICScale *_twoXScale;
    IBICScale *_threeXScale;
    IBICSubtype *_watch38mmSubtype;
    IBICSubtype *_watch42mmSubtype;
    IBICScreenWidth *_screenWidthNarrow;
    IBICScreenWidth *_screenWidthWide;
    IBICLocus *_roleNotificationCenter;
    IBICLocus *_roleCompanion;
    IBICLocus *_roleHomeScreen;
    IBICLocus *_roleLongLook;
    IBICLocus *_roleQuickLook;
    IBICSize *_size24;
    IBICSize *_size27_5;
    IBICSize *_size29;
    IBICSize *_size40;
    IBICSize *_size44;
    IBICSize *_size86;
    IBICSize *_size98;
    IBICDeviceOrientation *_portraitOrientation;
    IBICExtent *_extentFullScreen;
    IBICSystemVersion *_iOSv8;
    IBICFileType *_pngFileType;
    IBICFileType *_jpegFileType;
    IBICFileType *_pdfFileType;
    IBICLocus *_roleCircular;
    IBICLocus *_roleUtilitarian;
    IBICLocus *_roleModular;
}

+ (BOOL)supportsRemoteToolsTargetingPlatformNamed:(id)arg1;
- (void).cxx_destruct;
- (void)registerDataSetSlots:(id)arg1;
- (void)registerComplicationSlots:(id)arg1;
- (void)registerAppIconSetSlots:(id)arg1;
- (void)registerImageSetSlots:(id)arg1;
- (void)registerSlotComponents:(id)arg1;
- (void)captureExistingComponents:(id)arg1;
- (double)precedence;
- (void)registerSchemaComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end