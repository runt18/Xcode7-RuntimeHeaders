//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WebProcessPlugInPageExtensionController : NSObject
{
    WKWebProcessPlugInBrowserContextController *_browserContextController;
    _WKRemoteObjectInterface *_extensionControllerInterface;
    id <SafariExtensionEventsListener> _safariExtensionEventsListener;
    NSMutableDictionary *_extensionToScriptWorldMap;
}

- (void).cxx_destruct;
- (void)clearExtensionScriptWorlds;
- (void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2;
- (void)evaluateJavaScriptForSharingExtension:(id)arg1 javaScript:(id)arg2 replyIdentifier:(id)arg3;
- (id)_extensionEventListenerProxy;
- (void)_clearExtensionControllerInterface;
- (void)_setUpExtensionControllerInterface;
- (void)dealloc;
- (id)initWithBrowserContextController:(id)arg1;

@end