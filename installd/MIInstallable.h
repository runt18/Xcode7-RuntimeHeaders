//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MIInstallable : NSObject
{
    MIBundle *_bundle;
    _Bool _modifyExistingContainers;
    NSDictionary *_userOptions;
    NSURL *_stagingRootURL;
    int _packageFormat;
    CDUnknownBlockType _progressBlock;
}

@property(copy) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly) int packageFormat; // @synthesize packageFormat=_packageFormat;
@property(readonly) NSURL *stagingRootURL; // @synthesize stagingRootURL=_stagingRootURL;
@property(readonly) NSDictionary *userOptions; // @synthesize userOptions=_userOptions;
@property(retain) MIBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)description;
- (id)launchServicesDictionariesWithError:(id *)arg1;
- (_Bool)finalizeInstallationWithError:(id *)arg1;
- (_Bool)postFlightInstallationWithError:(id *)arg1;
- (_Bool)performInstallationWithError:(id *)arg1;
- (_Bool)performVerificationWithError:(id *)arg1;
- (_Bool)performPreflightWithError:(id *)arg1;
- (_Bool)applyPatchWithError:(id *)arg1;
- (id)initWithBundle:(id)arg1 inStagingRoot:(id)arg2 packageFormat:(int)arg3 userOptions:(id)arg4 error:(id *)arg5;

@end