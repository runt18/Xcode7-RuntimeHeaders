//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBCocoaTouchImageCatalogTool : IBAbstractPlatformTool <IBCocoaTouchImageCatalogTool>
{
}

+ (void)main;
- (id)messageReceiveChannel:(id)arg1 preprocessException:(id)arg2;
- (id)messageReceiveChannel:(id)arg1 queueForReceivingMessage:(SEL)arg2;
- (id)compileItemsWithCatalogRelativeIdentifierPaths:(id)arg1 tagSolutionSpace:(id)arg2 options:(id)arg3;
- (void)_MAIN_THREAD_compileItemsWithCatalogRelativeIdentifierPaths:(id)arg1 tagSolutionSpace:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)registerSchemaProviders:(id)arg1 withSchemaProviderContextData:(id)arg2;
- (void)initializeWithArguments:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end