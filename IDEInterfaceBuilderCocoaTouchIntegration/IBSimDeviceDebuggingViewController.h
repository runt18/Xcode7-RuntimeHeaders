//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSimDeviceDebuggingViewController : NSViewController <NSStreamDelegate>
{
    NSLayoutConstraint *_deviceImageAspectRatioConstraint;
    NSInputStream *_consoleStream;
    SimDevice *_device;
    NSImage *_deviceImage;
    NSImageView *_deviceImageView;
    NSTextView *_deviceConsoleTextView;
}

@property(retain) NSTextView *deviceConsoleTextView; // @synthesize deviceConsoleTextView=_deviceConsoleTextView;
@property(retain) NSImageView *deviceImageView; // @synthesize deviceImageView=_deviceImageView;
@property(retain, nonatomic) NSImage *deviceImage; // @synthesize deviceImage=_deviceImage;
@property(retain, nonatomic) SimDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)_updateWindowTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end