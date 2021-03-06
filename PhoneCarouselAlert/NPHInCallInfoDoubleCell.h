//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPHInCallInfoDoubleCell : PUICTableViewCell
{
    _Bool _held;
    _Bool _flashingEndCallToContinue;
    NSString *_displayName;
    NSString *_statusString;
    UILabel *_displayNameLabel;
    UILabel *_statusLabel;
    UILabel *_endCallToContinueLabel;
}

@property(nonatomic, getter=isFlashingEndCallToContinue) _Bool flashingEndCallToContinue; // @synthesize flashingEndCallToContinue=_flashingEndCallToContinue;
@property(readonly, nonatomic) UILabel *endCallToContinueLabel; // @synthesize endCallToContinueLabel=_endCallToContinueLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(nonatomic, getter=isHeld) _Bool held; // @synthesize held=_held;
@property(retain, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)flashEndCallToContinue;
- (void)_installConstraints;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end