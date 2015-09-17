//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XcodeProject : XcodeContainer
{
}

@property(readonly, copy) XcodeFileReference *userFileReference;
@property(copy) NSArray *projectRoots;
@property(readonly, copy) XcodeFileReference *projectFileReference;
@property(readonly, copy) NSString *projectDirectory;
@property(copy) NSString *organizationName;
- (id)id;
@property(copy) XcodeBuildConfigurationType *defaultBuildConfigurationType;
- (id)Xcode3FileReferences;
- (id)Xcode3Groups;
- (id)targets;
- (id)symbolicBreakpoints;
- (id)schemes;
- (id)itemReferences;
- (id)groups;
- (id)fileReferences;
- (id)fileBreakpoints;
- (id)buildConfigurationTypes;
- (id)buildConfigurations;
- (id)breakpoints;
@property(copy) NSString *productDirectory;
@property(copy) NSString *intermediatesDirectory;
@property(readonly) BOOL currentlyBuilding;
@property(copy) XcodeTarget *activeTarget;
@property(copy) NSString *activeSDK;
@property(copy) XcodeExecutable *activeExecutable;
@property(copy) XcodeBuildConfigurationType *activeBuildConfigurationType;
@property(copy) NSString *activeArchitecture;
- (id)textBookmarks;
- (id)targetTemplates;
- (id)executables;
- (id)bookmarks;

@end