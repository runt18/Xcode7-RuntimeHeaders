//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IOSSHLPresentationContext : NSObject <NSCopying, IOSSHLPresentationContext>
{
    NSString *_presentationIdentifier;
    NSString *_presentationName;
    IOSSHLActivationSettings *_activationSettings;
    IOSSHLDeactivationSettings *_deactivationSettings;
    IOSSHLStateSettings *_stateSettings;
}

+ (id)contextFromPresentation:(id)arg1;
@property(copy, nonatomic) IOSSHLStateSettings *stateSettings; // @synthesize stateSettings=_stateSettings;
@property(copy, nonatomic) IOSSHLDeactivationSettings *deactivationSettings; // @synthesize deactivationSettings=_deactivationSettings;
@property(copy, nonatomic) IOSSHLActivationSettings *activationSettings; // @synthesize activationSettings=_activationSettings;
@property(readonly, nonatomic) NSString *presentationName; // @synthesize presentationName=_presentationName;
@property(readonly, nonatomic) NSString *presentationIdentifier; // @synthesize presentationIdentifier=_presentationIdentifier;
- (void).cxx_destruct;
- (id)_deactivationSettingsDescription;
- (id)_activationSettingsDescription;
- (id)_presentationSettingsDescription;
@property(readonly, copy) NSString *description;
- (void)applyDeactivationSettings:(id)arg1;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;
- (int)flagForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)clearDeactivationSettings;
- (void)applyActivationSettings:(id)arg1;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (_Bool)boolForActivationSetting:(unsigned int)arg1;
- (int)flagForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forActivationSetting:(unsigned int)arg2;
- (void)clearActivationSettings;
- (void)applyStateSettings:(id)arg1;
- (id)objectForStateSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forStateSetting:(unsigned int)arg2;
- (_Bool)boolForStateSetting:(unsigned int)arg1;
- (int)flagForStateSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forStateSetting:(unsigned int)arg2;
- (void)clearStateSettings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 andName:(id)arg2;
- (id)initWithPresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end