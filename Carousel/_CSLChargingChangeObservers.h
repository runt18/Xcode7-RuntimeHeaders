//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _CSLChargingChangeObservers : NSObject
{
    NSPointerArray *_observers;
    NSLock *_observersLock;
}

@property(retain) NSLock *observersLock; // @synthesize observersLock=_observersLock;
@property(retain, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)observerIsSpecific:(id)arg1;
- (void)iterateThroughObserversOfKind:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)someObserversAreSpecfic;
- (id)init;

@end