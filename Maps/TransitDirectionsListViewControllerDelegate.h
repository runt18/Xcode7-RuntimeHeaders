//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol TransitDirectionsListViewControllerDelegate <NSObject>
- (void)transitDirectionsListViewController:(TransitDirectionsListViewController *)arg1 didTapClusteredVehiclesCell:(TransitDirectionsClusteredVehiclesCell *)arg2;
- (void)transitDirectionsListViewController:(TransitDirectionsListViewController *)arg1 didTapRowForItem:(TransitDirectionsListItem *)arg2;
- (_Bool)transitDirectionsListViewControllerShouldAllowInfoCardsForEndpoints:(TransitDirectionsListViewController *)arg1;

@optional
- (void)transitDirectionsListViewControllerDidInteractWithRouteOverviewCell:(TransitDirectionsListViewController *)arg1;
@end