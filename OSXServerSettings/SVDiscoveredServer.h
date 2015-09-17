//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SVDiscoveredServer : NSObject
{
    NSString *_computerName;
    NSString *_hostName;
    NSString *_modelName;
    NSString *_address;
    NSString *_hardwareAddress;
    NSString *_operatingSystemVersion;
}

+ (id)discoveredServerWithNetService:(id)arg1;
@property(retain, nonatomic) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(retain, nonatomic) NSString *hardwareAddress; // @synthesize hardwareAddress=_hardwareAddress;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(retain, nonatomic) NSString *computerName; // @synthesize computerName=_computerName;
- (void).cxx_destruct;
- (id)initWithNetService:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end