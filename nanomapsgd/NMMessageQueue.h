//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NMMessageQueue : NSObject
{
    unsigned int _maximumPendingMessagesCount;
    unsigned int _maximumInFlightMessagesCount;
    unsigned int _maximumInFlightMessagesSize;
    NSMutableArray *_queue;
    unsigned int _inFlightPayloadsCount;
    unsigned int _inFlightPayloadsSize;
    NSLock *_queueLock;
}

@property(nonatomic) unsigned int maximumInFlightMessagesSize; // @synthesize maximumInFlightMessagesSize=_maximumInFlightMessagesSize;
@property(nonatomic) unsigned int maximumInFlightMessagesCount; // @synthesize maximumInFlightMessagesCount=_maximumInFlightMessagesCount;
@property(nonatomic) unsigned int maximumPendingMessagesCount; // @synthesize maximumPendingMessagesCount=_maximumPendingMessagesCount;
- (void).cxx_destruct;
- (void)removeReply:(id)arg1;
- (void)removeMessage:(id)arg1;
- (void)didSendPayloadWithSize:(unsigned int)arg1;
- (void)willSendPayloadWithSize:(unsigned int)arg1;
- (_Bool)shouldSendNewPayload;
- (void)dequeueMessageIfPossible:(CDUnknownBlockType)arg1 orReply:(CDUnknownBlockType)arg2;
- (void)enqueueReply:(id)arg1 forMessage:(id)arg2 options:(id)arg3;
- (void)enqueueMessage:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)init;

@end