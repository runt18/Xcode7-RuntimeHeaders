//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CSLSTileNavigationServiceServerExportedInterface <NSObject>
- (void)navigateToClockAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)enableTileNavigationWithCompletion:(void (^)(void))arg1;
- (void)disableTileNavigationWithCompletion:(void (^)(void))arg1;
@end