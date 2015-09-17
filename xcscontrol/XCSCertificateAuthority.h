//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSCertificateAuthority : NSObject
{
    NSString *_path;
    NSString *_commonName;
    unsigned long long _type;
    XCSKeychain *_keychain;
}

@property(readonly) XCSKeychain *keychain; // @synthesize keychain=_keychain;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(readonly) NSString *commonName; // @synthesize commonName=_commonName;
@property(readonly) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)issueCertificateForCommonName:(id)arg1 email:(id)arg2 destinationKeychain:(id)arg3 applications:(id)arg4 discardPrevious:(BOOL)arg5 error:(id *)arg6;
- (BOOL)createIfNeededWithAllowedApplications:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 commonName:(id)arg2 type:(unsigned long long)arg3 keychain:(id)arg4;

@end