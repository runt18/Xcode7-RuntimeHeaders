//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NSRSiriTestDelegate <NSObject>
- (void)setTestConnectionState:(int)arg1;
- (void)presentTestEntryDialog:(NSVSDialog *)arg1;
- (void)presentTestEntryAceObject:(AceObject *)arg1;
- (void)prepareTranscriptForTestInput;
- (void)dismissTestPicker;
@end