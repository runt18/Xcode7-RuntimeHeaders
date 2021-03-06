//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBAHIDEventController : NSObject
{
    BKSHIDEventRouter *_eventRouter;
    NSArray *_savedEventRouters;
}

+ (id)sharedController;
@property(copy, nonatomic) NSArray *savedEventRouters; // @synthesize savedEventRouters=_savedEventRouters;
@property(retain, nonatomic) BKSHIDEventRouter *eventRouter; // @synthesize eventRouter=_eventRouter;
- (void).cxx_destruct;
- (void)stopReceivingEvents;
- (void)startReceivingEvents:(_Bool)arg1;
- (id)init;

@end