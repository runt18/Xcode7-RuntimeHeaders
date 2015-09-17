//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRBarBackgroundViewSettings : NSObject <NSCopying>
{
    double _blurRadius;
    double _saturation;
    UIColor *_color;
}

+ (id)settingsByInterpolatingFrom:(id)arg1 to:(id)arg2 percent:(double)arg3;
+ (id)settingsForSystemBar;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double saturation; // @synthesize saturation=_saturation;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _UIBackdropViewSettings *backdropViewSettings;
- (_Bool)isEqualToSettings:(id)arg1;

@end