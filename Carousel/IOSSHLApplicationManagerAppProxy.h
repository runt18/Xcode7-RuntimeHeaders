//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IOSSHLApplicationManagerAppProxy : NSObject
{
    _Bool _restricted;
    FBApplicationInfo *_appInfo;
    IOSSHLApplication *_application;
}

+ (void)load;
@property(readonly, nonatomic) IOSSHLApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) FBApplicationInfo *appInfo; // @synthesize appInfo=_appInfo;
- (void).cxx_destruct;
@property(nonatomic, getter=isRestricted) _Bool restricted;
- (void)releaseApplication;
- (void)loadApplication:(_Bool)arg1;

@end