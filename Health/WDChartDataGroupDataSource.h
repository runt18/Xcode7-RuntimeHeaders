//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol WDChartDataGroupDataSource <NSObject>
- (id <WDChartPoint>)dataGroup:(WDChartDataGroup *)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;
- (unsigned long long)dataGroup:(WDChartDataGroup *)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDataSetsInGroup:(WDChartDataGroup *)arg1;

@optional
- (NSArray *)dataGroup:(WDChartDataGroup *)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
- (WDChartPointAnnotation *)dataGroup:(WDChartDataGroup *)arg1 annotationForPointInSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;
@end