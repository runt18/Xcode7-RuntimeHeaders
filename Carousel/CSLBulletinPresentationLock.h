//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLBulletinPresentationLock : NSObject
{
    NSMutableArray *_auditHistory;
    _Bool _isValid;
    BBBulletin *_bulletin;
    unsigned int _presentationState;
    CDUnknownBlockType _handler;
    int _lockCount;
}

@property(readonly, nonatomic) int lockCount; // @synthesize lockCount=_lockCount;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) unsigned int presentationState; // @synthesize presentationState=_presentationState;
@property(retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (void).cxx_destruct;
- (void)invalidate;
- (_Bool)isLocked;
- (void)unlockForReason:(id)arg1;
- (void)lockForReason:(id)arg1;
- (void)_callHandler;
- (void)markAsSeen;
- (id)description;
- (void)dealloc;
- (id)initWithBulletin:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end