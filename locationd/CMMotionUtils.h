//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CMMotionUtils : NSObject
{
}

+ (_Bool)featureAvailability:(const char *)arg1;
+ (void)setUpCMLogging;
+ (void)tccServiceMotionAccess;
+ (_Bool)isMotionActivityEntitled;
+ (_Bool)sendMessageSync:(shared_ptr_bdcc6d0f)arg1 onConnection:(struct CLConnectionClient *)arg2 timeoutAfter:(double)arg3 withReplyHandler:(CDUnknownBlockType)arg4;
+ (id)sendMessageWithReplySync:(shared_ptr_bdcc6d0f)arg1;
+ (id)logDirectory;

@end