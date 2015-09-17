//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NMNanoMapsXPCInterface
- (void)registerStateSnapshotProvider;
- (void)openURLOnCompanion:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)pingWithTimeout:(double)arg1 requireMapsRunning:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)fetchRouteGeniusRouteWithCompletionHandler:(void (^)(GEOCompanionRouteDetails *, NSError *))arg1;
- (void)setDroppedPin:(MSPDroppedPin *)arg1;
- (void)fetchPinsWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)fetchBookmarkAtIndex:(unsigned int)arg1 withHandler:(void (^)(MSPBookmarkStorage *))arg2;
- (void)fetchBookmarksCount:(void (^)(unsigned int))arg1;
- (void)fetchHistoryDataWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)updateHistoryItem:(MSPHistoryEntryStorage *)arg1;
- (void)dismissNavigationSafetyWarningWithCompletionHandler:(void (^)(void))arg1;
- (void)stopDirectionsWithCompletionHandler:(void (^)(void))arg1;
- (void)clearPreviewRouteWithCompletionHandler:(void (^)(void))arg1;
- (void)startDirectionsToPreviewRouteWithCompletionHandler:(void (^)(void))arg1;
- (void)previewDirectionsFromSource:(GEOMapItemStorage *)arg1 toDestination:(GEOMapItemStorage *)arg2 transportType:(unsigned int)arg3 startTime:(NSDate *)arg4 endTime:(NSDate *)arg5 routeContext:(NSData *)arg6 completionHandler:(void (^)(NSError *, NSNumber *))arg7;
@end