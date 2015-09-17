//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRGroupedObjectAllocEvent : XRObjectAllocEvent
{
    unsigned long long *_subIndexes;
    unsigned int _subIndexesCount;
    long long _primaryIndex;
    NSString *_title;
    unsigned long long _slot;
}

- (id)eventTypeName;
- (id)backtrace;
- (id)refCountForDisplay;
- (unsigned long long)slot;
- (long long)integerValue;
- (int)refCountDelta;
- (long long)primaryIndex;
- (unsigned long long)childIndex:(long long)arg1;
- (unsigned int)numberOfEvents;
- (void)dealloc;
- (id)initWithEventTitle:(id)arg1 indexes:(id)arg2 inArray:(id)arg3;

@end