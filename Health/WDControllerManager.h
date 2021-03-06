//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDControllerManager : NSObject <UIStateRestoring>
{
    HKHealthStore *_healthStore;
    HKDataCategoryController *_dataCategoryController;
    HKDataUnitGroupController *_dataUnitGroupController;
    HKUnitController *_unitController;
    WDDashboardDataUnitGroupsController *_dashboardDataUnitGroupsController;
    WDDataProviderOrderController *_dataProviderOrderController;
    WDSelectedTimeScopeController *_selectedTimeScopeController;
    WDDateCache *_dateCache;
    HKOutstandingFetchOperationManager *_outstandingFetchOperationManager;
    WDDataCacheController *_dataCacheController;
    WDUpdateController *_updateController;
    WDSampleTypeDateRangeController *_sampleTypeDateRangeController;
}

@property(readonly, nonatomic) WDSampleTypeDateRangeController *sampleTypeDateRangeController; // @synthesize sampleTypeDateRangeController=_sampleTypeDateRangeController;
@property(readonly, nonatomic) WDUpdateController *updateController; // @synthesize updateController=_updateController;
@property(readonly, nonatomic) WDDataCacheController *dataCacheController; // @synthesize dataCacheController=_dataCacheController;
@property(readonly, nonatomic) HKOutstandingFetchOperationManager *outstandingFetchOperationManager; // @synthesize outstandingFetchOperationManager=_outstandingFetchOperationManager;
@property(readonly, nonatomic) WDDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(readonly, nonatomic) WDSelectedTimeScopeController *selectedTimeScopeController; // @synthesize selectedTimeScopeController=_selectedTimeScopeController;
@property(readonly, nonatomic) WDDataProviderOrderController *dataProviderOrderController; // @synthesize dataProviderOrderController=_dataProviderOrderController;
@property(readonly, nonatomic) WDDashboardDataUnitGroupsController *dashboardDataUnitGroupsController; // @synthesize dashboardDataUnitGroupsController=_dashboardDataUnitGroupsController;
@property(readonly, nonatomic) HKUnitController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) HKDataUnitGroupController *dataUnitGroupController; // @synthesize dataUnitGroupController=_dataUnitGroupController;
@property(readonly, nonatomic) HKDataCategoryController *dataCategoryController; // @synthesize dataCategoryController=_dataCategoryController;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;
@property(readonly) Class superclass;

@end