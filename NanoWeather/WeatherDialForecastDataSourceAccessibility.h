//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WeatherDialForecastDataSourceAccessibility : __WeatherDialForecastDataSourceAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityTimeStringForWeatherData:(id)arg1;
- (_Bool)_accessibilityHasCurrentTemperatureData;
- (_Bool)_accessibilityUserPrefersCelcius;
- (id)_conditionGraphOuterViewFromForecast:(id)arg1 candidateView:(id)arg2;
- (id)_temperatureGraphOuterViewFromForecast:(id)arg1 candidateView:(id)arg2;
- (id)_precipitationGraphOuterViewFromForecast:(id)arg1 candidateView:(id)arg2;
- (id)_conditionGraphCenterView:(id)arg1;
- (id)_temperatureGraphCenterView:(id)arg1;
- (id)_precipitationGraphCenterView:(id)arg1;

@end