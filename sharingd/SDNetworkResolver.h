//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDNetworkResolver : NSObject <SDBonjourResolverDelegate>
{
    void *_session;
    struct __SFNode *_node;
    int _mountedCount;
    int _ejectedCount;
    SDBonjourResolver *_resolver;
    NSNumber *_flags;
    NSString *_protocol;
    id <SDNetworkResolverDelegate> _delegate;
}

@property __weak id <SDNetworkResolverDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy) NSNumber *flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (void)stop;
- (int)start;
- (void)mount;
- (void)bonjourResolverDidChange:(id)arg1;
- (void)mountDiskImageAsync;
- (void)notifyClientAboutResolve:(int)arg1;
- (void)dealloc;
- (id)initWithNode:(struct __SFNode *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end