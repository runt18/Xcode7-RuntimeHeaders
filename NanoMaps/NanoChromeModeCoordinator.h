//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoChromeModeCoordinator : NSObject
{
}

+ (id)sharedInstance;
- (void)updateChromeToStartLoadingWithMessage:(id)arg1 withWorkloadBlock:(CDUnknownBlockType)arg2 cancellationBlock:(CDUnknownBlockType)arg3 fromMode:(id)arg4;
- (void)updateChromeToShowSearchResults:(id)arg1 onMap:(_Bool)arg2 fromMode:(id)arg3;
- (void)updateChromeToShowSearchResults:(id)arg1 fromMode:(id)arg2;
- (void)_startPreviewingNavigationFromMapItem:(id)arg1 fallbackStartLocation:(id)arg2 toMapItem:(id)arg3 viaTransportType:(int)arg4 startTime:(id)arg5 endTime:(id)arg6 fromMode:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)updateChromeToStartNavigationFromMapItem:(id)arg1 fallbackStartLocation:(id)arg2 toMapItem:(id)arg3 viaTransportType:(int)arg4 startTime:(id)arg5 endTime:(id)arg6 fromMode:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)updateChromeToStartNavigationFromMapItem:(id)arg1 fallbackStartLocation:(id)arg2 toMapItem:(id)arg3 viaTransportType:(int)arg4 fromMode:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updateChromeToStartNavigationToMapItem:(id)arg1 viaTransportType:(int)arg2 fromMode:(id)arg3;
- (void)updateChromeToRemoveItemAtLocation:(id)arg1 fromMode:(id)arg2;
- (void)updateChromeToMarkLocation:(id)arg1 fromMode:(id)arg2;
- (void)updateChromeToDisplayAttributionForMapItem:(id)arg1 fromMode:(id)arg2;
- (void)updateChromeToDisplayRegionForMapItem:(id)arg1 fromMode:(id)arg2;

@end