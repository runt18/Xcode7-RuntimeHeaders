//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRQuickSettingsTableViewItem : NSObject
{
    NSString *_name;
    NSString *_key;
    double _maximumValue;
    double _minimumValue;
}

+ (id)itemWithName:(id)arg1 key:(id)arg2 minimumValue:(double)arg3 maximumValue:(double)arg4;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end