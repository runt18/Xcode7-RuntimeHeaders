//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MSPFavoritesContainer (MapsAdditions)
+ (id)defaultContainer;
- (void)removeFavoriteForMapItem:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)addFavoriteForMapItem:(id)arg1 title:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)hasFavoriteForMapItem:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)removeFavoriteWithIdentifier:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addFavorite:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithMapsPaths:(id)arg1;
@end