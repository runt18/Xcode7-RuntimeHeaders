//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCCompilerSpecificationSwift : XCCompilerSpecification
{
}

- (BOOL)shouldRemoveOutputsOnFailure;
- (CDUnknownBlockType)processDependencyInfoFileIfNecessaryForCommand:(id)arg1 commandInvocationSucceeded:(BOOL)arg2;
- (id)computeDependenciesForInputNodes:(id)arg1 ofType:(id)arg2 variant:(id)arg3 architecture:(id)arg4 outputDirectory:(id)arg5 withMacroExpansionScope:(id)arg6;
- (void)rememberCompilerDriverForLinkingWithMacroExpansionScope:(id)arg1;
- (void)storeASTBuildingInfoForFileAtPath:(id)arg1 command:(id)arg2 macroExpansionScope:(id)arg3;
- (id)executablePathWithMacroExpansionScope:(id)arg1;

@end