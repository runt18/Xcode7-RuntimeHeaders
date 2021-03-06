//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLPersistentTimerInternal : NSObject
{
    PCPersistentTimer *_pcTimer;
    struct CLPersistentTimer *_clTimer;
    CLSilo *_silo;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _strIdentifier;
    NSString *_serviceIdentifier;
    _Bool _wakeDevice;
    double _timeInterval;
    double _minimumEarlyFireProportion;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidate;
- (void)timerFired:(id)arg1;
- (void)bounce_timerFired:(id)arg1;
- (void)dealloc;
- (void)setTimerWithInterval:(double)arg1;
- (void)setNextFireDate:(double)arg1;
- (id)initWithFireDate:(double)arg1 timeInterval:(double)arg2 serviceIdentifier:(const char *)arg3 wakeDevice:(_Bool)arg4 clTimer:(struct CLPersistentTimer *)arg5 silo:(id)arg6 minimumEarlyFireProportion:(double)arg7;

@end