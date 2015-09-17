//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GEOComposedRoute (NanoTransitExtras)
+ (id)_artworkImageCache;
- (id)_keyForArtwork:(id)arg1 size:(int)arg2 scale:(float)arg3;
- (void)_setArtworkImageInCache:(id)arg1 forKey:(id)arg2;
- (id)_lookupArtworkInCacheWithKey:(id)arg1;
- (id)shieldArtworkWithSize:(int)arg1;
- (struct _NSRange)_unionRange:(struct _NSRange)arg1 withRange:(struct _NSRange)arg2;
- (id)companionSteps;
- (id)_signForTransitTripStep:(id)arg1;
- (id)_signForTransitStationStep:(id)arg1;
- (id)_signForWalkingStep:(id)arg1;
@end