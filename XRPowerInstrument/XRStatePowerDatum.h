//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRStatePowerDatum : XRPowerDatum
{
    XRStateStreamDefinition *_definition;
    unsigned char _state;
}

- (void).cxx_destruct;
- (double)valueForColumn:(long long)arg1;
- (id)streamDefinition;
- (id)initWithTimeRange:(struct XRTimeRange)arg1 state:(unsigned char)arg2 definition:(id)arg3;
- (id)initWithTimeRange:(struct XRTimeRange)arg1;

@end