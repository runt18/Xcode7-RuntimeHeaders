//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol StarkRoutePreviewOverlayDelegate <NSObject>
- (void)routePreviewSign:(StarkRoutePreviewOverlaySign *)arg1 isShowingAlternates:(_Bool)arg2;
- (void)routePreviewSign:(StarkRoutePreviewOverlaySign *)arg1 selectedAlternateRouteAtIndex:(unsigned long long)arg2;
- (void)routePreviewSignSelectedStart:(StarkRoutePreviewOverlaySign *)arg1;
- (void)routePreviewSignSelectedPrevious:(StarkRoutePreviewOverlaySign *)arg1;
- (void)routePreviewSignSelectedNext:(StarkRoutePreviewOverlaySign *)arg1;
@end