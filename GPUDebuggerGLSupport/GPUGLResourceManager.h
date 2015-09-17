//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUGLResourceManager : NSObject <GPUResourceManager>
{
    struct unique_ptr<GPUTools::GL::ResourceManager<GPUGLSMObjectTypes>, std::__1::default_delete<GPUTools::GL::ResourceManager<GPUGLSMObjectTypes>>> _spResMgr;
    DYGLCaptureSessionInfo *_captureSessionInfo;
}

+ (unsigned int)realFunctionIndexForIndex:(unsigned int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)loadClientDataBufferFromArchive:(id)arg1 offset:(long long)arg2 functionIndex:(unsigned int)arg3;
- (id)updateResource:(id)arg1;
- (id)loadWireframeImageWithContainerID:(unsigned long long)arg1 functionIndex:(unsigned int)arg2;
- (id)loadResourceWithType:(unsigned int)arg1 containerID:(unsigned long long)arg2 stateMirrorObject:(const void *)arg3 functionIndex:(unsigned int)arg4;
- (id)loadResourceWithItem:(id)arg1 containerID:(unsigned long long)arg2 stateMirrorObject:(const void *)arg3 functionIndex:(unsigned int)arg4;
- (void)invalidateDeviceCache;
- (id)initWithCaptureStore:(id)arg1 resourceStreamer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end